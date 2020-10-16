#include <iostream>
using namespace std;

// 11. Arreglos bidimensionales

int main()
{
    int ids[5][5] =
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout<< ids[x][y];
        }

        cout<<endl;
    }
    
    return 0;
}