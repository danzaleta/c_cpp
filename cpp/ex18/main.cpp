#include "Player.h"      // Incluyo en header
#include "Player.cpp"   // Incluyo el archivo de mi clase

#include "MapCell.h"
#include "MapCell.cpp"

#include "GameMap.h"
#include "GameMap.cpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    GameMap Map;
    Player Hero;

    Map.DrawIntro();
    Map.Draw();

    while (Map.isGameOver == false)
    {
        cout<< "'w','a','s','d'" <<endl;

        Hero.CallInput();   // Funcion: Recibo el input del player

        if (Map.SetPlayerCell(Hero.x, Hero.y))
        {
            Map.Draw();
        }
        else
        {
            Hero.ResetToSafePosition();
            Map.Draw();
        }
        
    }
    return 0;
}