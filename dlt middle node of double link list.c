#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;




};
int main()
{
    struct node *root=NULL,*temp=NULL,*p=NULL,*k;
    int n,i,c=0,m=0;
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
            k=temp;

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
   printf("\n\n display: ");
    while(root!=NULL)
    {
        printf("%d ",root->data);
        root=root->right;
        c++;
    }
    printf("\n\n number of nodes %d",c);
    m=c/2;
    printf("%d",m);
    int j=1;
    struct node *d ,*e,*h=k;
    while(j<m-1)
    {
        h=h->right;
        j++;

    }
     d=h->right;
     e=d->right;
     //connection
     h->right=e;
     e->left=h;
       printf("\n\n  after dlt display: ");
    while(k!=NULL)
    {
        printf("%d ",k->data);
        k=k->right;

    }

}




