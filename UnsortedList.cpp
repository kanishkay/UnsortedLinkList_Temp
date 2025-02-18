

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;
    iterPos = nullptr;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {

}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    Node *currN = head;

    while (currN != nullptr) {
        if (currN -> data == someItem) {
            return true;
        }
        currN = currN -> next;
    }
    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    Node *insertedNode = new Node;
    // Whenever you create a new Node
    // Immediately initialize it
    insertedNode -> next = head;
    insertedNode -> data = item;

    // Bookkeeping stuff
    head = insertedNode;
    length++;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {

}

template<class T>
void UnsortedList<T>::ResetIterator() {

}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return T();
}
