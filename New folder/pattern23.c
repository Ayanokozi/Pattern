#include<stdio.h>
int main(){
int n,i,j;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    for ( j = 1; j<=n; j++)
    {if((i==1||i==n||j==1||j==n)||(i>=(n+1)/2 -1&&i<=(n+1)/2 +1&&j>=(n+1)/2 -1&&j<=(n+1)/2 +1)&&(i==(n+1)/2 -1||i==(n+1)/2 +1||j==(n+1)/2 -1||j==(n+1)/2 +1)){
        printf("*");
        }
        else{
            printf(" ");

        }
        /* code */
    }
    printf("\n");
    /* code */
}
return 0;
}