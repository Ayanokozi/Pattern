#include<stdio.h>
int main(){
int n,i,j,k=0;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    i<=(n+1)/2?k++:k--;
    for ( j = 1; j<=n; j++)
    {if(j<=(n+1)/2 +1-k||j>=(n+1)/2 -1+k){
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