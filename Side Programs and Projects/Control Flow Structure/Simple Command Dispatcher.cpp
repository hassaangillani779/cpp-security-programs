#include <iostream>
using namespace std;

int main()
{
	int num;
	
	while(true)
	{
		cout<<"=== Command Menu ==="<<endl;
		cout<<"1: List Files"<<endl;
		cout<<"2: Check Status"<<endl;
		cout<<"3: Run Scan"<<endl;
		cout<<"4: Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>num;
		
		switch(num)
		{
			case 1:
				cout<<"The file are listed below:\n\n"<<"1:Programs\n2:Data\n3:Files\n4:Pictures"<<endl;
				break;
			case 2:
				cout<<"Checking status========\n\n"<<"Your computer is safe!"<<endl;
				break;
			case 3:
				cout<<"Scanning your device==========\n\n"<<"Five viruses found! Eliminate them now;"<<endl;
				break;
			case 4:
				cout<<"Exiting the terminal!"<<endl;
				return 0;
			default:
				cout<<"Invalid input! Enter from the menu;"<<endl;
				continue;
		}
		
	}
	return 0;
}
