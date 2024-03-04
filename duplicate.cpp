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
void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;

}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void check_dup(Node *&head,int val){
    Node *temp1=head;
    while(temp1->next!=NULL){
        if(temp1->next->val==val){
            Node *deleteNode=temp1->next;
            temp1->next=deleteNode->next;
            delete deleteNode;
        }
        else{
            temp1=temp1->next;
        }
    }
}
void print(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main() {
    int val;
    Node *head=NULL;
    while(true){
        cin>>val;
        if(val== -1){
            break;
        }
        insert_at_tail(head,val);
    }
    Node *temp=head;
    while(temp!=NULL){
   check_dup(temp,temp->val);
     temp=temp->next;
    }
    print(head);
    return 0;

}
