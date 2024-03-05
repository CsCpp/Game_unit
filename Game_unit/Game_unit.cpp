#include "Game.h"
#include <iostream>

void counter()
{
    static int log = 0;
    log++;
    std::cout << log << std::endl;
}

int main()
{
    counter();
    counter();
    counter();
   
    counter();

    //Game game;
    //game.Run();


  
    return 0;
}

