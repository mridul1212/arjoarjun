#include<stdio.h>
#include<stdlib.h>
typedef struct node{

int data;
struct node* next;
}node;
node* head;
void print()
{
    node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=10;
    head->next=(node*)malloc(sizeof(node));
    head->next->data=8;
    head->next->next=(node*)malloc(sizeof(node));
    head->next->next->data=6;
    head->next->next->next=NULL;
    print();
    return 0;
}

