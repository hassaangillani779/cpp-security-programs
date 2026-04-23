#include <iostream>
using namespace std;

void greetUser(string name);

int main(){
	greetUser("Ali");
	return 0;
}

void greetUser(string name){
	cout<<"Hello "<<name<<"--"<<endl;
}
