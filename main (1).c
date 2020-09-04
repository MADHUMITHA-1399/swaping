/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter x and y\n");
    scanf("%d\n%d",&num1,&num2);
    printf("Before swaping\n");
    printf("x=%d\n",num1);
    printf("y=%d\n",num2);
    printf("After swaping without the third variable\n");
    printf("x=%d\n",num2);
    printf("y=%d",num1);

    return 0;
}
