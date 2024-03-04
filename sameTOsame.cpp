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
void check(Node *head1, Node *head2){
     Node *temp1=head1;
     int cnt=0;
     int pnt=0;
     while(temp1!=NULL){
        cnt++;
        temp1=temp1->next;
     }
     Node *temp2=head2;
     while(temp2!=NULL){
        pnt++;
        temp2=temp2->next;
     }

     if( cnt==pnt){
         Node *temp1=head1;
         Node *temp2=head2;
        while(temp1!=NULL){
            if(temp1->val==temp2->val){
                temp1=temp1->next;
                temp2=temp2->next;

            }
            else{
                cout<<"NO";
                break;
            }
        }
        if(temp1==NULL){
            cout<<"YES";
        }
     }
     else{
        cout<<"NO";
     }
}
int main(){
        int val;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while(true){
        cin>>val;
        if(val== -1){
          break;
        }
        insert_at_tail(head1,tail1,val);
    }
    int x;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while(true){
        cin>>x;
        if(x== -1){
          break;
        }
        insert_at_tail(head2,tail2,x);
    }
    check(head1,head2);
 return 0;
}
