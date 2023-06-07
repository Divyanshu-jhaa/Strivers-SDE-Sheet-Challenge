/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
    vector<int> vis(1e6 + 1, 0);
    Node *temp = head;
    while (temp != NULL)
    {
        vis[temp->data]++;
        if (vis[temp->data] > 1)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}