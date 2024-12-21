#include <bits/stdc++.h>
using namespace std;

class Hero{
    // Access Modifiers
    // we have three type of modifiers -> private,public and protected!
    //if we are using private, then that can be used only within the class(without using getter and setter method which we will see later on)
    //public can be used anywhere within the class as outside the class

public:
    int score;
    char level;

private:
    int game;

    //game can be accessed here only within the class
};

int main(){
    Hero a;
    a.score=70;
    a.level ='A';
    // a.game = 3;->it will throw an error
    cout<<a.score<<" "<<a.level;
    // cout<<a.game<<endl;
}
