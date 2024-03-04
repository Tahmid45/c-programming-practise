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
void find_diff(Node *head){
 //find difference

    Node *temp = head;
    int p=0;
      while(temp!=NULL){
         p++;

        temp=temp->next;
    }
    if(p>1){
       int mx = INT_MIN;
    int mn = INT_MAX;

    while(temp!=NULL){
        if(mx < temp->val){
            mx = temp->val;
        }
        temp=temp->next;
    }

    temp = head;
    while(temp!=NULL){
        if(mn > temp->val){
          mn = temp->val;
        }
        temp=temp->next;
    }


    int res=mx-mn;
    cout<<res;
    }
    else{
        cout<<"0";
    }
}
void print_linked(Node *head){
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
  }
}
int main(){
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

    print_linked(head);
    cout<<endl;
    find_diff(head);


 return 0;
}
