#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lt_string.h"

char* multiply(char* num1, char* num2)
{
    if ((num1 == NULL) || (num2 == NULL)) {
        return NULL;
    }

    unsigned int len1 = strlen(num1);
    unsigned int len2 = strlen(num2);

    /* it's impossible that the length of the result exceeds two times of the total */
    int total_len = (len1 + len2) * 2;
    
    char *array = (char*)malloc(total_len);
    if (array == NULL) {
        return NULL;
    }

    memset(array, 0xFF, total_len);

    int num_result   = 0;
    int num_carry   = 0;
    
    int index1        = 0;
    int index2        = 0;
    int index_sum    = 0;
    int index_max    = 0;
    int index_carry = 0;
    
    for (int i = len1; i > 0; i--) {
        index2 = 0;
        
        for (int j = len2; j > 0; j--) {
            num_result = (num1[i - 1] - '0')*(num2[j-1] - '0');
            index_sum  = index1 + index2;

            num_carry   = num_result/10;
            index_carry = index_sum + 1;
            
            /* process carry situation */
            while (num_carry != 0) {
                num_result %= 10;
                
                if (0xFF == (unsigned char)array[index_carry]) {
                    array[index_carry] = num_carry;
                    
                    num_carry = 0;
                    (index_max < (index_carry)) ? (index_max = index_carry) : index_max;
                }
                else {
                    int temp = array[index_carry] + num_carry;
                    num_carry = (temp/10);
                    array[index_carry] = (temp%10);
                    
                    (index_max < (index_carry)) ? (index_max = index_carry) : index_max;
                    index_carry++;
                }
            }

            if (0xFF == (unsigned char)array[index_sum]) {
                array[index_sum] = num_result;
                (index_max < (index_sum)) ? (index_max = index_sum) : index_max;
            }
            else {
                index_carry = index_sum;
                
                do
                {
                    if (0xFF == (unsigned char)array[index_carry]) {
                        array[index_carry] = num_result;
                        
                        (index_max < (index_carry)) ? (index_max = index_carry) : index_max;                        
                        num_carry = 0;
                    }
                    else {
                        int temp = array[index_carry] + num_result;
                        array[index_carry] = temp%10;
                        
                        (index_max < (index_carry)) ? (index_max = index_carry) : index_max;
                        num_result = num_carry = temp/10;
                        index_carry++;
                    }
                } while (num_carry != 0);
            }
            
            index2++;
        }

        index1++;
    }
    
    char c;
    
    int index = index_max++;
    array[index_max] = '\0';

    int zero_all = 1;
    
    for (int i = 0; i < index_max/2; i++) {
        if ((0 != array[i]) || (0 != array[index])) {
            zero_all = 0;
        }

        c = array[i];
        array[i] = array[index] + '0';
        array[index--] = c + '0';
    }

    if ((index_max%2) != 0) {
        if (0 != array[(index_max)/2]) {
            zero_all = 0;
        }

        array[(index_max)/2] += '0';
    }

    if (1 == zero_all) {
        return "0";
    }

    return array;
}

