#include <iostream>

using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* current=NULL;

void insertNodeAtLast(int data){
    struct node* Link =(struct node*) malloc (sizeof(struct node));
    Link-> data = data;
    Link-> next = NULL;
    if(head == NULL){
        head = Link;
        return;
    }
    current = head;
    while(current -> next != NULL){
        current = current -> next;
    }
    current->next = Link;
}
void printList(){
    struct node* ptr = head;
    if(head == NULL){
        cout<<"empty linked list";
        return;
    }
    while(ptr != NULL){
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
}

void updateElementInLinkedList(int oldElement ,int newElement){
    int pos = 0;
    if(head == NULL){
        cout<<"empty List";
        return;
    }
    current= head;
    while(current!=NULL){
        if(current->data==oldElement){
            current-> data = newElement;
            cout<<"the new element is "<<newElement<<" and its position is "<<pos;
        }
        current = current->next;
        pos++;
    }
}

int main()
{
  insertNodeAtLast(5);
  insertNodeAtLast(4);
  insertNodeAtLast(3);
  insertNodeAtLast(6);
  insertNodeAtLast(1);
  cout << "the old list is ";
  printList();
  cout<<endl;
  updateElementInLinkedList(6,2);
  cout<<endl;
  cout<<"the new list is ";
  printList();
}
