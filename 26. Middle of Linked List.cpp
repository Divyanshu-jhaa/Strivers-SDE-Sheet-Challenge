/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *temp1 = head;
    Node *temp2 = head;
    while (temp2->next != NULL && temp2->next->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    if (temp2->next == NULL)
    {
        return temp1;
    }
    else
    {
        return temp1->next;
    }
}
