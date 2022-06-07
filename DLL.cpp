#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DLL {
    private:
        Node* head;
        Node* tail;
        size_t size;
    public:
        DLL()
            : head(nullptr)
            , tail(nullptr)
            , size(0)  
        {}

        void pushFront(int data ) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->prev = nullptr;
            newNode->next = head;
            head = newNode;
            if(size == 0){
                tail = newNode;
            }
            size++;
        }

        void pushBack(int data ) {
            if( head == nullptr){
                pushFront(data);
                return;
            }

            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
            size++;
        }

        void popFront() {
            if(head != nullptr) {
                Node* newNode = head;
                head = head-> next;
                delete newNode;
                 
                if(size == 1){
                   tail == nullptr;
                }
                size--;
            }
        }

        void popBack(){
                if(head != nullptr) {
                    if(head->next == nullptr) {                       
                        Node* newNode = head;
                        head = nullptr;
                        tail = nullptr;
                        size--;
                        delete newNode;
                    } else {
                        Node* lastNode = tail;
                        tail = tail->prev;
                        tail->next = nullptr;
                        size--;
                        delete lastNode; 
                    }                
                }
        }
        
        void pushAt (int data, int position) {
            if( position < 0 || position > size){
                std::cout << "Invlid value ";
                return;
            }
            if( position == 0) {
                pushFront( data);
            } else if( position == size) {
                pushBack(data);
            } else {
                Node* newNode = new Node();
                newNode->data = data;
                Node* tmp = head;

                int current = 0;
                while( current < position - 1  ) {
                    current++;
                    tmp = tmp->next;
                }
                Node* nextElement = tmp->next; 
                tmp->next = newNode;
                newNode->prev = tmp;
                newNode->next = nextElement;
                nextElement->prev = newNode;
                size++;
            }
        }

        void popAt (int data,int position) {
            if(position < 0 || position > size) {
                std::cout << "Invalid value ";
                return;
            }

            if(position == 0) {
                popFront(data);
            } else if (position == size){
                popBack(data);
        }
            else {
           }
        }

        void display(){
            Node* tmp = head;
            if(tmp == nullptr){
                std::cout << "the list is empty: \n";
                return;
            }
            std::cout << tmp->data << " ";
       
            while( tmp->next != nullptr){
                tmp = tmp->next;
                std::cout << tmp->data << " ";
            } 
            std::cout << "\n";
         }
};

int main() {
    DLL list = DLL();
    list.pushFront(5);
    list.pushFront(13);
    list.pushFront(6);
    list.pushBack(7);
    list.display();
    list.pushAt(10,2);

    list.display();
    list.popFront();
    list.popBack();
    list.display();
    return 0;
}
