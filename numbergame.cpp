#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int x= time(0);
   srand(x);
   int randomnumber=rand()%100+ 1;
    cout<<"welcome to the number guessing game"<<endl;
    cout<<"you have maximum 5 chances"<<endl;
    int number;
    int numofchances=0;
    int numoftries=5;
    while(numofchances<numoftries)
    {
        cout<<"enter your number: ";
        cin>>number;
        number++; 
        numofchances++;
     
        if(number<randomnumber)
        {
            cout<<"number is too small.play again!!"<<endl;
        }
        else if(number>randomnumber)
        {
            cout<<"number is too big.play again!!"<<endl;
        }
        else 
        {
            cout<<"you won the game...."<<"\n"<<"Number of chances: "<<numofchances<<endl;
            break;
        }
        cout<<endl;
        if(numofchances==numoftries)
        {
            cout<<"Better luck next time""\n"<<"Number of chances: "<<numofchances<<endl;
            break;
        }
    }
    return 0;
}