//4(A)
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head ;
void push()
{
    int val;
    struct node *ptr=malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&val);
    if(head==NULL)
    {
        ptr->val=val;
        ptr->next=NULL;
        head=ptr;
    }
    else{
        ptr->val=val;
        ptr->next=head;
        head=ptr;
        }
        printf("Item pushed");
}
void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
    printf("underflow");
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("Element popped");
    }
}
void display()
{
    int val;
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    printf("under flow");
    else
    {printf("printing elements");
        while(ptr!=NULL)
        {
            printf("%d",ptr->val);
            ptr=ptr->next;
        }
    }

}
void main()
{
    int choice;
    printf("The operations of stack");
    while(1)
    {printf("1.push(),2.pop(),3.display,4.exit\n");
    printf("Enter choice");
    scanf("%d",&choice);
    switch (choice)

    {
    case 1:push();
        break;
    case 2:pop();
        break;
    case 3:display();
        break;
    case 4:printf("Exit");
        exit(0);
        break;
    
    default:printf("Invalid input");
        break;
    }
    }
}

