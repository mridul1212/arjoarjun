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
void ins(int x,int pos)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    if(pos==1)
    {
        temp->next=head;
         head=temp;
        return ;
    }
else{
        int i;
        node* temp1;
    temp1=head;
    for( i=0;i<pos-2;i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
}
int main()
{
    head=NULL;
    ins(4,1);
    print();
    return 0;
}
