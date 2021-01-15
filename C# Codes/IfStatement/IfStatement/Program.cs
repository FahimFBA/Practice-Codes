using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IfStatement
{
    class Program
    {
        static void Main(string[] args)
        {
            bool isMale = false;
            bool isTall = true;

            // bool isTall = false;

            if (isMale && isTall) // && = and  ,  || = or 
            {
                Console.WriteLine("You are tall male!"); 
            }

            else if (isMale && !isTall) // ! indicates negation
            {
                Console.WriteLine("You are a short male.");
            }

            else if (!isMale && isTall)
            {
                Console.WriteLine("You are not male and not tall.");
            }

            else
            {
                Console.WriteLine("You are either not male or not tall or the both!");
            }

            Console.ReadLine();
        }
    }
}
