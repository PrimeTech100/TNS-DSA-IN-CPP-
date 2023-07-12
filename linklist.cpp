#include <iostream>
class Node
{
    int data;
    Node *next;
};
class Linklist 
{
    int data;
    Node *next;
    public:
        Node(int no)
        {
            data = no;
            next = NULL;
        }
};
class linklist
{
    Node *head;
    public:Linklist(
        {
            head = NULL;
        }
        void create()
        {
            int no;
            std::cout<<"Enter the no. up to 999..";
            std::cin>>no;
            while(no != 999)
            {
                Node *newnode = new Node(no);
                if(head == NULL)
                {
                    head = newnode;
                }
                else
                {
                    Node *temp = head;
                    while(t->next != NULL)
                    {
                        temp = t->next;
                    }
                    t->next = newnode;
                }
                std::cout<<"Enter the no. up to 999..";
                std::cin>>no;
            }
        }
    )
};
int main()
{
    std::cout<<"sing linklist..";
}