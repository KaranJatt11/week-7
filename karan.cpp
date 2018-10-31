#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;

 
int main ()
{
  
int a,b,balance,bet,win,lose; // define variables
  
balance = 500;
cout << "----------------" << endl; 
cout << "Welcome To Game" << endl;
cout << "----------------" << endl;
  
 
while(bet>=balance || lose==balance)
    
    {
      
cout << "You have ammount = " << balance << endl; // user ammount details
      
cout << "Select the number between 1 or 0 = "; //number between 1 and 0
      
cin >> a;

cout << "Set your bet ammount = "; //bet ammount input

cin>>bet;

 if (bet > balance)  // shows if bet greater then balance

{
  cout << "You Loose" << endl;
  cout << "You are cashing out" << endl;
  return 0;
}

 if (a == 1) // if number is 1
{
cout << "Oh..You LOSE" << endl;
lose = balance - bet;
cout << "Your remainig balance = " << lose << endl;
balance = lose;
cout<<"Press 1 To Continue The Game"<<endl;
cin>>b;
}
      
else if (a == 0) // if number is 0
	
{
cout << "Hurry!!! YOU WON" << endl;
win = 2 * bet + balance;
balance = win ;
cout << "Now Your balance = " <<win<< endl;
cout<<"Press 1 To Continue The Game"<<endl;
cin>>b;
}
      
else
	
	{
cout << "You Loose" << endl;
cout << "You are cashing out" << endl;
return 0;
  }     
}
while (b ==1); //repeat the game
return 0;

}
