//
//  NodeList.hpp
//  线性表（链表）
//
//  Created by liangqian on 2019/10/26.
//

#ifndef NodeList_hpp
#define NodeList_hpp

#include <iostream>
using namespace std;
struct node
{
    node* next;
    node* last;
    int data;
};

class node_chain
{
private:
    node* head;
    node* tail;
    int length;
public:
    node_chain()
    {
        head = new node;
        tail = new node;
        head->next = tail;
        head->last = nullptr;
        tail->next = nullptr;
        tail->last = head;
        length = 0;
    }
    node_chain(const node_chain &s)
    {
        head = new node;
        tail = new node;
        head->next = tail;
        head->last = nullptr;
        tail->last = head;
        length = 0;
        node* temp = s.head;
        while(temp->next != s.tail)
        {
            temp = temp->next;
            tail->data = temp->data;
            node *p = new node;
            tail->next = p;
            p->last = tail;
            p = tail;
            length++;
        }
        tail->next = nullptr;
    }
    ~node_chain()
    {
        
    }
    
    void add_node(int data)
    {
        tail->data = data;
        tail->next = new node;
        node* p = tail;
        tail = p->next;
        tail->last = p;
        tail->next = nullptr;
        length++;
    }
    void remove_node(int data)
    {
        if(length == 0)
        {
            cout<<"lest is empty"<<endl;
        }
        else
        {
            node* temp = head->next;
            while(temp->next != nullptr)
            {
                if(temp->data == data)
                {
                    node* p = temp->last;
                    p->next = temp->next;
                    temp->next->last = p;
                    delete temp;
                    length--;
                }
                temp = temp->next;
            }
        }
    }
    void remove_all()
    {
        if(length == 0)
        {
            cout<<"lest is empty"<<endl;
        }
        node* temp = head->next;
        while(temp != tail)
        {
            node* t = temp;
            temp = temp->next;
            delete t;
        }
        head->next = tail;
        tail->last = head;
        length = 0;
    }
    void show_list()
    {
        if(length == 0)
        {
            cout<<"list is empty"<<endl;
        }
        else
        {
            node* temp = head->next;
            while(temp != tail)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    void reverse_show()
    {
        if(empty_check())
        {
            cout<<"empty node list"<<endl;
        }
        else
        {
            node* temp = tail->last;
            while(temp != head)
            {
                cout<<temp->data<< " ";
                temp = temp->last;
            }
            cout<<endl;
        }
    }
    void reverse_sort()
    {
        if(length <= 1)
        {
            cout<<"length is "<<length<<"no need to sort"<<endl;
        }
        else
        {
            node* temp1 = head->next;
            for(int i=0;i<length-1;i++)
            {
                node* temp2 = temp1->next;
                for(int j=i+1;j<length;j++)
                {
                    if(temp1->data < temp2->data)
                    {
                        int temp = temp1->data;
                        temp1->data = temp2->data;
                        temp2->data = temp;
                    }
                    temp2=temp2->next;
                }
                temp1 = temp1->next;
            }
        }
    }
    int size()
    {
        return length;
    }
    bool empty_check()
    {
        if(length == 0)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int find(int index)
    {
        if(index<1 || index>length)
        {
            cout<<"illegal input"<<endl;
        }
        else
        {
            node* temp = head->next;
            for(int i=0;i<index;i++)
            {
                temp = temp->next;
            }
            cout<<temp->data<<endl;
        }
        return 0;
    }
    void sort()
    {
        if(length <= 1)
        {
            cout<<"length is "<<length<<"no need to sort"<<endl;
        }
        else
        {
            node* temp1 = head->next;
            for(int i=0;i<length-1;i++)
            {
                node* temp2 = temp1->next;
                for(int j=i+1;j<length;j++)
                {
                    if(temp1->data > temp2->data)
                    {
                        int temp = temp1->data;
                        temp1->data = temp2->data;
                        temp2->data = temp;
                    }
                    temp2=temp2->next;
                }
                temp1 = temp1->next;
            }
        }
    }
};

#endif /* NodeList_hpp */
