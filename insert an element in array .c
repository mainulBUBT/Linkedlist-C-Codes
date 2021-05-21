#include<stdio.h>
int main()
{
    int i,n, f=0,r=0,x;
    printf("how many element you want to add \n");
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)
    {
        if(r==0)
        {
           scanf("%d",&x) ;
           d[r]=x;
           r=f=1;
        }
        else if(r<n)
        {
            r++;
            scanf("%d",&x) ;
            d[r]=x;

        }
        else{
            printf("over flow");
        }
    }

}
