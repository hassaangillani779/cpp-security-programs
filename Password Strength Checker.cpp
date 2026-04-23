#include <iostream>
using namespace std;

int main(){
	string password;
	bool isEnough=false, hasDigit=false, hasUpper=false;
	
	cout<<"= = = = Password Strength Checker= = = ="<<"\n";
	cout<<"Please enter your password:  ";
	cin>>password;
	cout<<"Analyzing your password strength------"<<"\n";
	if(password.length()>=8){
 	isEnough=true;
	}
	
	for(int i=0; i<password.length(); i++ ){
		if(isdigit(password[i])){
			hasDigit=true;
		}
		if(isupper(password[i])){
			hasUpper=true;
		}
	}
	if(isEnough==true && hasDigit==true && hasUpper==true){
		cout<<"Congratulations;Your password is strong enough**";
	}else {
	if(isEnough==false){
		cout<<"Your code is not long enough!\n";
	} if(hasDigit==false){
		cout<<"Include some digits to make it strong!\n";
	} if (hasUpper==false){
		cout<<"Include atleast one uppercase letter!\n";
	}
		cout<<"Your password is so weak.Immediate action needed!!!";
		
	}
	return 0;
}
