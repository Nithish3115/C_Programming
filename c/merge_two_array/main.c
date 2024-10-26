 #include <stdio.h>
int main() {
    int taj[]={1, 4, 6, 9, 15};
    int mahal[]={2, 5, 8, 10};
    int i,j,sqr,ft,lgt;
    sqr=sizeof(taj)/sizeof(taj[0]);
    ft=sizeof(mahal)/sizeof(mahal[0]);
    lgt=sqr+ft;
    int rlt[lgt];
    for(i=0;i<sqr;i++){
        rlt[i]=taj[i];
    }
    for(j=0;j<ft;j++){
        rlt[sqr+j]=mahal[j];
    }
    for(i=0;i<lgt;i++){
        for(j=i+1;j<lgt;j++){
            if(rlt[i] > rlt[j]){
                int temp=rlt[i];
                rlt[i]=rlt[j];
                rlt[j]=temp;
            }
        }
    }
    for(i=0;i<lgt;i++){
        printf("%d ",rlt[i]);
    }
    return 0;
}