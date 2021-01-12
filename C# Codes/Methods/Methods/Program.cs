using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Methods
{
    class Program
    {
        static void Main(string[] args) // it's the real deal and code began its execution from here
        {
            SayHi(); // calling the method named SayHi()
            UserName("Fahim");
            UserName("Israt");
            UserName("Orpa");
            UserAge( "Fahim", 20 );
            UserAge("Orpa", 13);
            UserAge("Israt", 20);
            Console.ReadLine();
        }

        static void SayHi() // declaring a method
        {
            Console.WriteLine("Hello User!");
        }

        static void UserName(string name) // declaring another method
        {
            Console.WriteLine("Hey " + name);
        }

        static void UserAge (string name, int age) // declaring another method
        {
            Console.WriteLine("Hey " + name + " You are " + age + " years old.");
        }
    }
}
