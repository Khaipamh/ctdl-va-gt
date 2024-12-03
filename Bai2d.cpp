#include <iostream>
#include <stdexcept>
using namespace std;

template <class E>
struct Node {
    E value;
    Node<E> *next;
    Node(E val, Node<E> *n = NULL) {
        value = val;
        next = n;
    }
};

template <class E>
class SLList {
  protected:
    Node<E> head;
    int size;
  public:
    SLList();
    void print() const{
        Node <E>* temp = head;
        while (temp != NULL){
            cout << temp -> value << " ";
            temp = temp->next;
        }
        cout <<"\n";
    };
    Node<E> *& getLink(int);
    Node<E> *& searchLink(const E & e) ;

    void addFirst(const E & e){
        Node<E> * v = new Node<E>(e);
        v->next = head;
        head = v;
        size ++;
    };
    void addLast(const E & e){
          if (head == NULL){
            addFirst(e);
        }else{
        Node<E> * v = new Node<E>(e);
        Node<E> *n = new Node<E>(e);
        n -> next = NULL;
        Node<E> *temp = head;
        for (int i = 0; i<size;i++){
            temp = temp->next;
        }
        temp -> next = n;
        size ++;
    }
    };
    void addAtIndex(int i, const E & e);
    void removeFirst(){
        if (!head) throw "Danh sach rong \n";
        Node <E> * t = head;
        head = head -> next;
        delete t;
        size --;
    };
    void removeLast(){
        if(head == NULL){
            cout << "DS rong";
        }else if (size == 1 || head ->next == NULL) {
            delete head;
            head = NULL;
           
        }
        else{
            Node<E> *temp = head;
            for (int i = 0; i<size - 2;i++){
                temp = temp ->next;
            }
            delete temp-> next;
            temp -> next = NULL;
            size --;
        }
    };
    void removeAtIndex (int i,const E & e){
        Node<E> *n = new Node<E> (e);
        Node <E> *temp = head;
        if (i == 0){
            addFirst(e);
        }
        else if(i == size){
            addLast(e);
        }else{
        for (int j = 0;j<i-1;j++){
        temp = temp->next;
    }
    }
        n-> next = temp-> next;
        temp -> next = n;
    } ;
    void replace(int i, const E &e){
        if (i<0 || i>size ){ throw out_of_range ("Gia tri khong ton tai");}
        else{ Node <E>* temp = head;
        for (int j = 0; j< i; j++ ){
            temp = temp ->next;
        }
        temp->value = e;
        }
    };
    void replaceKey(const E & e1, const E & e2){
        if (head == NULL){
            cout <<"Danh sach rong\n";
        }else{
        Node <E>* temp = head;
        for (int i = 0; i< size; i++){
            if (temp->value == e1){
                temp->value = e2;
            }
            temp = temp->next;
        }
        }
    };
    void clearList(){
        while (head != NULL) removeFirst();
    };
    virtual ~SLList();

    E front() const{
        if (head == NULL) cout <<"Danh sach rong \n";
        return head->value;
    };
    E back() const{
        if (head == NULL) cout <<"Danh sach rong \n";
        Node<E> * temp = head;
        for (int i = 0; i<size; i++){
            temp = temp->next;
        }
        return temp->value;

    };
    E getElement(int i){
        if (i < 0 || i >= size) throw out_of_range("Gia tro khong ton tai");
        Node<E>* temp = head;
        return temp->value;
    };
    int getSize() const{
        return size;
    };
    bool isEmpty() const{
        return size == 0;
    };
};

int main() {
    return 0;
}
