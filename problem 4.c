//Write a program in C to make such a pattern like a pyramid with numbers increased by 1
#include <stdio.h>
int main()
{
      for(int a=2;a<=10;a++){
        printf("%d ",a);
        if(a==3||a==6||a==10){
          printf("\n");
        }
      }
    return 0;
}
