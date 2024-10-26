  #include <stdio.h>
 int main() {
 
int n,cpy,dgt,f_l,l_l;
int sum=0;
int k=0;

scanf("%d",&n);
cpy=n;

 while(cpy!=0){
     cpy=cpy/10;
     k=k+1;
 }
 
 int arr[k];
 cpy=n;
 
 for (int i=0;i<k;i++){
     dgt=cpy%10;
     arr[i]=dgt;
     cpy=cpy/10;
      }
      
     
 
      if((arr[0]<0)&&(arr[0]>arr[k-1])){
               sum=arr[0]-arr[k-1];
      }
    //   else if((arr[0]<0)&&(arr[0]<arr[k-1])){
    //           sum=arr[k-1]-arr[0];
    //   }
      else
      {
             sum=arr[0]+arr[k-1];
      }
   printf("%d",sum);
      

   return 0;
}