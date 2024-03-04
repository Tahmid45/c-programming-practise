#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val){
    this->val=val;
    this->next=NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail,int val){
    Node *newNode= new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;

}
void print(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    }
void check(Node *head,int z){
    bool flag = false;
    int pos = 0;
    Node *temp=head;
    while(temp != NULL){
        if(z==temp->val){
            flag = true;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(flag == true){
        cout<<pos<<endl;;
    }
    else{
        cout<<"-1"<<endl;
    }
}
int main(){
    int tst;
    cin>>tst;
    for(int i=1;i<=tst;i++){
        int val;
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        cin>>val;
        if(val== -1){
          break;
        }
        insert_at_tail(head,tail,val);
    }
    print(head);
    int x;
    cin>>x;
    check(head,x);
    }
 return 0;
}

