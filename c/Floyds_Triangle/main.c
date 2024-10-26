      #include <stdio.h>

int main() {
     
int n;
scanf("%d",&n);
for (int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if(((i%2==0)&&(j==0))||(i==j) ||(i%2==0 && j%2==0 )||(i%2!=0 && j%2!=0 && j>0)) {
        printf("1");
            
        }
        else{
            printf("0");
        }
        
    }
    printf("\n");
}
    return 0;
}