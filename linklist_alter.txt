#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node
{
  int data;
  struct node* next;

};


int main()
{
int i,j;
int count;

struct node * head;
head=NULL;

void display(struct node*);
struct node* add(struct node*,int);
struct node* remove(struct node*);
void alter(struct node*);
void display();
count =1;

while(count<=5)
{
head=add(head,count);
count++;

}
display(head);


alter(head);

display(head);




return 0;
}


struct node* add(struct node* head,int ele)
{
 struct node *temp;
 struct node* temp2 =new node;

  temp=head;
 if(head==NULL)
 {
  //temp->data=ele;
  //temp->next=NULL;
 // head->next=temp;
  //head=temp;

  temp2->data=ele;
  temp2->next=NULL;
  head=temp2;
 // cout<<"head null";
  }
  else
  {
     while(temp->next!=NULL)
     {
     temp= temp->next;
     }
     temp2->data=ele;
     temp2->next=NULL;
     temp->next=temp2;
   //  temp= temp2;;
  //   temp->data=ele;
     //temp->next=NULL;
  }
 // cout<<temp->data;
  return head;


}


void display(struct node *head)
{
 struct node* temp ;
temp=head;
//cout<<"now list is";
while(temp!=NULL)
{
 cout<<temp->data;
 temp=temp->next;
}


}


void alter(struct node *head)
{

    struct node * temp =NULL;
    temp=head;
    struct node *prev;
    struct node *cur;
    prev=head;
    cur=head->next;
    int var;
    while(cur->next!=NULL)
    {
        var= prev->data;
        prev->data=cur->data;
        cur->data=var;

        prev=cur->next;
        temp=cur->next;

        cur=temp;
        if(temp->next!=NULL)
        cur=temp->next;

    }


}
