///Write a program in C to display the n terms of odd natural number and their sum .
#include <stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a Number to Sum Nth term of Odd Number: \n");
    scanf("%d",&number);
    for(i=1;i<=number;i+=2){
      sum+=i;
    }
    printf("Sum Of Odd  Numbers is: %d",sum);
    return 0;
}
