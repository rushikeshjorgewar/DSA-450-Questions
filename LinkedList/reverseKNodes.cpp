#include<iostream>
using namespace std;

// time complexity - O(n).
// space complexity - O(1).

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* reverseKNodes(node* &head,int key){
      
    if( head == NULL || head->next == NULL){
        return NULL;    
    } 
    
    node* curr = head;
    int count = 0;   
    node* prev = NULL;
    node* forward = NULL;

    while(curr != NULL && count < key ){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(head != NULL){
        head->next = reverseKNodes(forward,key);
    }

    return prev;
}
void print(node* &head){

    node* temp  = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int  main(){

    node* head = new node(1);
    node* second = new node(2);  
    node* third = new node(3);  
    node* forth = new node(4);  
    node* fifth = new node(5);  
    node* six = new node(6);  
    node* seven = new node(7);  
    node* eight = new node(8);  
    node* tail = new node(9);  

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = tail;
    tail->next = NULL;

    print(head);
    cout << endl;

    node* temp = reverseKNodes(head,3);
    print(temp);

    return 0;
}