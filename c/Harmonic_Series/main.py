  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int n;
     float di;
     float sum=0;
     scanf("%d",&n);
     for (int i=1;i<=n;i++){
 
         di=1.0/i;
 
         sum=sum+di;
         di=0;
     }
     printf("%lf",sum);
    return 0;
}