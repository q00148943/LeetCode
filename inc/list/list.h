#ifndef LIST_H
#define LIST_H

// clang does not support the bool type, so self-defined here
#define true 1
#define false 0

typedef int bool;

struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node);
void reorderList(struct ListNode* head);

/* #234    Palindrome Linked List*/
bool isPalindrome(struct ListNode* head);

/* #206    Reverse Linked List */
struct ListNode* reverseList(struct ListNode* head);

/* #19    Remove Nth Node From End of List */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n);

/* #203    Remove Linked List Elements */
struct ListNode* removeElements(struct ListNode* head, int val);

/* #83    Remove Duplicates from Sorted List */
struct ListNode* deleteDuplicates(struct ListNode* head);

/* #21    Merge Two Sorted Lists */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);

/* #160    Intersection of Two Linked Lists */
struct ListNode* getIntersectionNode(struct ListNode *headA, struct ListNode *headB);

/* #24    Swap Nodes in Pairs */
struct ListNode* swapPairs(struct ListNode* head);

/* #61    Rotate List */
struct ListNode* rotateRight(struct ListNode* head, int k);

/* #2    Add Two Numbers*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

/* #147    Insertion Sort List*/
struct ListNode* insertionSortList(struct ListNode* head);

/* #92    Reverse Linked List II */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n);

/* #82    Remove Duplicates from Sorted List II*/
struct ListNode* deleteDuplicates2(struct ListNode* head);

/* #148    Sort List*/
struct ListNode* sortList(struct ListNode* head);

/* #86    Partition List */
struct ListNode* partition(struct ListNode* head, int x);

/* #25    Reverse Nodes in k-Group */
struct ListNode* reverseKGroup(struct ListNode* head, int k);

/* #23    Merge k Sorted Lists */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize);

/* #141    Linked List Cycle */
bool hasCycle(struct ListNode *head);

/* 142    Linked List Cycle II */
struct ListNode *detectCycle(struct ListNode *head);

/* assistant function */
void printList(struct ListNode* head);


#endif /* LIST_H */

