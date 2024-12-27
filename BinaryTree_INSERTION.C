#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
     printf("%d",n->data);
    return n;
   
}
void insert(struct node* root,int key){
    struct node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("can't insert coz no duplicates are allowed in BST");
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node* newnode =create(key);
    if(key<prev->data){
        prev->left=newnode;
    }
    else{
        prev->right=newnode;
    }
}

int main(){
    struct node* p=create(9);
    struct node* p1=create(2);
    struct node* p2=create(10);
    struct node* p3=create(33);
    struct node* p4=create(12);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    insert(p,19);
    printf("inserted element %d",p->right->right->data);

    return 0;
}

