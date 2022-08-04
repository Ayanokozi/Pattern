#include<stdio.h>
int main(){
int n,i,j,k,t;
printf("Enter number of rows:");
scanf("%d",&n);
t=(n+1)/2;
for ( i=1;i<=n; i++)
{
    if(n%2==0){
        if(i<=t) k++;
        if(i>t+1) k--;

    }
    else
        i<=t?k++:k--;
    for ( j = 1; j<=n; j++)
    {if(j>=t+1-k&&j<=t-1+k){
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