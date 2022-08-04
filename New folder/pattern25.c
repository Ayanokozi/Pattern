#include<stdio.h>
int main(){
int n,i,j;
char k;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    k=64+i;
    for ( j = 1; j<=n; j++)
    {if(j<=i){
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