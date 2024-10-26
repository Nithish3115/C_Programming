#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 
   
   
// Driver code
int main() {
    int arr[] = {5, 2, 3, 4, 5, 6, 5, 8, 9, 10, 1};
     int n = sizeof(arr)/sizeof(arr[0]);
    int maxD = -1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j]) {
                int temp = abs(j - i - 1);
                
                if(maxD<temp){
                    maxD=temp;
                } 
            }
    printf(" : %d",maxD);
    return 0;
}
