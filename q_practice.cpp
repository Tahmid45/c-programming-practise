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
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert_at_tail(Node *&head,int val){
    Node *newNode= new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp=head;
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
void delete_head(Node *&head){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
}
void delete_node(Node *head,int val){
    Node *temp=head;
    for(int i=1;i<=val-1;i++){
        temp=temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main(){
    int val;
    Node *head=NULL;
    while(true){
        cin>>val;
        if(val== -1){
            break;
        }
        insert_at_tail(head,val);
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int v,x;
        cin>>x>>v;
        if(x==0){
            insert_at_head(head,v);
            print(head);
            cout<<endl;
        }
        else if(x==1){
            insert_at_tail(head,v);
            print(head);
            cout<<endl;
        }
        else if(x==2){
            if(v<=size(head)){
                if (v==0){
                    delete_head(head);
                    print(head);
                    cout<<endl;
                }
                else{
                  delete_node(head,v);
                  print(head);
                  cout<<endl;
                }
            }
            else{

               cout<<"invalid"<<endl;
            }
        }

    }
    print(head);
return 0;
}
