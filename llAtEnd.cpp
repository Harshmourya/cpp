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

void insret(node* &head, int data){
	node* n = new node(data);
	node* temp=head;
	if (head==NULL){
		head =n;return;
	}
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}

void displaly(node* head){
	node* temp=head;
	while (temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}
int main(){
node* head=NULL;
insret(head,4);
insret(head,6);
displaly(head);
cout<<"After insret element at end\n";
insret(head,1);

displaly(head);
return 0;
}