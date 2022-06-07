#include <iostream> 

struct node {

    int data;
    node *next;

};

class linkedList {
    private:
        node *head,*tail;
    public:
        linkedList() {
        
            head = NULL;
            tail = NULL;
        }

        void addNode(int n) {
        
            node *tmp = new node;
            tmp->data = n;
            tmp->next = NULL;

            if(head == NULL) {
            
                head = tmp;
                tail = tmp;
            }
            else {
            
                tail->next = tmp;
                tail = tail->next;
            
            }
        
        }
    
        node* gethead() 
        {
            return head;
        }

    void display(node *head) {
    
        if(head == NULL) {
        
            std::cout << "NULL" << std::endl;
        
        }
        else{
        
            std::cout << head->data << std::endl;
            display(head->next);
        }
    }    
};

int main() {

    linkedList a;
    a.addNode(1);
    a.addNode(2);
    a.display(a.gethead());
    return 0;

}
