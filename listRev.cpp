#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
class linkedList
{
    public:

    Node* head;
    
    linkedList()
    {
        head = NULL;
    }

    void insertNode(int num)
    {
        Node* newNode = new Node(num);

        if(head == NULL)
        {
            head = newNode;
            return;
        }
        
        Node* temp = head;

        while(temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->next = newNode;
    }
};
int main()
{

}