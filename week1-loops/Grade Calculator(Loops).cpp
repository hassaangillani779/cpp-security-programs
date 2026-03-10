#include <iostream>
using namespace std;

int main(){
	int subjects;
	int numbers;
	int t_marks=0;
	float average;
	
	cout <<"How many subjects do you have? : ";
	cin>>subjects;
	for(int i=1; i<=subjects; i++){
		cout <<"Enter the marks of Subject "<<i<<":"<< endl;
		cin>>numbers;
		t_marks= t_marks + numbers;
	}
		
		average= (float) t_marks/subjects;
		if (average>=50){
			cout<<"Pass:";
		}else{
			cout<<"Fail: ";
		}
	
}
