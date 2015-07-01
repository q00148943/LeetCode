#include <stdio.h>

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

