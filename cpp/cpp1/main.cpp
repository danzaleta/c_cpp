#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nums[11];
    int limit = sizeof(nums)/sizeof(int);

    int multiplicador;
    int continuar;

    bool next = true;

    while (true)
    {
        cout << "\n\nTablas de multiplicacion \n\n[0]Salir. [1]Entrar)" << endl;
        cin >> continuar;

        if (continuar == 1)
        {
            cout << "Multiplicador" << endl;
            cin >> multiplicador;

            for (int i = 0; i < limit; i++)
            {
                nums[i] = i * multiplicador;
                cout << nums[i] << endl;
            }
        }
        else if (continuar == 0)
        {
            cout << "Saliendo del software..." << endl;
            break;
        }
        else
        {
            cout << "Entrada invalida" <<endl;
        }
    }
    return 0;
}
