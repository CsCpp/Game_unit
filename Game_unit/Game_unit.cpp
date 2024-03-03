#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"

using namespace std;




int main()
{
    
    Player pl1 = Player();
   
   
    pl1.info();
   

    Map map{pl1};
  
    map.draw();
    std::cout << "Player size \t" << sizeof(Player) << std::endl;
    std::cout << "Map size \t" << sizeof(Map) << std::endl;
  
    return 0;
}

