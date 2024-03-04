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
void leveNode(Node *root,int x){
    bool flag = true;
    queue<pair <Node*,int>>q;
    q.push({root,1});
    while(!q.empty()){
        pair<Node*,int>pr = q.front();

        Node* node = pr.first;
        int level = pr.second;
        q.pop();
        if(x==level-1){
            cout<<node->val<<" ";
            flag = false;

        }
        if(root->left){
            q.push({root->left,level+1});
        }
        if(root->right){
            q.push({root->right,level+1});
        }
    }
    if(flag==true){
        cout<<"Invalid";
    }
}
int main(){
   Node *root = inputTree();
   int x;
   cin>>x;
   leveNode(root,x);
return 0;
}

