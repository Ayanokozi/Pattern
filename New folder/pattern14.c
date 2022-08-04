#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    k=n-i;
    for ( j = 1; j<=n; j++)
    {if(j<=n+1-i){
        printf("%d",k);
          k--;
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