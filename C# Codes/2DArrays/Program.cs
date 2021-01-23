using System;

namespace _2DArrays
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] numberGrid = {  // int[,] is telling c# that we want a two dimensional array here. For there dimensional array, use [, ,]
                {1, 2}, // 0,0 indicates 1 whereas 0,1 indicates 2
                {3 , 4}, // 1,0 indicates 3 whereas 1,1 indicates 4
                {5, 6} // 2,0 indicates 5 whereas 2,1 indicates 6

            };
            Console.WriteLine(numberGrid[2,1]); // Accessing the elements of the array
            
            int[,] MyArray = new int[2,3]; // row = 2 and column = 3

            Console.ReadLine();
        }
    }
}
