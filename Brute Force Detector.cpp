#include<iostream>
using namespace std;

int main(){
	string user[5] = {"Huzaima", "ZabbiUllah", "Hammad", "Arghuman", "Haider"};
	int attempts[5] = {1, 3, 5, 8, 2};
	int clear=0, flagged=0;
	
	for(int i=0; i<5; i++){
		if (attempts[i]<3)
		{
	
		cout<<user[i]<<"-OK"<<endl;
		clear++;
		
		}else{
			cout<<user[i]<<"-FLAGGED: Possible Brute Force Attack!"<<endl;
			flagged++;
		}
	}
	cout<<"Number of cleared employes are: "<<clear<<endl;
	cout<<"Number of flagged employes are: "<<flagged<<endl;
	
	return 0;
}
