#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"

using namespace std;




int main()
{
    Map map{ nullptr }; 

    Player pl1{ 3,4,100,80,100 };
    map.setPlayer(&pl1);
    map.draw();

  
    return 0;
}

