#include<stdio.h>
int main(){
int n,i,j,k=0,x;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    i<=(n+1)/2?k++:k--;
    x=1;
    for ( j = 1; j<=(n+1)/2; j++)
    {if(j>=(n+1)/2 +1-k){
        printf("%d",x);
          x++;
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