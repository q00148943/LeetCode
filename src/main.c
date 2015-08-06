#include <stdio.h>

#include "list.h"
#include "lt_string.h"

int main(int argc, char *argv[])
{
	/* struct ListNode n9 = {9, NULL};	 */
	/* struct ListNode n8 = {8, &n9}; */
	/* struct ListNode n7 = {7, &n8}; */
	/* struct ListNode n6 = {2, NULL}; */
	/* struct ListNode n5 = {5, NULL}; */
	/* struct ListNode n4 = {4, NULL}; */
	/* struct ListNode n3 = {3, &n4}; */
	/* struct ListNode n1; */
	/* struct ListNode n2; */
	/* struct ListNode n3; */
	/* struct ListNode n4; */
	/* struct ListNode n5; */
	/* struct ListNode n6; */
	/* struct ListNode n7; */

	/* n5.val = 5; */
	/* n5.next = &n2; */
	
	/* n4.val = 4; */
	/* n4.next = &n5; */
	
	/* n3.val = 3; */
	/* n3.next = &n2; */
	
	/* n2.val = 2; */
	/* n2.next = &n3; */
	
	/* n1.val = 1; */
	/* n1.next = &n2; */

	/* struct ListNode *node = detectCycle(&n1); */
	/* if (node != NULL) { */
	/* 	printf("node(%d)\n", node->val); */
	/* } */
	/* else { */
	/* 	printf("NULL\n"); */
	/* } */

	char num1[] = "123456789";
	char num2[] = "987654321";
	
	/* char num1[] = "142857"; */
	/* char num2[] = "2"; */
	/* char num3[] = "3"; */
	/* char num4[] = "4"; */
	/* char num5[] = "5"; */
	/* char num6[] = "6"; */
	/* char num7[] = "7"; */

	printf("%s\n", multiply(num1, num2));
	/* printf("%s\n", multiply(num1, num3)); */
	/* printf("%s\n", multiply(num1, num4)); */
	/* printf("%s\n", multiply(num1, num5)); */
	/* printf("%s\n", multiply(num1, num6)); */
	/* printf("%s\n", multiply(num1, num7)); */

    return 0;
}

