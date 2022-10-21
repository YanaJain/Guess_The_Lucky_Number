#include <iostream>
#include <time.h>

using namespace std;
int lucky_number =time(0) % 10 + 1;
int score = 5;

bool play_again(){
    char answer;
    cout<<"______________________________"<<endl;
    cout<<"Do you want to play this game again?   <Y/N> :"<<endl;
    cin>>answer;

    switch(answer){
        case 'Y':
        {
            cout<<"______________________"<<endl;
            cout<<"Great! Lets play again !"<<endl;
            cout<<"______________________"<<endl;
            return true;
        }
        case 'N':
        {
            cout<<"______________________"<<endl;
            cout<<"Thanks for playing ! press any key to close."<<endl;
            cout<<"______________________"<<endl;
            cin.ignore();
            return false;
        }
        default:
        {
            cout<<"______________________"<<endl;
            cout<<"Invalid Input ! Please try again."<<endl;
            cout<<"______________________"<<endl;
            
            play_again();
        }

    }
}
bool guessing(){
          int guess;
          cout<<"Guess the lucky number: ";
          cin>>guess;
          

          if (guess>10  || guess<1){
            cout<<"**INVALID- Please enter a number between 1 to 10 only: !"<<endl;
            guessing();
          }
          else {
            cout<<"SO! YOUR GUESS IS:"<<guess<<endl;
            cout<<endl;

            if(guess==lucky_number){
                cout<<"********************************"<<endl;
               
                cout<<"YOU ARE LUCKY! YOU GUESSED IT CORRECTLY! :)"<<endl;
                cout<<"********************************"<<endl;
                cout<<endl;
                cout<<"********************************"<<endl;
                cout<<"CONGRATULATIONS"<<endl;
                cout<<"********************************"<<endl;
                cout<<"YOUR SCORE ON LUCKY SCALE IS ->"<< score <<endl;
                cout<<"********************************"<<endl;
                cout<<endl;

                bool answer =play_again();

                

            }
            else{
                cout<<"YOU ARE UNLUCKY! YOU GUESSED IT WRONGLY! :("<<endl;
                cout<<"TRY AGAIN ONE MORE TIME YOU UNLUKCY PERSON :/"<<endl;
                cout<<endl;
                score =score -1;

                cout<<"Chances left -> "<<score<<endl;  

                if(score<=0){
                    cout<<"---------------------"<<endl;
                    cout<<"!!!!!! YOU LOST IT !!!!!!"<<endl;
                    cout<<"---------------------"<<endl;

                    bool answer =play_again();
                    return answer;

                }  
                else {
                    guessing();
                }            
                bool guessing();
            }
          }
}
int main(){
          cout<<"-----------------------"<<endl;
          cout<<"**Welcome to Game**"<<endl;
          cout<<"-----------------------"<<endl;
          cout<<endl;
          cout<<"You have 5 chance to Guess the lucky number!"<<endl;
          cout<<"Number will be Between 1 and 10"<<endl;
          cout<<"****Good luck!  ~_~"<<endl;
          cout<<endl;
          cout<<"_______________________________________________"<<endl;


          bool user_choice = guessing();
          if(user_choice){
            main();
          }
          else{
            cin.get();
            return 0;
          }
          return 0;
}

   
