#include <bits/stdc++.h>
using namespace std;

class Human{
//type of protection
public:
 string name;

void introduce(){
  cout<<"hi"<<name;
}
};

int main(){
  // creating using stack
  Human anil;
  anil.name = "anil";
  anil.introduce();

// creating using heap
  Human *bunty = new.Human();
bunty->name="bunty";
bunty->introduce();

}
