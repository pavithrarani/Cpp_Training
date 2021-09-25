#pragma once



class node
{
public:
	int data;
	struct node *next;

	node()
	{

	}
	node(int val)
	{
		next = nullptr;
		data = val;
	}
	void insertNodeAtEnd(int);
	void insertOneNode(int val);
	void display();
	int getItemfromGivenPosition(int pos);
	void setItemfromGivenPosition(int pos, int val);
};

