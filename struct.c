#include<stdio.h>
#include<stdio.h>

void push();
void pop();
void display();
void getvalue();

struct node
{
    int data;
    struct node*prev;

};
struct node * top=NULL;
void main()
{
    getvalue();

}

void getvalue()
{
    int n;
    printf("\n enter any number: \n 1.push\n 2.pop\n 3.disply\n 4. exit\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
            break;
        case 3:
            disply();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Error\n");




        }

    }
    void push()
{

    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data:\n");
    scanf("%d",&temp->data);
    temp->prev=top;
    getvalue();


}
void pop()
{
    if(top==NULL)
    {
        printf("struct underflow\n");
        getvalue();
    }
    else
    {
        printf("Element %d is deleted\n",top->data);

        top=top->prev;
        getvalue();

    }
}
void disply()
{
    struct node*temp;
    if(top==NULL)
    {

        printf("No element to disply\n");
        getvalue();

    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {

            printf("%d->",temp->data);
            temp=temp->prev;

        }
        getvalue();

    }
}
