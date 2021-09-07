using System;

namespace ConsoleApp
{
    public class Program
    {
        public static void Main(string[] args)
        {
            int []num = { 10 };
            
            void MyFunc(int num)
            {
                num = num + 2;
            }

            MyFunc(num[0]);
            Console.WriteLine(num[0]);
        }

        
    }
}