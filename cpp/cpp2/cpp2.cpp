#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    // SETTINGS
    bool gameOn = true;

    //USER INFO
    string name;
    int edad;
    int peso;


    // CASES
    int option;

    int arr[10];

    while (gameOn)
    {
        cout << "[0] Nueva partida \n[1] Continuar \n[2] Cargar \n[3] Salir" << endl;
        cin >> option;
        
        switch (option)
        {
        case 0:
            cout << "Usuario:" << endl;
            cin >> name;

            cout << "Edad:" << endl;
            cin >> edad;

            cout << "Peso:" << endl;
            cin >> peso;
            
            cout << "Usuario: " << name <<endl;
            cout << "Edad: " << edad << " anios" << endl;
            cout << "Peso: " << peso << " kg" <<endl;

            break;
        
        case 1:

            break;

        case 2:

            break;

        case 3:
            cout << "Saliendo..." << endl;
            gameOn = false;
            
            break;

        default:
            cout << "Entrada incorrecta" << endl;
            break;
        }
        
    }
    
    
    return 0;
}
