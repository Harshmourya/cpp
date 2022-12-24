#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insret(node* &head,int data){
    node* n=new node(data);
    n=head->next;
    head=n;
}

void insretAtEnd(node* head,int data){
    node* n=new node(data);
    node* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }temp->next=n;
}


void display(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
    }cout<<"NULL";
    
}
int main(){
node* head=NULL;

insretAtEnd(head,1);
insretAtEnd(head,2);
insretAtEnd(head,3);
cout<<"after insret at fisrt\n";
insret(head,4);
return 0;
}