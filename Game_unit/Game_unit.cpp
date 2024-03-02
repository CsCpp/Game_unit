#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"


using namespace std;


int main()
{
    
    Player pl1 = Player();
    Player pl2 = Player{};
    Player pl3{ 3, 4, 34, 65, 122 };
    Player pl4{ 7, 5 };
    {
        Player player;
        player.setX(5);
        player.setY(5);
        player.setArmor(100);
        player.setDamage(100);
        player.setHealth(100);
        player.info();
    
    }
   
    pl1.info();
    pl2.info();
    pl3.info();
    pl4.info();

   

    Map map{};
  
    map.draw();
  
    return 0;
}

