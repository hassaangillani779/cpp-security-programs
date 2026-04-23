#include <iostream>
using namespace std;

int main()
{
   while(true)
   {
	char grade;
	cout <<"Enter grade of the student: ";
	cin>>grade;
	grade= toupper(grade);
	//Using switch 
	switch(grade){
		case 'A':
		case 'B':
			cout<<"Congrats:Passed with Distinction!";
			break;
		case 'C':
		case 'D':
			cout<<"The student has passed!";
			break;
		case 'F':
			cout<<"Unfortunately, Failed!";
			break;
		default:
		    cout<<"Invalid Grade!"<<endl;
		    continue;
	}
	break;
  }
  return 0;
}
