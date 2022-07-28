#include<iostream>
using namespace std;

// que - delete loop in a linkedList.
// time complexity - O(nlogN).
// space complexity - O(logN).
// approach - 1) using floyd loop detection Algorithm.
// approach - 2) using common logic.

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* detectLoop(node* &head){

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    node* slow = head;
    node* fast = head;

    while(slow!= NULL && fast!= NULL)
    {
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }

        if(slow == fast){
            return slow;
        }

        slow = slow->next;
    }
    return NULL;

}
void deleteLoop(node* &head){
    
    node* mid = detectLoop(head);
    node* curr = head;

    while(curr->next != mid){
        curr = curr->next;
    }
    curr->next = NULL;

}
void print(node* &head){

    node* temp = head;
    while( temp!=NULL){
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
    node*  fifth= new node(5);  
    node* tail = new node(6);  

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = tail;
    tail->next = third;

    // print(head);
    // cout << endl;

    // deleteLoop(head);
    // print(head);
    deleteLoop(head);
    print(head);

    return 0;

}