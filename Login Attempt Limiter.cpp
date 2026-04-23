#include <iostream>
using namespace std;

int main(){
   string userName;
   string password;
   string correct="cyber123";
   bool flag=false;
   
   
   cout<<"-----Welcome to the login page-----\n";
    cout<<"Enter your username: ";
   cin>>userName;
   cout<<"\n";
   
   
 for(int i=0; i<3; i++){
    
   cout<<"Enter your password: ";
   cin>>password;
   
   
   if(password==correct){
   	flag=true;
   	cout<<"Successfully logged in---";
   	break;
   }else{
   	cout<<"Incorrect password!!\n"<<"Remaining attempts= "<<3-(i+1)<<"\n";
   }
}
if(!flag){

  cout<<"Too many wrong attempts;\n"<<"System Locked!!";
}

return 0;
   
}
