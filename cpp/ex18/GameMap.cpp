#include <iostream>
#include <fstream>
#include <string>

#include "GameMap.h"

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    LoadMapFromFile();
    isGameOver = false;
}

void GameMap::Draw()
{
    for (int i = 0; i < 15; i = i+1)
    {
        for (int p = 0; p < 10; p = p+1)
        {
            cout<< cells[i][p].id;
        }
        cout<<endl;
    }
    
}

bool GameMap::SetPlayerCell(int playerX, int playerY)
{
    if (cells[playerY][playerX].isBlocked() == false)
    {
        if (cells[playerY][playerX].id == '0')
        {
            DrawVictory();
            return true;
        }
        else
        {
            if (PlayerCell != NULL)
            {
                PlayerCell->id = 0;
            }
    
            PlayerCell = &cells[playerY][playerX];
            PlayerCell->id = '3';
            
        }
        return true;
    }
    else
    {
        return false;
    }

    //cout<< "Coordenadas:" << playerX << ", " << playerY <<endl;
}

void GameMap::DrawIntro()
{
    string line;
    int row = 0;
    ifstream MyFile("Intro.txt");

    if (MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            cout<< line <<endl;
        }

        cin>> line;
    }
    else
    {
        cout<< "Fatal ERROR couldn't be loaded" <<endl;
    }
}

void GameMap::DrawVictory()
{
    string line;
    ifstream MyFile("Victory.txt");

    if (MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            cout<< line <<endl;
        }

        cin>> line;
    }
    else
    {
        cout<< "Fatal ERROR couldn't be loaded" <<endl;
    }
}

void GameMap::LoadMapFromFile()
{
    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if (MyFile.is_open())
    {
        //cout<< "testo testo" <<endl;

        while (getline(MyFile, line))
        {
            for (int p = 0; p < line.length(); p = p+1)
            {
                if (line[p] == '0')
                {
                    cells[row][p].id = 0;
                }
                else
                {
                    cells[row][p].id = line[p];
                }
            }
            row++;
        }
        //cout<< "testo testo final" <<endl;
    }
    else
    {
        cout<< "Fatal ERROR" <<endl;
    }
}