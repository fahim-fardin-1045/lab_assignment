//Write a C program to print prime number from 1 to 200

#include <stdio.h>
int main()
{
    int i,j,f;
    for(i=0;i<200;i++){
      f=0;
      if(i==0||i==1){
        printf("%d is Not A Prime Number\n",i);
      }
      else{
      	
      for(j=2;j<i;j++){
        if(i%j==0){
          f=0;
          break;
        }
        else{ 
          f=1;
        }
      }
      if(f==1){
        printf("%d is a Prime Number\n",i);
      }
      else{
        printf("%d is Not a Prime Number\n",i);
      }
     }
    }
    
}

