  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int n;
     int sum=0;
     scanf("%d",&n);
     for (int i=1;i<n;i++){
         if(n%i==0){
             sum=sum+i;
         }else{
             sum=sum+0;
         }
     }
if(sum==n){
         printf("yes");
}else{
         printf("no");
}
    return 0;
}