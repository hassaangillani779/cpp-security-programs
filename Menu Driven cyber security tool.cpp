#include <iostream>
#include <iomanip>
using namespace std;

string passwordStrength(string password){
	bool length = false;
	bool digUpper = false;
	if(password.length()>=8){
		length=true;
	}
	for (int i=0; i<password.length(); i++){
		if (isdigit(password[i]) || isupper(password[i])){
			digUpper=true;
		}
	}
	if(length && digUpper){
		return "Strong Password%";
	}else{
		return "Weak Password!!";
	}
}

int chrChecker(string password1, char target){
	for(int i=0; i<password1.length(); i++){
		if (target==password1[i]){
			return i;
		}
			
		}
		return -1;	
}

int countVowels(string pass2){
	int vowels=0;
	for (int i=0; i<pass2.length(); i++){
		char a = pass2[i];
		if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
		   a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
		   	vowels++;
		   }
	}
	return vowels;
}



int main(){
	
	string password;
	cout<<setw(40)<<"----Security Toolkit----\n";
	
	
	
	int value;
	char target;
	do{
		cout<<"Enter your password or any string:  ";
	    cin>>password;
		cout<<"1: Check Password Strength\n";
		cout<<"2: Find Character String\n";
		cout<<"3: Count Vowels in Output\n";
		cout<<"4: Exit\n\n";
		cout<<"Enter your option: ";
		cin>>value;
		
		if(value == 1){
			cout<<passwordStrength(password)<<endl;
		}else if (value == 2){
			cout<<"Enter a character you want to find: ";
			cin>>target;
			cout<<chrChecker(password, target)<<endl;
		}else if(value == 3){
			cout<<countVowels(password)<<endl;
		}else {
			cout<<"Invalid No!! Enter between 1 to 4\n\n";
		}
	}while(value != 4);
	
}
