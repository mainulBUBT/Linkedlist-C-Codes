#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;




};
int main()
{
    struct node *root=NULL,*temp=NULL,*p=NULL,*x;
    int n=6,i,j=1,mid=0;
    printf("NUMBER OF NODES : %d",n);

    printf("\n\n create : ");
    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof (struct node));
        temp->next=NULL;
        scanf("%d",&temp->data);
        if(root==NULL)
        {
            root=temp;
            p=temp;
            x=temp;
        }
        else
        {
            root->next=temp;
            root=temp;
        }
    }
    mid=n/2;
    while(j<mid-1)
    {
        x=x->next;
        j++;
    }
    printf("create a new node \n");
    temp=(struct node*)malloc(sizeof (struct node));
    temp->next=NULL;
    scanf("%d",&temp->data);
    temp->next=x->next;
    x->next=temp;


   printf("\n\n display: ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}


