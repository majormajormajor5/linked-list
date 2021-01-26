#include <cstddef>
#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

class List
{
    struct Node
    {
        int data;
        Node *next;
    };

    private:
        Node *head, *tail, *cursor;

    public:
        List()
        {
            head=NULL;
            tail=NULL;
        }

        void add(int data)
        {
            Node *node = new Node();

            node->data = data;

            if (this->head == NULL) {
                this->head = node;
                this->tail = node;
                this->cursor = node;
            } else {
                this->tail->next = node;
                this->tail = node;
            }
        }

        void next()
        {
            this->cursor = this->cursor->next;
        }

        int current()
        {
            if (this->cursor == NULL) {
                return NULL;
            }

            return this->cursor->data;
        }

        void rewind()
        {
            this->cursor = this->head;
        }
};


#endif //LINKED_LIST_LIST_H
