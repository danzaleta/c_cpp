#include <iostream>
using namespace std;

void DrawMap(int playerPosX, int playerPosY, char gameMap[5][5])
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (x != playerPosY)
            {
                cout<< gameMap[x][y];
            }
            else
            {
                if (y != playerPosX)
                {
                    cout<< gameMap[x][y];
                }
                else
                {
                    cout<< 'P';
                }
            }
        }

        cout<<endl;
    }
}

int main()
{
    int playerPosX = 1;
    int playerPosY = 1;
    bool isGameOver = false;
    char input = ' ';
    
    char gameMap[5][5] =
    {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };

    DrawMap(playerPosX, playerPosY, gameMap);


    while (isGameOver == false)
    {
        cin>> input;

        if (input == 'd')
        {
           playerPosX = playerPosX + 1;
        }
        else if (input == 'a')
        {
            playerPosX = playerPosX - 1;
        }
        else if (input == 'w')
        {
            playerPosY = playerPosY - 1;
        }
        else if (input == 's')
        {
            playerPosY = playerPosY + 1;
        }
        else if(input == 'q')
        {
            isGameOver = true;
        }
        
    
        DrawMap(playerPosX, playerPosY, gameMap);
    }
    
    return 0;
}