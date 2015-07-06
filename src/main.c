#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n7 = {4, NULL};
	struct ListNode n6 = {6, &n7};
	struct ListNode n5 = {5, &n6};
	
	struct ListNode n3 = {3, NULL};
	struct ListNode n4 = {4, &n3};
	struct ListNode n2 = {2, &n4};

	printList(addTwoNumbers(&n2, &n5));

	struct ListNode node50 = {5, NULL};
	struct ListNode node51 = {5, NULL};
	
	printList(addTwoNumbers(&node50, &node51));

	struct ListNode node37_2 = {7, NULL};
	struct ListNode node37_1 = {3, &node37_2};

	struct ListNode node92_2 = {2, NULL};
	struct ListNode node92_1 = {9, &node92_2};

	printList(addTwoNumbers(&node37_1, &node92_1));
    return 0;
}

