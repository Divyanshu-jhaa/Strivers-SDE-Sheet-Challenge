/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    int carry = 0;
    Node *res = NULL;
    Node *tail = NULL;
    while (num1 != NULL || num2 != NULL)
    {
        int sum = (num1 != NULL ? num1->data : 0) + (num2 != NULL ? num2->data : 0) + carry;
        carry = sum > 9 ? 1 : 0;
        Node *n = new Node(sum % 10);
        if (res == NULL)
        {
            res = n;
            tail = res;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        num1 = num1 != NULL ? num1->next : NULL;
        num2 = num2 != NULL ? num2->next : NULL;
    }
    if (carry)
    {
        tail->next = new Node(1);
    }
    return res;
}
