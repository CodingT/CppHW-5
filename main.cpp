#include <iostream>
using namespace std;

int outcome (int a, int b);
int procedureContinue (int a, int b, int c);

int main()
{
    cout << " HW#5 Game of Dice Anton Teren "<< endl << endl ;

    int die1, die2, sum, sum2;

 cout << "Please enter two numbers from 1 to 6 "<< endl;
    cin >> die1 >> die2 ;

 cout << " Your dices is " << die1 << " and " << die2 << endl;

while( die1 !=0){

 sum = outcome(die1, die2);

 cout << "Please enter again two numbers from 1 to 6 ( or 0 to STOP ) "<< endl;
    cin >> die1;
 if (die1 == 0) break; // for exit the game
    cin >> die2;
cout << " Your dices is " << die1 << " and " << die2 << endl;

 procedureContinue (die1, die2, sum);

 cout << "Please enter two numbers from 1 to 6 ( or 0 to STOP ) "<< endl;
    cin >> die1 ;
if (die1 == 0) break; // for exit the game
    cin >> die2 ;

 cout << " Your dices is " << die1 << " and " << die2 << endl;
 }
cout << endl << endl;
cout << "GAME OVER" << endl << endl ;

    return 0;
}                                 // FUNCTIONS
  int outcome(int a, int b){
      int sum = a + b;
        if (sum == 7 || sum == 11){
            cout << "You WIN !" << endl << endl ;}
       else if (sum == 2 || sum == 12){
            cout << "You  LOSE" << endl << endl ;}
         else { cout << "Please try again ..."<< endl << endl ;}
        return sum ; }

int procedureContinue (int a, int b, int c){
   int sum2 = a + b;
   if ( sum2 == 7 ){
    cout << " You LOSE "<< endl<< endl ;}
    else if ( sum2 == c ){
        cout << " You WIN " << endl<< endl ;}
         else { cout << "Please try again ..."<< endl << endl ;}
       return sum2;}







