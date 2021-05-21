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

    int t,j=1;
    printf("WHICH POSITION");
    scanf("%d",&t);

    struct node *m,*u=p;


    printf("INSERT A NEW NODE \n\n");
    temp=(struct node*)malloc(sizeof (struct node));
    temp->left=NULL;
    temp->right=NULL;
    scanf("%d",&temp->data);
    if(t>1)
    {


    while(j<t-1)
    {
       u=u->right;
       j++;
    }
    m=u->right;

    u->right=temp;
    temp->left=u;
    temp->right=m;
    m->left=temp;
    }
    else{
         temp->right=p;
         p->left=temp;
         p=temp;
    }
     printf("\n\n display: ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->right;
    }
}




