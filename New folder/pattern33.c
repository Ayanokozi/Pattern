#include<stdio.h>
int main(){
int n,i,j,p,k=1;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
  p=k;
    for ( j = 1; j<=i; j++)
    {
        printf("%d ",p);
        p=p-(n-i+j);
    }    
    printf("\n");
        k=k+1+n-i;
}
return 0;
}