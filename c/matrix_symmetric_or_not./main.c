#include <stdio.h>

int main() {
    int n;
    int flag=1;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            if(mat[i][j]!=mat[j][i]){
                flag=0;
                break;
            }
        }
    }

if(flag){
    printf("yes");
}else{
    printf("no");
}
  
    return 0;
}