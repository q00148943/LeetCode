#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n7 = {4, NULL};
	struct ListNode n6 = {6, &n7};
	struct ListNode n5 = {5, &n6};
	struct ListNode n3 = {3, &n5};
	struct ListNode n4 = {4, &n3};
	struct ListNode n2 = {2, &n4};

	printList(insertionSortList(&n2));

	struct ListNode node50 = {5, NULL};
	
	printList(insertionSortList(&node50));

	printList(insertionSortList(NULL));
	
	struct ListNode node37_2 = {7, NULL};
	struct ListNode node37_1 = {3, &node37_2};

	printList(insertionSortList(&node37_1));

	struct ListNode node92_2 = {2, NULL};
	struct ListNode node92_1 = {9, &node92_2};

	printList(insertionSortList(&node92_1));
    return 0;
}

