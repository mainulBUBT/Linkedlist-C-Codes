#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;




};
int main()
{
    struct node *root=NULL,*temp=NULL,*p=NULL;
    int n,i;
    printf("NUMBER OF NODES : ");
    scanf("%d",&n);
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
        }
        else
        {
            root->next=temp;
            root=temp;
        }
    }
   printf("\n\n display: ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

