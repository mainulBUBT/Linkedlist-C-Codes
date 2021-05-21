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
            p=temp;

        }
        else
        {
            temp->left=root;
            root->right=temp;
            root=temp;
        }
    }
    printf("INSERT A NEW NODE \n\n");
    temp=(struct node*)malloc(sizeof (struct node));
    temp->left=NULL;
    temp->right=NULL;
    scanf("%d",&temp->data);
    temp->left=root;
            root->right=temp;
            root=temp;
     printf("\n\n display: ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->right;
    }
}



