//5(A)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};
struct node *front;
struct node *rear;

void insert()
{
    int val;
    struct node *ptr=malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&val);
    ptr->val=val;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        rear->next=NULL;
        front->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        ptr->next=NULL;

    }
}
void delete()
{
    struct node *ptr;
    if(front==NULL)
    printf("underflow");
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
        printf("element popped");

    }
}
void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    printf("Queue is empyt");
    else
    {
        while(ptr!=0);
        {
            printf("%d",ptr->val);
            ptr=ptr->next;
        }
    }
}
void main()
{   
    printf("Queue operation performation");
    int choice;
    
    while(1){
        printf("queue operation");
        printf("1.insert,2.delete,3.display,4.Exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: insert();
            break;
        case 2: delete();
            break;
        case 3:display();
            break;
        case 4:printf("Exit");
            exit(0);
            break;
        default:printf("Invalid input");
            
        }


    }

}