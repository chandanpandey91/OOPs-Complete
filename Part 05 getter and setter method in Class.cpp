#include <bits/stdc++.h>
using namespace std;

class Hero {
    // Private members
private:
    int health;

    // Public members
public:
    int score;
    char level;

    // Getter method
    int getHealth() {
        return health;
    }

    // Setter method
    void setHealth(int h) {
        health = h;
    }
};

int main() {
    Hero a;
    a.score = 70;
    a.level = 'A';
    a.setHealth(80);  // Now this works because setHealth is public
    cout << a.score << " " << a.level << " " << a.getHealth();  // Also works
    return 0;
}
