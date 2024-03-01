#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"


using namespace std;


int main()
{
    Player player{};
    player.setX(5);
    player.setY(5);
    player.setArmor(100);
    player.setDamage(100);
    player.setHealth(100);
    player.info();
    
    Map map{};
    map.init();
    map.draw();
  
    return 0;
}

