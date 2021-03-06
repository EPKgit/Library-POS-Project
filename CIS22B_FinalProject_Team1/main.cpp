#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "ControlModule.h"


using namespace std;


int main()
{
    //Name Block:
    cout << "CIS 22B\nFinal Project\nTeam #1\n\nMembers:\nEric Kim\nRonald Martin\nSyed Tihami\nVien Van\n\n";
    
	string filepath;
	cout << "Please enter the path to the inventory file:\n";
	getline(cin, filepath);
	Module *runner = nullptr;
    try {
        runner = new ControlModule("books.txt");
        runner->userInteraction();
        delete runner;
        runner = nullptr;
    }
    catch (Inventory::InvalidFile) {
        cout << "ERROR: Could not open file.\n";
        if (runner != nullptr) delete runner;
    }
    
    return 0;
}
