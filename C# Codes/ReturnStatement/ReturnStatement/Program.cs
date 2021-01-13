using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReturnStatement
{
    class Program
    {
        static void Main(string[] args)
        {
            int cubedNumber = cube(5);
            Console.WriteLine(cubedNumber);

            Console.ReadLine();
        }

        static int cube(int num)// static for a new method, int is the returning data type 

        {
            int result = num * num * num;
            return result;
        }
            
     }
        
            
}
