using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GettingUserInput
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter something: "); // won't go to the new line after executing this line
            // we can use '\n' as the newline character
            Console.WriteLine("Enter something here too: "); // will go to the new line after executing this line

            Console.WriteLine("I'm basically starting my code from here!");
            Console.Write("Enter your name: ");
            String name = Console.ReadLine();
            Console.WriteLine("Hey, " + name);

            Console.Write("Enter your age: ");
            String age = Console.ReadLine();
            Console.WriteLine("You are " + age + " years old.");

            Console.ReadLine(); // Pauses the executaion of the program and wait for the users to enter something
        }
    }
}
