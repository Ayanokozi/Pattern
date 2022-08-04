#include<stdio.h>
int main(){
int n,i,j,k,num=0,p;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1;i<=n; i++)
{
    if(i%2==1){
        num=num+1;}
        else{
            num--;
            num=num+i;
        }
    k=1;
    p=num;
    for ( j = 1; j<=2*n-1; j++)
    {if(j<=2*i-1){
        if (k==1)
        {
            printf("%d",p);
            if(i%2){
                p++;num++;
            }
            else{
                p--;
            }

            /* code */
        }
        else{
            printf("*");
        }
        k=1-k;
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