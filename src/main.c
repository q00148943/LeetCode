#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	/* struct ListNode n5 = {5, NULL}; */
	/* struct ListNode n4 = {4, &n5}; */
	/* struct ListNode n3 = {3, NULL}; */
	/* struct ListNode n2 = {2, NULL}; */
	struct ListNode n1 = {1, NULL};

	printList(rotateRight(&n1, 1));
    return 0;
}

