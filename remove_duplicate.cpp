#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void check_pallindrome(Node *head,Node *tail){
    Node *tmp1 = head;
    Node *tmp2 = tail;
    bool flag = false;
    while(tmp1!=NULL){
        if(tmp1->val!=tmp2->val){
            flag = true;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    if(flag == true){
        cout<<"NO";
    }
    else if(flag == false){
        cout<<"YES";
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
     int val;
    cin>>val;
    if(val==-1){
    break;
    }
    insert_tail(head,tail,val);
    }
    check_pallindrome(head,tail);

return 0;
}
