   // Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
 int num,cpy,power,val;
 int cr=0;
  scanf("%d",&num);
 int sum=0;
 if(num>0){
 while(num!=0){
     if(num%2==0){
         val=pow(num,3);
                   printf("%d\n",val);

         sum=sum+val;
         val=0;
 
     }
    num--; 
 }
 printf("%d",sum);}
 else{
     printf("Invalid");
 }
 
    return 0;
}
