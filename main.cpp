#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

class LinkedList{
	public:
		Node* head;
		LinkedList(){
			head = NULL;
		}

		void returnL(LinkedList hNode){
			Node* t = hNode.head;
			while(t){
				std::cout << t -> data << "\n";
				t = t -> next;
			}
		}
};

int main() {
  LinkedList lList;
	Node a(1);
	Node b(2);
	Node c(3);
	lList.head = &a;
	a.next = &b;
	b.next = &c;
 
	lList.returnL(lList);
}