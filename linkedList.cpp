#include <iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    public:

    Node *head;

    LinkedList()
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

        Node * temp = head;


        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    void printList()
    {
        Node *ptemp = head;
        while(ptemp != NULL)
        {
            cout<<ptemp->data;
            ptemp = ptemp->next;
        }
    }
    void deleteNode(int num)
    {
       int i = 1;

       if(i == 1)
       {
          head = head->next;
          return;
       }

       Node* temp = head;

       while(i < num-1)
       {
          temp = temp->next;
          i++;
       }
        
       temp->next = temp->next->next;
    }
    void insertAtPos(int val, int pos)
    {
        Node* newNode = new Node(val);
        if(pos == 1)
        {
            Node* temp = head;
            head = newNode;
            head->next = temp;
        }
        else
        {
            int  i = 1;
            Node* temp = head;

            while(i<pos-1)
            {
                temp = temp->next;
                i++;
            }
            if(temp->next == NULL)
            {
                //adding at last
                temp->next = newNode;
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
};
int main()
{
    LinkedList list;
    int pos;

    list.insertNode(1); 
    list.insertNode(2);
    list.insertNode(7);

    list.printList();
   
    cout<<endl<<"At what possition do you want to insert:"<<endl;
    cin>>pos;

    list.insertAtPos(4,pos);
    list.printList();

    int num = 0;

    cout<<endl<<"Enter the position to delete:";
    cin>>num;
    list.deleteNode(num);

    cout<<endl<<"List after deletinng the node:";
    list.printList();

}