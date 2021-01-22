using System;

namespace BuildingAnExponentMethod
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(GetPow(4, 3));
            Console.ReadLine();
        }

        static int GetPow(int baseNum, int powerNum)
        {
            int result = 1; // initialization

            for (int i = 0 ; i < powerNum ; i++) // for loop
            {
                result = result * baseNum;
            }
            return result;
        }
    }
}
