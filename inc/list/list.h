#ifndef LIST_H
#define LIST_H

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head);
struct ListNode* removeNthFromEnd(struct ListNode* head, int n);
struct ListNode* removeElements(struct ListNode* head, int val);
struct ListNode* deleteDuplicates(struct ListNode* head);
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);
struct ListNode* getIntersectionNode(struct ListNode *headA, struct ListNode *headB);
struct ListNode* swapPairs(struct ListNode* head);
struct ListNode* rotateRight(struct ListNode* head, int k);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
struct ListNode* insertionSortList(struct ListNode* head);
void reorderList(struct ListNode* head);


// assistant function
void printList(struct ListNode* head);


#endif /* LIST_H */

