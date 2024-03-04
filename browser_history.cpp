#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_tail(Node *&head,Node *&tail, string v){
    Node *newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    string sd;
    while(true){
        cin>>sd;
        if(sd == "end"){
            break;
        }
        insert_tail(head,tail,sd);
    }
    int q;
    cin>>q;

    Node *temp = head;
    Node *cur = tail;
    Node *cur1 = NULL;
    for(int i=1;i<=q;i++){
        string x;
        cin>>x;
        if(x == "visit"){
            string p;
            cin>>p;

            while(temp!=NULL){
                if(temp->val == p){
                    cout<<p<<endl;
                    cur1 = temp;
                    break;
                }
                temp = temp->next;
            }
        }
        if(temp==NULL){
        cout<<"Not Available"<<endl;
            }
        if(x =="prev"){
           cur=cur1;
           if(cur->prev!=NULL){
               cur = cur->prev;
               cout<<cur->val<<endl;
               cur1 = cur;
               }
         else if(cur->prev==NULL){
            cout<<"Not Available"<<endl;

           }
        }
        if(x =="next"){
            cur=cur1;
           if(cur->next==NULL){
                cout<<"Not Available"<<endl;
                }
          else if(cur->next!=NULL){
                cur = cur->next;
                cout<<cur->val<<endl;
              cur1 = cur;
          }

            }

        }

return 0;
}
