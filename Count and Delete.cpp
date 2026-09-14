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
	int countOccurrences(int key) {
		int count=0;
		Node* temp=head;
		while(temp!=nullptr) {
			if(temp->data==key)
				count++;
			temp=temp->next;
		}
		return count;
	}
	void deleteAll(int key) {
		while(head!=nullptr&& head->data==key) {
			Node* temp=head;
			head=head->next;
			delete temp;
		}
		Node* current=head;
		while(current!=nullptr&&current->next!=nullptr) {
			if(current->next->data==key) {
				Node* temp=current->next;
				current->next=current->next->next;
				delete temp;
			}
			else {
				current=current->next;
			}
		}
	}
};
int main()
{
	LinkedList list;
	int n,value,key;
	cout<<"Enter number of nodes: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0; i<n; i++) {
		cin>>value;
		list.insert(value);
	}
	cout<<"Original list: ";
	list.display();
	cout<<"Enter key to count and delete: ";
	cin>>key;
	int count=list.countOccurrences(key);
	cout << "Number of occurrences of " << key << ": " << count << "\n";
	list.deleteAll(key);
	cout<<"List after deleting all occurrences: ";
	list.display();
	return 0;
}