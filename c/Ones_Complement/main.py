  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char n[3000];
    scanf("%s",n);
    int size=sizeof(n)/sizeof(n[0]);
    
    for(int i =0;i<size;i++){
        if(n[i]=='1'){
            n[i]='0';
        }else if(n[i]=='0'){
            n[i]='1';
    }else{
        n[i]=n[i];
    }}
printf("%s",n);
    return 0;
}