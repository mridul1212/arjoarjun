#include<stdio.h>
#include<stdlib.h>
typedef struct node
{

    int data;
    struct node* next;
} node;
node* head;
int print()
{
    int sum =0;
    node* temp;
    temp=head;
    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}
void ins(int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
int main()
{
    head=NULL;
    ins(4);
    ins(8);
    ins(6);
    ins(5);
   int sum= print();
   printf("%d",sum);
    return 0;
}
