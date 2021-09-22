// SingleLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "listoperation.h"

using namespace std;
node *m_head;

node * insertOneNode(int val)
{
	m_head = new node;
	m_head->data = val;
	cout << " node value\n" << m_head->data;
	m_head->next = nullptr;
	return m_head;
}

void insertNodeAtEnd(int val)
{
	node *p = m_head;
	node *q = p;
	node *newnode = new node;
	newnode->data = val;
	newnode->next = nullptr;
	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = newnode;
}

void display()
{
	node *p = m_head;
	cout << "list values are :";
	while (p != nullptr)
	{
		cout << p->data << endl;;
		p = p->next;

	}
}


int main()
{
	std::cout << "Single List operations";
	
	while (1)

	{
		cout << "1.insert node\n 2.insertNodeAtEnd \n 3. display" << endl;
		int val;
		cin >> val;
		node *head;
		switch (val)
		{

		case 1: insertOneNode(10);
			
			break;

		case 2: //ListOperation listManager;
			//listManager.insertNodeAtEnd(head);

			insertNodeAtEnd(20);
			insertNodeAtEnd(50);
			break;

		case 3: display();
			break;
		
	case 4: exit(0);
	}
}


}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
