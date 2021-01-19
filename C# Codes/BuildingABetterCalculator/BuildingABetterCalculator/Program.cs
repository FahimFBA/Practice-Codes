using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuildingABetterCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the first number: "); // Taking the first number from the user as input
            double num1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter the operator: "); // Taking the operator from the user as input
            string op = Console.ReadLine();

            Console.Write("Enter the second number: "); // Taking the second number from the user as input
            double num2 = Convert.ToDouble(Console.ReadLine());

            // Checking the condition and provide the suitable result 

            if ( op == "+" )
            {
                Console.WriteLine("The result is : " + (num1 + num2));
            }

            else if ( op == "-" )
            {
                Console.WriteLine("The result is : " + (num1 - num2));
            }

            else if (op == "/")
            {
                Console.WriteLine("The result is : " + (num1 / num2));
            }

            else if (op == "*")
            {
                Console.WriteLine("The result is : " + (num1 * num2));
            }

            else if (op == "%")
            {
                Console.WriteLine("The result is : " + (num1 % num2));
            }

            else
            {
                Console.WriteLine("Invalid Operator");
            }

            Console.ReadLine();
        }
    }
}
