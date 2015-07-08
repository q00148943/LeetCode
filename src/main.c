#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n7 = {7, NULL};
	struct ListNode n6 = {6, &n7};
	struct ListNode n5 = {5, &n6};
	struct ListNode n4 = {4, &n5};
	struct ListNode n3 = {3, &n4};
	struct ListNode n2 = {2, &n3};
	struct ListNode n1 = {1, &n2};

	reorderList(&n1);
	printList(&n1);

	struct ListNode node50 = {5, NULL};
	reorderList(&node50);
	printList(&node50);

	struct ListNode node37_3 = {11, NULL};	
	struct ListNode node37_2 = {7, &node37_3};
	struct ListNode node37_1 = {3, &node37_2};

	reorderList(&node37_1);
	printList(&node37_1);

	/* struct ListNode node92_2 = {2, NULL}; */
	/* struct ListNode node92_1 = {9, &node92_2}; */

	/* printList(insertionSortList(&node92_1)); */
    return 0;
}

