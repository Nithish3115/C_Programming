 // Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
 int num,cpy,power,val,cr;
 int a=2;
 int k;
 int sum=0;
 
scanf("%d",&num);

cpy=num;
   while(cpy!=0){
        k=k+1;
       cpy=cpy/10;
   }
 
  cpy=num;

 for (int i =0;i<k;i++){
     cpy=num%10;
      power=pow(a,i);
      val=cpy*power;
      sum=sum+val;
     num=num/10;
     
  
 }
 printf("%d",sum);
 
    return 0;
}