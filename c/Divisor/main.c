  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int n;
     int sum=0;
      
     scanf("%d",&n);
     for (int i=1;i<=n;i++){
          if(n%i==0){
             printf(" %d ",i);
              
          }
             
     }
    return 0;
}