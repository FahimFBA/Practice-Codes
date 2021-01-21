using System;

namespace ForLoops
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 1;
            while (i <= 5) // while loop
            {
                Console.WriteLine(i);
                i++; // increment
            }

            for (int j = 1; j <= 5; j++) // for loop 
            {
                Console.WriteLine(j); // structure of for loop (initialization ; condition ; increment/decrement)
            }

            Console.WriteLine("--------------------------------------------");

            int[] luckyNumbers = { 4, 8, 15, 16, 23, 42 };

            for ( int k = 0 ; k < luckyNumbers.Length ; k++ ) // the loop would run till the last indext of the length
            {
                Console.WriteLine(luckyNumbers[k]);
            }


            Console.ReadLine();
        }
    }
}
