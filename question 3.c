
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data[10];
    struct node *left,*right;
}*root;
 struct node* create(struct node*temp,char i[])
{
if(temp==NULL)
{
     struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
strcpy(newnode->data,i);
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
else
{
    if((strcmp(temp->data,i)>0))
    temp->left=create(temp->left,i);
    else
    temp->right=create(temp->right,i);

}

}
int main()
{  root=NULL;
    int i=0;
    char names[6][10]={"Arthi","Christy","Dorothy","Fraser","Eliza","David"};
    // creting tree of 5 names
    while(i!=5)
    {
        root=create(root,names[i]);
        i++;
    }
    printf("The inorder of tree before insertion of David:");
    inorderprint(root);
    printf("\n");
    printf("The preorder of tree before insertion of David:");
    preorder(root);
     printf("\n");
    // now inserting david in tree
    insert(names[5]);
    // print the inorder
    printf("The inorder of tree after insertion of David:");
    inorderprint(root);
    printf("\n");
    printf("The preorder of tree after insertion of David:");
    preorder(root);

}
void inorderprint( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    inorderprint(temp->left);
printf("%s,",temp->data);

inorderprint(temp->right);

}
}
void preorder( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
 printf("%s,",temp->data);
    preorder(temp->left);
preorder(temp->right);

}
}
void insert(char x[])
{
root=create(root,x);


}


