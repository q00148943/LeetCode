#include <stdio.h>

#include "list.h"

int main(int argc, char *argv[])
{
	struct ListNode n6 = {6, NULL};
	struct ListNode n5 = {5, &n6};
	struct ListNode n4 = {4, &n5};
	struct ListNode n3 = {3, &n4};
	struct ListNode n2 = {2, &n3};
	
	struct ListNode n1 = {1, &n6};

	struct ListNode *node = getIntersectionNode(&n1, &n2);
	if (node != NULL) {
		printf("value = %d\n", node->val);
	}
	else {
		printf("no intersection\n");
	}
	
    return 0;
}


