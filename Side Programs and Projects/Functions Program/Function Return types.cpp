#include <iostream>
using namespace std;
int getMax(int a , int b){
    if (a>b){
        cout<<"The greater number is "<<a;
        return a;
    }else{
         cout<<"The greater number is "<<b;
         return b;
    }
    
}
bool isDistinction(float GPA){
    if(GPA>3.5) {
        
        return true;
    }else {
        return false;
    }
}
void greet(string name){
    cout<<"Hello "<< name<<endl;
}
int main(){
    int a=5;
    int b= 10;
    float GPA= 3.8;
    string name= "Hassaan";
    
    cout<<getMax(a , b)<<endl;
    cout<<isDistinction(GPA)<<endl;
    greet(name);
    return 0;
}