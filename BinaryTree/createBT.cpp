#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter the data to insert into the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the data to insert into the right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
}

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        cout << temp->data << endl;
        q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp -> right != NULL){
            q.push(temp->right);
        }

    }
}
void preOrderTraversal(node* root){

    if(root == NULL){
        return ;
    }

    cout << root->data << endl;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void postOrderTraversal(node* root){

    if(root == NULL){
        return ;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << endl;

}
void inOrderTraversal(node* root){

    if(root == NULL){
        return ;
    }

    inOrderTraversal(root->left);
    cout << root->data << endl;
    inOrderTraversal(root->right);

}
void buildTreeFromLevelOrder(node* &root){
    
    queue<node*> q;
    cout << "enter the data for root node" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter the data for left node of " << temp->data << endl;
        int leftData;
        cin >> leftData;
        temp->left = new node(leftData);
        
        if(temp->left != NULL){
            q.push(temp->left);
        }
        
        cout << "enter the data for right node of " << temp->data << endl;
        int rightData;
        cin >> rightData;
        temp->right = new node(rightData);
        
        if(temp->right != NULL){
            q.push(temp->right);
        }

    }

}
int main(){

    node* root = NULL;
    
    // root = buildTree(root);
    // levelOrderTraversal(root);
    // inOrderTraversal(root);
    // preOrderTraversal(root);
    
    buildTreeFromLevelOrder(root);
    levelOrderTraversal(root);
    
    return 0;
}