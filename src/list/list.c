#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void printList(struct ListNode* head)
{
    if (head == NULL) {
        printf("nil");
    }

    struct ListNode *c = head;
    while (NULL != c) {
        printf("%d ", c->val);
        c = c->next;
    }

    printf("\n");
    return;
}           

struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *h = NULL;
    struct ListNode *c = NULL;
    struct ListNode *n = NULL;

    c = h = head;
    n = c->next;
    while (n != NULL) {
        c->next = n->next;
        n->next = h;
        h = n;
        n = c->next;
    }

    return h;    
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    if (head == NULL) {
        return NULL;
    }

    unsigned int count = 1;
    
    struct ListNode *c = head;
    while (NULL != c->next) {
        ++count;
        c = c->next;
    }

    unsigned int nth = count - n;
    if (0 == nth) {
        /* remove the first node in the list */
        return head->next;
    }

    c = head;
    count = 1;
    while (NULL != c->next) {
        if (nth == (count++)) {
            /* to be or not to be free, that's a quesstion */
            c->next = c->next->next;
            break;
        }
        else {
            c = c->next;
        }
    }

    return head;
}

struct ListNode* removeElements(struct ListNode* head, int val)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *h = head;
    struct ListNode *c = head;
    struct ListNode *p = head;

    do
    {
        if (c->val == val) {
            if (c == h) {
                /* remove the head */
                h = c->next;
                p = c->next;
                c = c->next;
            }
            else {
                p->next = c->next;
                c = p->next;
            }
        }
        else {
            p = c;
            c = c->next;
        }

    } while (c != NULL);

    return h;
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *c = head;
    struct ListNode *n = c->next;

    while (n != NULL) {
        if (c->val == n->val) {
            c->next = n->next;
            n = c->next;
        }
        else {
            c = n;
            n = n->next;
        }
    }

    return head;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if (l1 == NULL) {
        return l2;
    }
    else if (l2 == NULL) {
        return l1;
    }

    struct ListNode *head;
    struct ListNode *c;

    if (l1->val > l2->val) {
        head = l2;
        l2 = l2->next;
    }
    else {
        head = l1;
        l1 = l1->next;
    }

    c = head;
    while ((l1 != NULL) && (l2 != NULL)) {
        if ((l1->val) > l2->val) {
            c->next = l2;
            l2 = l2->next;
            c = c->next;
        }
        else {
            c->next = l1;
            l1 = l1->next;
            c = c->next;
        }
    }

    if (l1 == NULL) {
        c->next = l2;
    }
    else {
        c->next = l1;
    }

    return head;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if ((headA == NULL) || (headB == NULL)) {
        return NULL;
    }

    struct ListNode *a = headA;
    struct ListNode *b = headB;

    while ((a != NULL) && (b != NULL)) {
        a = a->next;
        b = b->next;
    }

    int difference = 0;
    if (a != NULL) {
        do
        {
            difference++;
        } while ((a = a->next) != NULL);

        a = headA;
        while (0 != (difference--)) {
            a = a->next;
        }

        b = headB;
    }
    else if (b != NULL) {
        do
        {
            difference++;
        } while ((b = b->next) != NULL);

        b = headB;
        while (0 != (difference--)) {
            b = b->next;
        }

        a = headA;
    }
    else {
        a = headA;
        b = headB;
    }

    while ((a != NULL) && (b != NULL)) {
        if (a == b) {
            return a;
        }

        a = a->next;
        b = b->next;
    }

    return NULL;
}

struct ListNode* swapPairs(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode h;
    
    h.next = head;
    
    struct ListNode *p = &h;
    struct ListNode *c = p->next;
    struct ListNode *n = c->next;


    while (n != NULL) {
        p->next = n;
        c->next = n->next;
        n->next = c;

        p = c;
        c = c->next;
        if (c == NULL) {
            break;
        }
        else {
            n = c->next;
        }
    }

    return h.next;
}

struct ListNode* rotateRight(struct ListNode* head, int k)
{
    if ((head == NULL) || (k == 0)) {
        return head;
    }

    int n = 0;

    struct ListNode *h;
    
    struct ListNode *node = head;
    while (node != NULL) {
        n++;
        node = node->next;
    }

    k %= n;
    if (k == 0) {
        return head;
    }

    node = head;
    
    n -= k;
    while (n != 1) {
        node = node->next;
        n--;
    }

    h = node->next;
    node->next = NULL;

    node = h;
    while ((node->next != NULL)) {
        node = node->next;
    }

    node->next = head;
    return h;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    if (l1 == NULL) {
        return l2;
    }
    else if (l2 == NULL) {
        return l1;
    }

    struct ListNode *p1;
    struct ListNode *p2;
    struct ListNode *head = l1;

    int sum;
    int quotient = 0;    
    while ((l1 != NULL) && (l2 != NULL)) {
        sum = l1->val + l2->val;
        l1->val = (sum + quotient)%10;
        quotient = (sum + quotient)/10;

        p1 = l1;
        p2 = l2;
        p2->val = quotient;
        
        l1 = l1->next;
        l2 = l2->next;
    }

    if ((l1 == NULL) && (l2 == NULL)) {
        if (0 != quotient) {
            p1->next = p2;
        }
    }
    if (l1 == NULL) {
        if (0 != quotient) {
            if (p2 != NULL) {
                p2->next = NULL;
                p1->next = addTwoNumbers(p2, l2);
            }
        }
        else {
            p1->next = l2;
        }
    }
    else {
        if (0 != quotient) {
            p1->next = addTwoNumbers(p2, p1->next);
        }
    }

    return head;
}

struct ListNode* insertionSortList(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }


    struct ListNode *p;    
    struct ListNode *c;
    struct ListNode *t;
    struct ListNode *n = head->next;
    struct ListNode node;
    
    head->next = NULL;
    node.next = head;

    while (n != NULL) {
        p = &node;
        c = p->next;
        while (c != NULL) {
            if (c->val >= n->val) {
                break;
            }
            else {
                p = c;
                c = c->next;
            }
        }

        p->next = n;
        t = n->next;
        
        if (c == NULL) {
            n->next = NULL;
        }
        else {
            n->next = c;
        }

        n = t;
    }

    return node.next;
}

void reorderList(struct ListNode* head)
{
    if (head == NULL) {
        return;
    }

    int elem_num = 0;
    
    struct ListNode *node = head;
    while (node != NULL) {
        elem_num++;
        node = node->next;
    }

    elem_num = (elem_num + 2 - 1)/2;

    node = head;
    while ((--elem_num) != 0) {
        node = node->next;
    }

    struct ListNode *s = node->next;
    node->next = NULL;
    if (s == NULL) {
        return;
    }

    struct ListNode *t;
    struct ListNode *c = s->next;
    s->next = NULL;

    while (c != NULL) {
        t = c->next;
        c->next = s;
        s = c;
        c = t;
    }

    node = head;
    while (s != NULL) {
        t = s->next;
        s->next = node->next;
        node->next = s;
        node = s->next;
        s = t;
    }
    
    return;
}

struct ListNode* reverseBetween(struct ListNode* head, int b, int e)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *p;
    struct ListNode *c;
    struct ListNode *n;
    
    struct ListNode node;
    node.next = head;

    p = &node;
    c = head;
    n = c->next;

    int count = 1;
    while (n != NULL) {
        if (count >= b) {
            if (count >= e) {
                break;
            }

            c->next = n->next;
            n->next = p->next;
            p->next = n;
            n = c->next;
        }
        else {
            p = p->next;
            c = c->next;
            n = n->next;
        }

        count++;
    }

    return node.next;
}

struct ListNode* deleteDuplicates2(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *p;
    struct ListNode *c;
    
    struct ListNode h;

    h.next = head;

    int deleted = 0;
    
    p = &h;
    c = head;
    while (c->next != NULL) {
        if (c->val == c->next->val) {
            p->next = c->next;
            c = c->next;
            deleted = 1;
        }
        else {
            if (deleted == 1) {
                p->next = c->next;
                c = c->next;
                deleted = 0;
            }
            else {
                p = c;
                c = c->next;
            }
        }
    }

    if (deleted == 1) {
        p->next = c->next;
    }

    return h.next;
}

bool isPalindrome(struct ListNode* head)
{
    if (head == NULL) {
        return true;
    }

    struct ListNode *c = head;

    int nelem = 0;

    /* count sum of the list element */
    while (c != NULL) {
        nelem++;
        c = c->next;
    }

    int nelem_first_half = nelem/2;

    c = head;
    
    struct ListNode *h = head;    
    struct ListNode *n = c->next;
    
    /* reverse the first half of the list */
    while ((--nelem_first_half) > 0) {
        c->next = n->next;
        n->next = h;
        h = n;
        n = c->next;
    }

    if (n != NULL) {
        if ((nelem%2) == 1) {
            n = n->next;
        }

        do
            {
                if (h->val != n->val) {
                    return false;
                }

                n = n->next;
                h = h->next;
            } while (n != NULL);
    }

    return true;
}

void deleteNode(struct ListNode* node)
{
    if (node == NULL) {
        return;
    }

    struct ListNode *n = node->next;
    if (n != NULL) {
        node->val = n->val;
        node->next = n->next;
    }

    return;
}

struct ListNode* sortList(struct ListNode* head)
{
    if (head == NULL) {
        return NULL;
    }

    return head;
}

struct ListNode* partition(struct ListNode* head, int x)
{
    if (head == NULL) {
        return NULL;
    }

    /* list of nodes whose value is equal or less then x */
    struct ListNode a;
    a.next = NULL;
    
    /* list of nodes whose value is larger then x */
    struct ListNode b;
    b.next = NULL;

    struct ListNode *pa = &a;
    struct ListNode *pb = &b;
    
    struct ListNode *node = head;
    while (node != NULL) {
        if (node->val < x) {
            pa->next = node;
            pa = pa->next;
        }
        else {
            pb->next = node;
            pb = pb->next;
        }

        node = node->next;
    }

    if (pa != NULL) {
        pa->next = b.next;
    }

    if (pb != NULL) {
        pb->next = NULL;
    }

    return a.next;
}

struct ListNode* reverseKGroup(struct ListNode* head, int k)
{
    if (head == NULL) {
        return NULL;
    }

    int nelem = 0;

    struct ListNode *p;
    struct ListNode *n;
    
    struct ListNode *c = head;
    while (c != NULL) {
        nelem++;
        c = c->next;
    }

    if ((k <= 1) || (k > nelem)) {
        return head;
    }

    /* number of reverse times */
    int nreverse = nelem/k;

    /* number of reverse elements at a time*/
    int nreverse_elems;

    struct ListNode node;
    node.next = head;

    p = &node;
    c = head;
    n = head->next;
    
    while ((nreverse--) != 0) {
        nreverse_elems = k;
        while ((--nreverse_elems) != 0) {
            c->next = n->next;
            n->next = p->next;
            p->next = n;
            n = c->next;            
        }

        p = c;
        c = n;
        if (n != NULL) {
            n = n->next;
        }
    }

    return node.next;
}


struct ListNode* mergeKLists(struct ListNode** lists, int listsSize)
{
    if (lists == NULL) {
        return NULL;
    }

    struct ListNode head;
    head.next = NULL;

    int i;
    for (i = 0; i < listsSize; i++) {
        
    }

    return NULL;
}

bool hasCycle(struct ListNode *head)
{
    if (head == NULL) {
        return false;
    }

    struct ListNode *node_s1 = head;
    struct ListNode *node_s2 = head->next;

    while ((node_s1 != NULL) && (node_s2 != NULL)) {
        if (node_s1 == node_s2) {
            return true;
        }

        node_s1 = node_s1->next;

        if (node_s2->next != NULL) {
            node_s2 = node_s2->next->next;
        }
        else {
            return false;
        }
    }

    return false;
}

struct ListNode *detectCycle(struct ListNode *head)
{
    struct ListNode *node;
    
    while (head != NULL) {
        if (true == hasCycle(head)) {
            node = head->next;
            head->next = NULL;
            if (false == hasCycle(node)) {
                return head;
            }
            else {
                head = node;
            }
        }

        head = head->next;
    }

    return NULL;
}

struct ListNode* insertList(int value, struct ListNode *listHead)
{
    if (listHead == NULL)
    {
        if ((listHead = (struct ListNode*)malloc(sizeof(struct ListNode))) != NULL)
        {
            listHead->val = value;
            listHead->next = NULL;

            return listHead;
        }

        return NULL;
    }

    struct ListNode *node = listHead;
    while (NULL != node->next)
    {
        node = node->next;
    }

    struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (NULL == temp)
    {
        return listHead;
    }

    temp->val  = value;
    temp->next = NULL;
    node->next = temp;
   
    return listHead;
}

void freeList(struct ListNode *listHead)
{
    struct ListNode *temp;
    
    while (NULL != listHead)
    {
        temp = listHead;
        listHead = listHead->next;
        free(temp);
    }

    return;
}    

