using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuildingACalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("35" + "46"); // it will just concate and the output would be 3546
            Console.WriteLine("-------------------------------------------------");
            int num1 = Convert.ToInt32("35");
            Console.WriteLine(num1 + 6);

            Console.WriteLine("-------------------------------");

            Console.Write("Enter a number : ");
            int num2 = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter another number : ");
            int num3 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("The summation of those number is : " + (num2 + num3));

            Console.ReadLine();
        }
    }
}