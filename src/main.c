#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n6 = {2, NULL};
	struct ListNode n5 = {2, &n6};
	struct ListNode n4 = {2, &n5};
	struct ListNode n3 = {2, &n4};
	struct ListNode n2 = {1, &n3};
	struct ListNode n1 = {1, &n2};

	printList(deleteDuplicates(&n1));
	
    return 0;
}


