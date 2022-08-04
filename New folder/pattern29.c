#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=3*n; i++)
{
    k=1;
    for ( j = 1; j<=2*n-1; j++)
    {if(i<=n){
        if (j>=2*n-i)
        {
            printf("*");
            /* code */
        }
        else{
            printf(" ");
        }
        }
        else if(i<=2*n)
        { k=0;
            if (j==n)
            {
                k=1;
                printf("|");
                /* code */
            }
            if (j<=i-n-1)
            {
                k=1;
                printf("*");
                /* code */
            }
            if (j>=i)
            {
                k=1;
                printf("*");
                /* code */
            }
            if (k==0)
            {
                printf(" ");
                /* code */
            }
        }
        else if (i<=3*n)
        {
            if (j<=3*n+1-i)
            {
                printf("*");
                /* code */
            }
            else{
                printf(" ");
            }
            
            /* code */
        }
        
        /* code */
    }
    printf("\n");
    /* code */
}
return 0;
}