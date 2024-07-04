#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout<<"WELCOME TO THE ROCK PAPER SCISSOR GAME.."<<endl;
    cout<<"You can choose any one of the following"<<endl;
    cout<<"1.For Rock"<<endl;
    cout<<"2.For Paper"<<endl;
    cout<<"3.For Scissor"<<endl;
    cin>>user;
    if(user==1){
        cout<<"You choose Rock"<<endl;
    }
    else if(user==2){
        cout<<"You choose Paper"<<endl;
    }
    else{
        cout<<"You choose Scissor"<<endl;
    }

    computer = rand()%3+1;
    if(computer==1){
        cout<<"Computer chooses Rock"<<endl;
    }
    else if(computer==2){
        cout<<"Computer chooses Paper"<<endl;
    }
    else{
        cout<<"Computer chooses Scissor"<<endl;
    }

    //match
    if(user==computer){
        cout<<"Match is Tie.."<<endl;
    }

    //user..>Rock
    else if(user==1){
        if(computer==2){
            cout<<"You Lose!"<<endl;
        }
        if(computer==3){
            cout<<"Congratulations..You win!"<<endl;
        }
    }

    //user..>paper
    else if(user==2){
        if(computer==1){
            cout<<"Congratulations..You win!"<<endl;
        }
        if(computer==3){
             cout<<"You Lose!"<<endl;
        }
    }

    //user..>scissor
    else if(user==3){
        if(computer==1){
              cout<<"You Lose!"<<endl;
        }
        if(computer==2){
            cout<<"Congratulations..You win!"<<endl;
        }
        }
        return 0;
    }



