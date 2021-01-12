using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] luckyNumbers = { 4, 8, 15, 16, 23, 42 }; // array named luckyNumbers
            string[] friends = new string[5]; //need to tell how many elements would be used in this array
            friends[0] = "Ispy";
            friends[1] = "Orpa";

            Console.WriteLine(luckyNumbers[0]); // index 0 of luckyNumbers variable

            Console.WriteLine("Changing the value of index 1 !");

            luckyNumbers[1] = 498;
            Console.WriteLine(luckyNumbers[1]);

            Console.WriteLine(friends[1]);

            Console.ReadLine();
        }
    }
}
