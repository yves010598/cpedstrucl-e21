#include<stdio.h> 
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct node {
	int data;
	struct node * next;
} *head;

void display(struct node * r) {
  r = head;
  if (r == NULL) {
    return;
  }
  while (r != NULL) {
    printf("%d ", r -> data);
    r = r -> next;
  }
  printf("\n");
}

void push(int num) {
    int push;
    struct node *ptr;
    cout<<"Enter a number to insert: ";
    cin>>push;
    ptr=new node;
    ptr->data=push;
    ptr->next=NULL;
    if(head!=NULL)
        ptr->next=head;
    head=ptr;
    cout<<"Push successful";
}
void pop(int num) {
    struct node *temp;
    if(head==NULL)
    {
        cout<<"The list is empty";
        return;
    }
    temp=head;
    head=head->next;
    cout<<"Poped value is: "<<temp->data;
    delete temp;
}


int main() {
  int i, num, loc;
  struct node * n;
  head = NULL;
  while (1) {
  	system("cls");
    cout<<"Linked List Operations\n";
    cout<<"===============\n";
    cout<<"1.Push\n";
    cout<<"2.Pop\n";
    cout<<"3.Display\n";
    cout<<"4.Exit\n";
    cout<<"Enter your choice : ";
    cin>>i;
    if (i <= 0) {
      cout<<"Enter only an Integer\n";
      exit(0);
    } else {
      switch (i) {
      	  	  
	  case 1:
  		push(num);
  		break;
  		
  	  case 2:
  	  	pop(num);
  	  	break;
  	  	
  	  case 3:
        if (head == NULL) {
        cout<<"List is Empty\n";
        } else {
        cout<<"Element(s) in the list are : ";
          }
        display(n);
        break;
  	  	
  	  case 4:
        return 0; 
        default:
        cout<<"Invalid option\n";
       }
    }
   	getch();    
  }
   return 0;
}
