#include <iostream>

class Node {
    public:
        int data;
        Node *next;
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = NULL;
        }
        void insertNode(int data);
        void deleteNode();
        void display();
};

void LinkedList:: insertNode(int data) {

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void LinkedList:: deleteNode() {

    Node* temp = head;
    if(head == NULL) {
        std::cout << "Deletion from empty singly Linked Not Possible";
        return;
    }
    head = head->next;
    delete(temp);
}

void LinkedList:: display() {
    Node* temp = new Node();
    temp = head;

    std::cout << "Linked list: ";
    int count = 0;
    
    while(temp!=NULL){
    
        std::cout << temp->data << " "; temp = temp->next;
        count++;
    }
    std::cout << "\nThere are " << count << " items in linked list\n";
    std::cout << std::endl;
}

int main() {

    LinkedList* list = new LinkedList();

    list->insertNode(50);
    list->insertNode(40);
    list->insertNode(30);
    list->insertNode(20);
    list->insertNode(10);

    list->display();
    
    list->deleteNode();
    list->deleteNode();
    list->deleteNode();
    
    list->display();

    return 0;
}


















