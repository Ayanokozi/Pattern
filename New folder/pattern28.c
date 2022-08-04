#include<stdio.h>
int main(){
int n,i,j;
char k=64;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    k=k+2*(i-1)+1;

    for ( j = 1; j<=n; j++)
    {if(j>=n+1-i){
        printf("%c",k);
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