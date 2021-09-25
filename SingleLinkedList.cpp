// SingleLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "node.h"

using namespace std;








int main()
{
	std::cout << "Single List operations";
	int pos;
	
	while (1)
	{
		cout << " 1.Add item to list\n 2. Get item from given position\n 3. set and item at given position\n 4. Inserts an item at given position\n 5. remove\n 6. display all items\n 7. Exit" << endl;
		int val,nodeval,data;
		cin >> val;
		node *list = new node();
		switch (val)
		{
		case 1: 
			cout << "Enter values" << endl;
			cin >> nodeval;
			list->insertNodeAtEnd(nodeval);
			break;

		case 2: cout << "Enter the position of node value to fetched" << endl;
			
			cin >> pos;
			data = list ->getItemfromGivenPosition(pos);
			cout << "Data at pos is:" << data << endl;

			break;
		case 3: cout << "Enter the position of node value to set and value" << endl;
			cin >> pos;
			cin >> val;
			list ->setItemfromGivenPosition(pos,val);
		case 6: list->display();
			break; 
		
	case 7: exit(0);
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
