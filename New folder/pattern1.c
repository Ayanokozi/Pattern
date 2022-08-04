#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of star:");
    scanf("%d",&n);
    for ( i = 0; i <n ; i++)
    {
        for (j = 0; j <=i; j++)
        {
            printf("*");

            /* code */
        }
        printf("\n");
        /* code */
    }
// for ( i = 0; i < 5; i++)
// {
//     for ( j = 0; j < 5; j++)
//     {if(j<=i){
//         printf("*");}
//         else{
//             printf(" ");
//         }
//         /* code */
//     }
//         printf("\n");
//     /* code */
// }
return 0;
}