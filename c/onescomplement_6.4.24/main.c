// //   #include <stdio.h>
// //  int main() {
 
// // int n,dgt ;
 
// // int k=0;

// // scanf("%d",&n);
// // int cpy=n;

// //  while(cpy!=0){
// //      cpy=cpy%10;
// //      printf("%d \n",cpy);
// //      k=k+1;
// //  }
// //  printf("%d",k);
// //  int size=k-1;
// //  int arr[k];
// //  cpy=n;
 
// //  for (int i=0;i<=k;i++){
// //      dgt=cpy%10;
// //      arr[i]=dgt;
// //      cpy=cpy/10;
// //       }
// //   for (int j=0;j<k;j++){
// //      if (arr[j]==0){
// //          arr[j]=1;
// //      }
// //      else if(arr[j]==1) {
// //          arr[j]=0;
// //      }
// //   }      
// //   while(size>=0){
// //       printf("%d",arr[size]);
// //       size--;
// //   }
 
      

// //   return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void find_ones_complement(char binary_number[]) {
//     int length = strlen(binary_number);
//     for (int i = 0; i < length; i++) {
//         if (binary_number[i] == '0') {
//             binary_number[i] = '1';
//         } else if (binary_number[i] == '1') {
//             binary_number[i] = '0';
//         } else {
//             printf("Invalid binary number.\n");
//             exit(1);
//         }
//     }
// }

// int main() {
//     char binary_number[64];

//     printf("Enter a binary number: ");
//     scanf("%s", binary_number);

//      if (binary_number[0] == '-') {
//         printf("Invalid input.\n");
//     } else {
//          find_ones_complement(binary_number);

//          printf("One's complement: %s\n", binary_number);
//     }

//     return 0;
// }





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find_ones_complement(char binary_number[]) {
    int length = strlen(binary_number);
    for (int i = 0; i < length; i++) {
        if (binary_number[i] == '0') {
            binary_number[i] = '1';
        } else if (binary_number[i] == '1') {
            binary_number[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            exit(1);
        }
    }
}

void find_twos_complement(char binary_number[]) {
    find_ones_complement(binary_number);

    int length = strlen(binary_number);
    int carry = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (binary_number[i] == '1' && carry == 1) {
            binary_number[i] = '0';
        } else if (binary_number[i] == '0' && carry == 1) {
            binary_number[i] = '1';
            carry = 0;
        }
    }

     for (int i = 0; i < length; i++) {
        if (binary_number[i] == '0' && carry == 1) {
            binary_number[i] = '1';
            carry = 0;
        } else if (binary_number[i] == '1' && carry == 1) {
            binary_number[i] = '0';
        }
    }

     if (binary_number[0] == '0') {
        for (int i = length; i >= 0; i--) {
            binary_number[i] = binary_number[i - 1];
        }
        binary_number[0] = '1';
    }
}

int main() {
    char binary_number[64];

    printf("Enter a binary number: ");
    scanf("%s", binary_number);

    if (binary_number[0] == '-') {
        find_twos_complement(binary_number + 1);
        printf("Two's complement: -");
    } else {
        find_twos_complement(binary_number);
        printf("Two's complement: ");
    }

    printf("%s\n", binary_number);

    return 0;
}