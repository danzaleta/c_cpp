#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();
        
        MapCell* PlayerCell;
        MapCell cells [15][10];

        void DrawIntro();
        // Funcion: Dibuja el mapa
        void Draw();

        // Funcion: Obtiene las coordenadas de player y actualiza nuestro mapa
        bool SetPlayerCell(int playerX, int playerY);
        
        bool isGameOver = false;

    protected:
        void LoadMapFromFile();

    private:
};

#endif // GAMEMAP_H