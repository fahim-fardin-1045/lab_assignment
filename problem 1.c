/*Write a program in C to display n terms of natural number and their sum.*/

#include <stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a Number to Sum Nth term: \n");
    scanf("%d",&number);
    for(i=0;i<=number;i++){
      sum+=i;
    }
    printf("Sum Of Numbers is: %d",sum);
    return 0;
}
