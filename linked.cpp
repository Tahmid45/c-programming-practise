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
//insert data in linked list
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
void find_diff(Node *head){
 //find difference
    Node *temp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while(temp!=NULL){
        if(mx < temp->val){
            mx = temp->val;
        }
    }
    while(temp!=NULL){
        if(mn > temp->val){
            mn = temp->val;
        }
    }
    int res=mx-mn;
    cout<<res;

}
//print linked list
/*void print(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}*/
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
    cout<<endl;
    cout<<endl;
    //print(head);
    find_diff(head);
    cout<<size(head);

    return 0;
}
