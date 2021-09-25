#include "node.h"
#include <iostream>
#include "Node.h"
using namespace std;

node *m_head;
void node::insertNodeAtEnd(int val)
{
	
	if (m_head == nullptr)
	{
		m_head = new node(val);
		return;
	}
		node *p = m_head;
		node *q = p;
		node *newnode = new node(val);
		while (p->next != nullptr)
		{
			p = p->next;
		}
		p->next = newnode;
	
}

void node::insertOneNode(int val)
{
	
		m_head = new node(val);
		cout << " node value\n" << m_head->data;
}

void node::display()
{
	
		node *p = m_head;
		cout << "list values are :";
		while (p != nullptr)
		{
			cout << p->data << endl;;
			p = p->next;

		}
	
}

int node::getItemfromGivenPosition(int pos)
{
	node *p = m_head;
	while (pos && p != nullptr) {

		pos--;
		if (pos == 0)
			return (p)->data;
		p = p->next;
	}
}

void node::setItemfromGivenPosition(int pos, int val)
{
	node *p = m_head;
	node *newnode = new  node(val);
	while (pos && p != nullptr)
	{
		pos--;
		if (pos == 0)
		{
			//insert new node
			//newnode->next = p->next;
			//p->next = newnode;
			(p)->data = val;
		}
			
		p = p->next;
	}
	
	
}

