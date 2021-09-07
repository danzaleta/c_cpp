using System;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] userNames = new string[10] { "A", "B", "C", "D", "E", "F", "G", "H", "I", "" };
            int current = 9;
            bool userType;

            Console.WriteLine("Restaurante");

            while (current < 10)
            {   
                Console.WriteLine("Usuario registrado?(true or false) ");
                userType = Convert.ToBoolean(Console.ReadLine());

                if (userType == true)
                {
                    Console.WriteLine("Hola gamer, juguemos LoL. Usuario?");

                    string search = Console.ReadLine();
                    Console.WriteLine("Usuario: {0}", search);

                    int index = Array.IndexOf(userNames, search);

                    if (index == -1)
                    {
                        Console.WriteLine("No encontrado");
                    }
                    else
                    {
                        Console.WriteLine("Hola gamer {0}, buenas", userNames[index]);
                    }
                }
                else if(userType == false)
                {
                    Console.WriteLine("Ponga su name compa");
                    userNames[current] = Console.ReadLine();

                    Console.WriteLine("Usuario guardado, tu nombre: {0}", userNames[current]);
                    current++;
                }
            }

            Console.WriteLine("Restaurante lleno parce");

            int aux = 0;

            foreach (string elem in userNames)
            {
                Console.WriteLine("Numero {0}, Nombre {1}", aux, userNames[aux]);
                aux++;
            }

            Environment.Exit(0);
        }
    }
}