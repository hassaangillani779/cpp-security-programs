#include <iostream>
using namespace std;

int main()
{
	int a,b;
    
    cout<<"Enter the first number: ";
    cin>>a;
    
    cout<<"Enter Second number: ";
    cin>>b;
    
    int sum= a+b;
    int difference= a-b;
    int product= a*b;
    float quotient= (float)a/b;
    int remainder= a%b;
    
    cout<<"Sum of these numbers is: "<<sum<<endl;
    cout<<"Difference of these numbers is: "<<difference<<endl;
    cout<<"Product of these numbers is: "<<product<<endl;
    cout<<"Quotient of these numbers is: "<<quotient<<endl;
    cout<<"Remainder of these numbers is: "<<remainder<<endl;
    
    int combine= a+b*a-b%a;
    cout <<"The result of a+b * a-b %a is: "<<combine<<endl;
    
    int brackets= (a+b)*(a-b) %a;
    cout<<"The result with perentheses is: "<<brackets<<endl;
    
    return 0;
    
	
}
