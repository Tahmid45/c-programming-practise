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
int leafNode(Node *root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
        return 0;
    }
    int l = leafNode(root->left);
    int r = leafNode(root->right);
    return l+r;
}
int main(){
   Node *root = inputTree();
   leafNode(root);
   sort(v.begin(),v.end(),greater<int>());
   for(int x:v){
    cout<<x<<" ";
   }
return 0;
}

