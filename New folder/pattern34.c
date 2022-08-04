#include<stdio.h>
int main(){
int n,flag=1,i,k;
printf("Enter number of rows:");
scanf("%d",&n);
for ( i=1,k=0;i<=2*n-1; i++){
    if (i<n-k)
    {
        printf(" ");
        /* code */
    }
    else{
        if (flag)
        {
            printf("*");
            /* code */
        }
        else{
            printf(" ");
        }
        flag=1-flag;
    }
    if(i==n+k){
        k++;
        printf("\n");
        if (i==2*n-1)
        {
            break;
            /* code */
        }
        
        i=0;
        flag=1;
    }
    
}

}