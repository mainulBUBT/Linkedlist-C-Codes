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
    int n,i,j=1;
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
   printf("\n\n display: ");

     struct node *x=p;
     while(j<n-1)
     {


        p=p->right;
        j++;
     }
     p->right=NULL;

   // p=NULL;
    while(x!=NULL)
    {
        printf("%d ",x->data);
        x=x->right;
    }



}




