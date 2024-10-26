  // Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int a,b,c,sum;
   a=0;
   b=1;
     scanf(" %d",&c);
     if (c<=20){

   printf("%d %d ",a,b);

   for (int i=2;i<c;i++){
        
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
       
       
   }}else{
       printf("invalid");
   }
    return 0;
}
