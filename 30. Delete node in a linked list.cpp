#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> *node)
{
    LinkedListNode<int> *temp = node;
    LinkedListNode<int> *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp->data = temp->next->data;
        temp = temp->next;
    }
    prev->next = NULL;
}