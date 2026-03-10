#include <iostream>
using namespace std;

int main(){
	//Declaring variables
	int password=2319;
	int attempt;
	int tries=0;
	
	bool accessgranted = false;
	// Applying Loop
	while (tries<3)
	{
		cout<<"Enter your password:";
		cin>> attempt;
		tries++;
		// Applying IF Else
		if(attempt==password){
			cout<<"Access Granted"<<endl;
			break;
		}else{
			cout<<"Wrong. Attempts Left: "<<(3-tries)<<endl;
		}
	}
	if (!accessgranted){
		cout<<"Account Locked: ";
	}
	if(attempt == password){
    cout << "Access Granted" << endl;
    accessgranted = true;   // ? this line is missing
    
}
	
}
