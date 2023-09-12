#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};  
void inOrderTraversal(node* root){

    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << endl;
    inOrderTraversal(root->right);

}
void buildTreeFromLevelOrder(node* &root){

    queue<node*> q;
    cout << "enter the data for root node " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();

        cout << "enter the data for left node of " << temp->data << endl;
        int leftData ;
        cin >> leftData;
        
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }


        cout << "enter the data for right node of " << temp->data << endl;
        int rightData ;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
        else{
            return;
        }

    }
}
int main(){

    node* root = NULL;

    buildTreeFromLevelOrder(root);
    inOrderTraversal(root);

    return 0;
}