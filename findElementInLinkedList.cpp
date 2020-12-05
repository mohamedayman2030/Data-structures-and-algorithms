#include <iostream>

using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* current=NULL;

void insertNodeAtLast(int data){
    struct node* link = (struct node*) malloc (sizeof(struct node));
    link->data = data;
    link->next = NULL;
    if(head==NULL){
        head=link;
        return;
    }
    current = head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next = link;
    
}

void findElementinLinkedList(int item){
    int pos = 0;
    if(head == NULL){
        cout<<"the list is empty";
        return;
    }
    current = head;
    cout<<endl;
    while(current!=NULL){
        if(current->data==item){
            cout<<"the element is "<<item<<" and it's position is "<<pos;
            return;
        }
        
        current=current->next;
        pos++;
    }
    cout<<"the item not in the list";
}

void printList(){
    struct node*ptr = head;
    if(ptr == NULL){
        cout<<"empty list";
        return;
    }
    
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        
    }
}

int main()
{
    insertNodeAtLast(5);
    insertNodeAtLast(4);
    insertNodeAtLast(3);
    insertNodeAtLast(2);
    insertNodeAtLast(1);
    printList();
    findElementinLinkedList(7);
    return 0;
}