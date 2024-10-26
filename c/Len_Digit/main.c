   // Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
 int num ;
  
 scanf("%d",&num);
 int sum=0;
 if(num>0 || num<0){
   while(num!=0){
      num= num/10;
       sum=sum+1;
   }
     printf("%d",sum);

 }
  
 else if (num==0){
      printf("1");

 }

    return 0;
}