
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;




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
        temp->left=NULL;
        temp->right=NULL;
        scanf("%d",&temp->data);
        if(root==NULL)
        {
            root=temp;
            p=root;

        }
        else
        {
            root->right=temp;
            temp->left=root;
            root=temp;
        }
    }
   printf("\n\n display and dlt : ");
   struct node *d;
    while(p!=NULL)
    {
        d=p;
        printf("%d ",d->data);
        p=p->right;
        d->left=NULL;
        d->right=NULL;
    }
    if(p==NULL)
    {
        printf("no nodes");
    }

}



