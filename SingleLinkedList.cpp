#include <iostream>
using namespace std;
class LinkedList {
	struct Node {
		int data;
		Node* next;

		Node (int value) {
			data=value;
			next=NULL;
		}
	};
	Node* head;
public:
	LinkedList() {
		head=NULL;
	}
	void insertBeginning(int value) {
		Node* newNode=new Node(value);
		newNode->next=head;
		head=newNode;
		cout<<"Node inserted at the beginning\n\n\n";
	}
	void insertEnd(int value) {
		Node* newNode=new Node(value);
		if(head==NULL) {
			head=newNode;
			cout<<"Node inserted at the end\n\n\n";
			return;
		}
		Node* temp=head;
		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp->next=newNode;
		cout<<"Node inserted at end\n\n\n";
	}
	void insertBefore(int value,int target) {
		if(head==NULL) {
			cout<<"List is empty\n\n\n";
			return;
		}
		if(head->data==target) {
			insertBeginning(value);
			return;
		}
		Node* temp=head;
		while(temp->next!=NULL&& temp->next->data!=target) {
			temp=temp->next;
		}
		if(temp->next==NULL) {
			cout<<"Target not found.\n\n\n";
			return;
		}
		Node* newNode= new Node(value);
		newNode->next=temp->next;
		temp->next=newNode;
		cout << "Node inserted before "<< target <<"\n\n\n";
	}
	void insertAfter(int value,int target) {
		Node* temp= head;
		while(temp!= NULL&& temp->data!=target) {
			temp=temp->next;
		}
		if(temp==NULL) {
			cout<<"Target node not found\n\n\n";
			return;
		}
		Node* newNode= new Node(value);
		newNode->next=temp->next;
		temp->next=newNode;
		cout<<"Node inserted after "<<target<<"\n\n\n";
	}
	void deleteBeginning() {
		if(head==NULL) {
			cout<<"List is empty\n\n\n";
			return;
		}
		Node* temp=head;
		head=head->next;
		delete temp;
		cout<<"First node deleted.\n\n\n";
	}
	void deleteEnd() {
		if (head==NULL) {
			cout<<"List is empty.\n\n\n";
			return;
		}
		if(head->next==NULL) {
			delete head;
			head=NULL;
			cout<<"Last node deleted.\n\n\n";
			return;
		}
		Node*temp=head;
		while(temp->next->next!=NULL) {
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
		cout<<"Last node deleted.\n\n\n";
	}
	void deleteNode(int value) {
		if(head==NULL) {
			cout<<"List is empty.\n\n\n";
			return;
		}
		if(head->data==value) {
			deleteBeginning();
			return;
		}
		Node* temp=head;
		while(temp->next!=NULL&&temp->next->data!=value) {
			temp=temp->next;
		}
		if(temp->next==NULL) {
			cout<<"Node not found.\n\n\n";
			return;
		}
		Node* deleteNode=temp->next;
		temp->next=deleteNode->next;
		delete deleteNode;
		cout << "Node " << value << " deleted.\n\n\n";
	}
	void search(int value) {
		Node* temp=head;
		int position=1;
		while(temp!=NULL) {
			if(temp->data==value) {
				cout << "Node " << value << " found at position "<< position << " from head.\n\n\n";
				return;
			}
			temp=temp->next;
			position++;
		}
		cout<<"Node not found.\n\n\n";
	}
	void display() {
		if(head==NULL) {
			cout<<"List is empty.\n\n\n";
			return;
		}
		Node* temp=head;
		cout<<"Linked List.";
		while(temp!=NULL) {
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL\n\n\n";
	}

};

int main()
{
	LinkedList list;
	int ch,value,target;
	do {
		cout<<"1.Insert at Beginning \n";
		cout<<"2.Insert at End \n";
		cout<<"3.Insert Before a Node \n";
		cout<<"4.Insert After a Node \n";
		cout<<"5.Delete from Beginning \n";
		cout<<"6.Delete from End \n";
		cout<<"7.Delete a Specific Node \n";
		cout<<"8.Search a Node \n";
		cout<<"9.Display List \n";
		cout<<"0. Exit\n";

		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch) {
		case 1:
			cout<<"Enter value: ";
			cin>>value;
			list.insertBeginning(value);
			break;
		case 2:
			cout<<"Enter value: ";
			cin>>value;
			list.insertEnd(value);
			break;
		case 3:
			cout<<"Enter new node value : ";
			cin>>value;
			cout<<"Insert before which node? ";
			cin>>target;
			list.insertBefore(value,target);
			break;
		case 4:
			cout<<"Enter new node value : ";
			cin>>value;
			cout<<"Insert after which node? ";
			cin>>target;
			list.insertAfter(value,target);
			break;
		case 5:
			list.deleteBeginning();
			break;
		case 6:
			list.deleteEnd();
			break;
		case 7:
			cout<<"Enter node to delete: ";
			cin>>value;
			list.deleteNode(value);
			break;
		case 8:
			cout<<"Enter value to search: ";
			cin>>value;
			list.search(value);
			break;
		case 9:
			list.display();
			break;
		case 0:
			cout<<"Program terminated.\n";
			break;
		default:
			cout<<"Invalid choice.\n";
		}
	}
	while(ch!=0);
	return 0;
}