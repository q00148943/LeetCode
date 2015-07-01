#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n4 = {4, NULL};
	struct ListNode n3 = {3, &n4};
	struct ListNode n2 = {1, &n3};

	struct ListNode n7 = {2, NULL};
	struct ListNode n1 = {7, &n7};

	printList(mergeTwoLists(&n2, &n1));
    return 0;
}


