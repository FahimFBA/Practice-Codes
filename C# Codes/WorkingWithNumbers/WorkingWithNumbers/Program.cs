using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WorkingWithNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(5 + 10);
            Console.WriteLine(25 / 3.5);
            Console.WriteLine(5 / 2);

            int num = 6;
            num++;
            Console.WriteLine(num);
            num--;
            Console.WriteLine(num);

            Console.WriteLine(Math.Abs(-40)); // Absolute value of -40 : ans would be 40
            Console.WriteLine(Math.Pow(3, 3)); // Power: 3 ^ 3 : Ans would be 27

            Console.WriteLine(Math.Pow(3.56, 3));
            Console.WriteLine(Math.Sqrt(36)); // Square root of 36 : ans would be 6

            Console.WriteLine(Math.Max(10, 100)); // give the maximum value as the output

            Console.WriteLine(Math.Min(55, 9)); // give the minimum value as the output
            Console.WriteLine(Math.Round(9.63)); // give the round figure


            Console.ReadLine();
        }
    }
}