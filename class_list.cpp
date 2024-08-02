#include <iostream>

//using namespace std;

using namespace std;

class ListNode {
public:
	ListNode(int data) {
		this -> value = data;
		this->prev = nullptr;
		this->next = nullptr;
	}

	void pushBack(int data) {
		ListNode* lastnode = this;
		ListNode* newNode = new ListNode(data);

		while (lastnode->next != nullptr) {
			lastnode = lastnode->next;
		}
		newNode->prev = lastnode;
		lastnode->next = newNode;

	}
	
	void printList() {
		ListNode* Currnode = this;
		while (Currnode != nullptr) {
			std::cout << Currnode->value << " ";
			Currnode = Currnode->next;
		}
		
	}

	void deleteAtIndex(int index) {
		ListNode* Currnode = this;
		//ListNode* Nextnode = Currnode -> next;
		//ListNode* Prevnode = Currnode->prev;
		for (int i = 0; i != index; i++) {
			Currnode = Currnode->next;
		}
		if (Currnode->next != nullptr) {
			ListNode* Nextnode = Currnode->next;
			Nextnode->prev = Currnode->prev;
		}
		if (Currnode->prev != nullptr) {
			ListNode* Prevnode = Currnode->prev;


			//Nextnode->prev = Prevnode;
			Prevnode->next = Currnode->next;
		}
		

		delete Currnode;


	}

	int value;
	ListNode* prev;
	ListNode* next;

	
};

int main() 
{
	ListNode* head = new ListNode(52);
	ListNode headd = ListNode(51);


	head->pushBack(7);
	head->pushBack(8);
	head->printList();
	head->deleteAtIndex(0);
	head->printList();
	//std::cout << head->value;
	//std::cout << headd.value;
	return 0;
}
