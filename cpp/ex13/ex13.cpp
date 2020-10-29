#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 13. Escritura y lectura de archivos

int main()
{/*
    ofstream MyFile("GameData.txt");
    string Name = "";

    if (MyFile.is_open())
    {
        MyFile<< "Mmm testo testo" <<endl;
        MyFile<< "Soy :" <<endl;

        cout<< "Metale el nombre" <<endl;
        cin>> Name;
        MyFile<< Name;
    }
    MyFile.close();
*/
    ifstream MyFileRead("GameData.txt");
    string line;
    string name = "";
    int renglon = 0;

    if (MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {
            renglon = renglon+1;
            
            if (renglon == 2)
            {
                name = line;
            }
        }
    }
    else
    {
        cout<< "Chale no pude toy chikito" <<endl;
    }

    cout<< "que onda: " <<endl;
    cout<< name <<endl;

    return 0;
}