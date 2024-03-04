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
int size_d(Node *head){
    Node *temp = head;
    int cnt=0;
    while(temp !=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;

}
void insert_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->prev = newNode;
    head = newNode;
}
void insert_any_pos(Node *head,int pos, int val){
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1;i<=pos-1;i++){
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next = newNode;
    newNode->next->prev=newNode;
    newNode->prev = temp;
}
void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail = tail->next;

}
void delete_head(Node *&head,Node *&tail){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node *&head,Node *&tail){
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail==NULL){
        head = NULL;
        return;
    }
    tail->next=NULL;
}

void delete_any(Node *&head, int p){
    Node *temp = head;
    for(int i=1;i<=p-1;i++){
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next=temp->next->next;
    temp->next->prev= temp;
    delete deleteNode;
}

void print_n(Node *head){
    Node *temp = head;
    cout<<"L -> ";
    while(temp != NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
    }
    cout<<endl;
    }
void print_r(Node *tail){
    Node *temp=tail;
    cout<<"R -> ";
    while(temp != NULL){
    cout<<temp->val<<" ";
    temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int x,v;
        cin>>x>>v;
        int sz = size_d(head);
            if(x==0){
                insert_head(head,tail,v);
                print_n(head);
                print_r(tail);
            }
            else if(x==1){
              insert_tail(head,tail,v);
              print_n(head);
              print_r(tail);
            }
            if(x==2){
                if(v==0){
                    delete_head(head,tail);
                    print_n(head);
                     print_r(tail);
                }
                else if(v==(sz-1)){
                    delete_tail(head,tail);
                    print_n(head);
                     print_r(tail);
                }
                else if(v>0 && v<(sz-1)){
                    delete_any(head,v);
                    print_n(head);
                     print_r(tail);
                }
                else if(v>(sz-1)){
                    print_n(head);
                     print_r(tail);
                }
            }
    }
    return 0;
}

