#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
    this->val = val;
    this->next= NULL;
    this->prev = NULL;
    }
};

class myStack{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    void push(int val){
    sz++;
    Node *newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     newNode->prev=tail;
     tail = tail->next;
    }
    void pop(){
    sz--;
     Node *deleteNode = tail;
     tail=tail->next;
     delete deleteNode;
     if(tail==NULL){
        head=NULL;
        return;
     }
     tail->next = NULL;
    }
     int top(){
     return tail->val;
    }
    int size(){
    return sz;
    }
    bool empty(){
    if(sz==0){
        return true;
    }
    else {
        return false;
    }
};
class myQueue{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    void push(int val){
    sz++;
    Node *newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     newNode->prev=tail;
     tail = tail->next;
    }
    void pop(){
    sz--;
     Node *deleteNode = head;
     head=head->next;
     delete deleteNode;
     if(head==NULL){
        tail=NULL;
        return;
     }
     head->prev = NULL;
     delete deleteNode;
    }
    int front(){
     return head->val;
    }
    int size(){
    return sz;
    }
    bool empty(){
    if(sz==0){
        return true;
    }
    else return false;
    }
};

int main()
{
   int n,m;
   cin>>n>>m;
   if(n!=m){
    cout<<"NO";
   }
   else{
     myStack st;
     myQueue q;
   bool flag = false;
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    st.push(x);
   }
   for(int i=1;i<=m;i++){
    int x;
    cin>>x;
    q.push(x);
   }
   while(!q.empty()){
    if(q.front()!=st.top()){
        flag = true;
        break;
    }
    q.pop();
    st.pop();
   }
   if(flag == true){
    cout<<"NO";
   }
   else if(flag == false){
    cout<<"YES";
   }
   }

    return 0;
}
