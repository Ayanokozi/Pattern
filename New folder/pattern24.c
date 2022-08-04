#include<stdio.h>
int main(){
int n,i,j,k,num=1;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    i<=(n+1)/2?k++:k--;
    num=k-1;
    for ( j = 1; j<=n; j++)
    {if(j>=(n+1)/2 +1-k&&j<=(n+1)/2 -1+k){
        printf("%d",j<(n+1)/2?num++%10:num--%10);
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