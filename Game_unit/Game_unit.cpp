#include "Game.h"
#include <iostream>

class Person {
private:
    static int count;
public:
    Person() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

int Person::count{};

int main()
{
    Person person1;
    Person person2;
    Person person3;

    std::cout << Person::getCount();

    //Game game;
    //game.Run();


  
    return 0;
}

