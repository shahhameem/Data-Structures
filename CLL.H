template <typename T>
class Node
{
public:
    T info;
    Node<T>* next;
    Node<T>* prev;
    Node(T info, Node<T>* next = nullptr, Node<T>* prev = nullptr) {
        this->info = info;
        this->next = next;
        this->prev = prev;
    }
};

template <typename T>
class CircularDoublyLinkedList {
    private:
        Node<T> *head, *tail;
    public:
        CircularDoublyLinkedList(): head(nullptr), tail(nullptr) {}
        ~CircularDoublyLinkedList();
        void create();
        void print();
        void rprint();
        void insertFront(T);
        void insertEnd(T);
        void deleteFront();
        void deleteEnd();
        bool isEmpty() {
            return head == nullptr;
        }
};