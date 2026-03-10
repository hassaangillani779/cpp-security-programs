#include <iostream>
using namespace std;

int main(){
	int secret=779;
	int guess;
	int no_guess=0;
	
	do {
	cout<< "Guess the secret number and win the game: ";
	cin>>guess;
	no_guess++;
		if(guess>secret){
			cout<<"Too high.Find a smaller one ";
		}else if(guess<secret){
			cout<<"Too low. Go upwards ";
		}else if (guess==secret){
			cout<<"You guessed it right in "<< no_guess<<"attempts.";
		}
		}
	while(guess!=secret);
	
	
}
