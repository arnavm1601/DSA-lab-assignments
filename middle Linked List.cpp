#include <iostream>
using namespace std;
class LinkedList {
	struct Node {
		int data;
		Node* next;
		Node(int value) {
			data=value;
			next=nullptr;
		}
	};
	Node* head;
public:
	LinkedList() {
		head=nullptr;
	}
	void insert(int value) {
		Node* newNode=new Node(value);
		if(head==nullptr) {
			head=newNode;
			return;
		}
		Node* temp=head;
		while(temp->next!=nullptr) {
			temp=temp->next;
		}
		temp->next=newNode;
	}
	void display() {
		Node* temp=head;
		while(temp!=nullptr) {
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL "<<"\n";
	}
	void findMiddle() {
		if(head==nullptr) {
			cout<<"List is empty."<<"\n";
			return;
		}
		Node* slow=head;
		Node* fast=head;
		while(fast!=nullptr&& fast->next!=nullptr) {
			slow=slow->next;
			fast=fast->next->next;
		}
		cout<<"Middle element: "<<slow->data<<"\n";
	}
};
int main()
{
	LinkedList list;
	int n,value;
	cout<<"Enter number of nodes: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0; i<n; i++) {
		cin>>value;
		list.insert(value);
	}
	cout<<"Linked list: ";
	list.display();
	list.findMiddle();
	return 0;
}