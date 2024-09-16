#include<iostream>
using namespace std;

class Node
{
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int num)
    {
        this->data = num;
        this->next = NULL;
    }

};

class LinkedList
{
    Node* head;
    

};