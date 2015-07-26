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

void reorderList(struct ListNode* head);

bool isPalindrome(struct ListNode* head);

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
struct ListNode* reverseBetween(struct ListNode* head, int m, int n);
struct ListNode* deleteDuplicates2(struct ListNode* head);


// assistant function
void printList(struct ListNode* head);


#endif /* LIST_H */

