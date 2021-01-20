using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DoWhileLoop
{
    class Program
    {
        static void Main(string[] args)
        {
            int index = 6;
            do // Do-while loop
            {
                Console.WriteLine(index);
                index++;
            } while (index <= 5); // do while execute the codes inside the loop before checking the condition
            Console.ReadLine();
        }
    }
}
