#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::CallInput()
{
    char userInput = ' ';

    cin >> userInput;

    switch (userInput)
    {
    case 'w':
        lasty = y;
        y = y - 1;
        
        break;

    case 's':
        lasty = y;
        y = y + 1;
    
        break;

    case 'd':
        lastx = x;
        x = x + 1;
        
        break;

    case 'a':
        lastx = x;
        x = x - 1;
        
        break;
    }
    
    //cout<< "Coordenadas: " << x << ", " << y <<endl;
}

void Player::ResetToSafePosition()
{
    x = lastx;
    y = lasty;
}