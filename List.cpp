#include "List.h"

List::List()
{
    head= nullptr;
    tail=nullptr;
    cursor=nullptr;
}

inline void List::add(int data)
{
    Node *node = new Node();

    node->data = data;

    if (this->head == nullptr) {
        this->head = node;
        this->tail = node;
        this->cursor = node;
    } else {
        this->tail->next = node;
        this->tail = node;
    }
}

inline void List::next()
{
    this->cursor = this->cursor->next;
}

inline int List::current()
{
    if (this->cursor == nullptr) {
        return NULL;
    }

    return this->cursor->data;
}

inline void List::rewind()
{
    this->cursor = this->head;
}

