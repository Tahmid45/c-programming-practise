#include<bits/stdc++.h>
using namespace std;

 class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
    };
Node* inputTree(){
 int val;
 cin>>val;
 Node *root;
 if(val==-1){
    root=NULL;
 }
 else{
    root = new Node(val);
 }
 queue<Node*>q;
 if(root){ q.push(root);}
 while(!q.empty()){
    Node *p=q.front();
    q.pop();

 int l,r;
 cin>>l>>r;
 Node *left;
 Node *right;
 if(l==-1){
    left = NULL;
 }
 else{
    left = new Node(l);
 }
 if(r==-1){
    right=NULL;
 }
 else{
    right = new Node(r);
 }
 p->left=left;
 p->right = right;

 if(p->left){
    q.push(p->left);
 }
 if(p->right){
    q.push(p->right);
 }
 }
 return root;
}
vector<int>v;
void leftNode(Node *root){
   if(root==NULL)return;
   leftNode(root->left);
   v.push_back(root->val);
}
void rightNode(Node *root){
   if(root==NULL)return;
   leftNode(root->right);
   v.push_back(root->val);
}
int main(){
   Node *root = inputTree();
   leftNode(root);
   v.push_back(root->val);
   leftNode(root);
   for(int x:v){
    cout<<x<<" ";
   }
return 0;
}

