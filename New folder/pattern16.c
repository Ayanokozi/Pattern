#include<stdio.h>
int main(){
int n,i,j,k;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    for ( j = 1; j<=n; j++)
    {if(j==i||j==n+1-i){
        if (i==n+1-j){
            printf("/");
        }
        else{
            printf("\\");
        }
        {
            /* code */
        }
        
        //printf("%d",k);
         // j<n?k++:k--;
        }
        else{
            printf("*");
        }
        /* code */
    }
    printf("\n");
    /* code */
}
return 0;
}