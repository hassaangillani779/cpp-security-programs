#include <iostream>
using namespace std;

int addNumbers(int a , int b){
	int result = a*b;
	return result;
}

int main(){
	
 int a, b;
 cout<<"Enter number 1 = \n";
 cin>>a;
 cout<<"Enter number 2= \n";
 cin>>b;
 
 int result=addNumbers(a,b);
 cout<<"The sum of a and b is= "<<result;
 return 0;
}
