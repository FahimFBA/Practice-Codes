using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MoreIfStatements
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(MaxNum(10, 100)); // passing two values to the method named MaxNum
            Console.WriteLine(MaxNumOfThree(10, 100, 1000)); // passing three values to the method named MaxNumOfThree
            Console.ReadLine();
        }

        static int MaxNum (int a, int b)
        {
            int Max;  // A new variable to store the Maximum value
            if (a > b) 
            {
                Max = a; // if a is bigger than b
            }
            else
            {
                Max = b; // else, b would be bigger than a
            }
            return Max;
        }
        static int MaxNumOfThree(int a, int b, int c)
        {
            int Max; 
            if (a >= b && a>= c)
            {
                Max = a;
            }
            else if (b >= c && b>= a)
            {
                Max = b;
            }
            else
            {
                Max = c;
            }
            return Max;
        }
    }
}
