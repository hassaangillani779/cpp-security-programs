#include <iostream>
using namespace std;
float area(float r){
    float area= 3.14*r*r;
    return area;
}
float area(float l, float w){
    float area = l * w;
    return area;
}
int area(int s){
    int area = s*s;
    return area;
}
int main (){
    float r = 46;
    float l=6, w=5;
    int side = 7;
    
    cout<<area(r)<<endl;
    cout<<area(l, w)<<endl;
    cout<<area(side)<<endl;
    
    
}