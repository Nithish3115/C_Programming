 // Online C compiler to run C program online
#include <stdio.h>

int main() {
            int arr[]={ 5,5,5,5,5};
            int size=sizeof(arr)/sizeof(arr[0]);
            if(size==0){
                printf("{}");
            }
            int fre[size];
            for (int i=0;i<size;i++){
                            int k=1;
                           int no=arr[i];
                for(int j=i+1;j<size;j++){
                    
                    if(no==arr[j]){
                                    

                        k++;
                        fre[j]=-1;
                    }
                }
                if(fre[i]!=-1){
                    printf("%d occured %d times\n",arr[i],k );
                    fre[i]=k;
                    
                    
                }
                
            }
             
   
    return 0;
}
