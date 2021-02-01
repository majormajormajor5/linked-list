#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H
#include <cstddef>

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
        List();

        void add(int data);

        void next();

        int current();

        void rewind();
};

#endif //LINKED_LIST_LIST_H
