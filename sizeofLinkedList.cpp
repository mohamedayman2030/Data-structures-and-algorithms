#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void insertNodeAtLast(int data){
    struct node *Link = (struct node*) malloc (sizeof(struct node));
    Link -> data = data;
    Link -> next = NULL;
    
    if(head == NULL){
        head = Link;
        return;
    }
    current = head;
    while(current -> next != NULL){
        current = current -> next;
    }
    current -> next = Link;
}

void printList(){
    struct node *ptr = head;
    while(ptr != NULL){
        cout << ptr -> data << endl;
        ptr = ptr -> next;
    }
}

void sizeofList(){
    int size = 0;
    if(head == NULL){
        cout<<size;
        return;
    }
    current = head;
    size=1;
    while(current -> next != NULL){
        current = current -> next ;
        size++;
    }
    cout<<"the size of the Linked List is "<<size;
}

int main()
{
    insertNodeAtLast(5);
    insertNodeAtLast(4);
    insertNodeAtLast(3);
    insertNodeAtLast(2);
    insertNodeAtLast(1);
    printList();
    sizeofList();
    return 0;
}
