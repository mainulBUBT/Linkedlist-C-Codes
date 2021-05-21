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
    int n,i,flag=0;
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
   int d;
   printf(" scan a NUMBER :");
   scanf("%d",&d);
    while(root!=NULL)
    {
       if(d==root->data)
       {
           printf(" NUMBER IS FOUND ");
           flag=1;
           break;
       }
       root=root->right;
    }
    if(flag==0)
    {
       printf(" NUMBER IS not FOUND ");

    }
}



