// #include<stdio.h>
// int main(){
//     int row = 5;
//     for(int i =0; i< row; i++){
//         for(int j =0; j< 2*i; j++){
//             printf(" ");

//         }
//         for(int k =0; k< row -i; k++){
//             printf("%d ",k + 2);
//         }
//         printf("\n");

//     }
//   return 0;
// }


// #include<stdio.h>
// int main(){
//     int row =5;
//     for(int i = 0; i <row; i++){
//         for(int j =0; j< 2 *i; j++){
//             printf(" ");
//         }
//         for(int k =0; k < 2*(row -i)-1; k++){
//             printf("* ");

//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int row =5;
//     for(int i =0; i<row; i++){
//         for(int j = 0; j < row -i -1; j++){
//             printf(" ");
//         }
//         for(int k =0; k< row; k++){
//             printf("%d ",k+1);
//         }
//         printf("\n");

//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n =5;
    for(int i =0; i<n*2 -1; i++){
        int comp;
        if(i<n)
        comp = 2 *(n -i)-1;
        else
        comp = 2 * (i -n + 1)+1;
        for(int j = 0; j<comp; j++){
            printf(" ");

        }
        for(int k = 0; k< 2 *n - comp; k++){
            printf("* ");
          
        }
          printf("\n");
    }
    return 0;
}
