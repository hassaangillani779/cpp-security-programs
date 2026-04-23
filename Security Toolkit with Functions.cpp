#include <iostream>
using namespace std;

bool checkPasswordStrength(string password){
	bool hasDigit=false, hasUpper=false;
	for (int i=0; i<password.length(); i++){
		if(isdigit(password[i]))  hasDigit=true;
		if(isupper(password[i]))  hasUpper=true;
	}
	return password.length()>=8 && hasDigit && hasUpper;
	}

string maskPassword(string password){
	for (int i=0; i<password.length()-2; i++){
		password[i]='*';
		
	}
	return password;
}

int main(){
	
	string password;
	
	cout<<"-----Welcome to the Security checker-----\n";
	cout<<"Enter your password: ";
	cin>>password;
	cout<<"\n";
	
	if (checkPasswordStrength(password)){
	cout<<"Your password "<<maskPassword(password)<<" is strong enough. No need to worry-"<<endl;
   }else{
   	cout<<"Your password "<<maskPassword(password)<<" is not strong and can be compromised!!!! Change it immediately---"<<endl;
       	
   }
   return 0;
}
