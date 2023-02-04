#include<stdio.h>
#include"pallib.h"
//typedef enum { False, True } boolean;
 //  boolean isPalindrome(int x);
int main()
    {
    int input;
    boolean logic;
    while (input != 0)
        {
        printf("Input number:");
        scanf("%d",&input);
        logic = isPalindrome(input);
        printf("\n");
        if(logic == True)
            {
            printf("True\n");
            }
        else 
            {
            printf("False\n");
            }
        }
    return 0;
    }
