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
   printf("\n\n dlt all nodes and display: ");
   struct node *q=NULL,*x;
    while(p!=NULL)
    {   q=p;
        printf("%d ",q->data);
        p=p->next;
        q->next=NULL;
    }
    x=p;
    printf("\n\n after dlt :  ");
    if(x==NULL)
    {
        printf("NO NODES");
    }
    else{


     while(x!=NULL)
    {
        printf("%d ",x->data);
        x=x->next;
    }
    }

}


