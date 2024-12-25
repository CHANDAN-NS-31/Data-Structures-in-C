#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traverse(struct node*head)
{   
    struct node*temp;
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    
    }
}
void insertatbeginning(struct node*head)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data to insert");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}
int main()
{
    struct node *head,*newnode,*temp;
    int choice;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("continue (0,1)?");
        scanf("%d",&choice);
    }
    insertatbeginning(head);
    traverse(temp);
    
    return 0;
}