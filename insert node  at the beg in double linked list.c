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

        }
        else
        {
            p=root;
            while(p->right!=NULL)
            {
                p=p->right;
            }
            p->right=temp;
            temp->left=p;
        }
    }
    printf("INSERT A NEW NODE \n\n");
    temp=(struct node*)malloc(sizeof (struct node));
    temp->left=NULL;
    temp->right=NULL;
    scanf("%d",&temp->data);
    temp->right=root;
    root->left=temp;
    root=temp;

   printf("\n\n display: ");
    while(root!=NULL)
    {
        printf("%d ",root->data);
        root=root->right;
    }
}


