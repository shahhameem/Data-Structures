template <typename T>
class Node
{
public:
    T info;
    Node<T>* next;
    Node(T info, Node<T>* next = nullptr) {
        this->info = info;
        this->next = next;
    }
};

template <typename T>
class SinglyLinkedList {
    private:
        Node<T> *head, *tail;
    public:
        SinglyLinkedList() {
            tail = head = nullptr;
        }
        ~SinglyLinkedList();
        int isEmpty() {
            return head == nullptr;
        }
        void print();
        void addToHead(T);
        void addToTail(T);
        void deleteFromHead();
        void deleteFromTail();
        void deleteNode(T);
        //bool isInList(T) const;
};
