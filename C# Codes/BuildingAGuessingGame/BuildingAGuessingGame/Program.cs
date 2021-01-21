using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuildingAGuessingGame
{
    class Program
    {
        static void Main(string[] args)
        {
            string secretWord = "Fahim";
            string guess = "";
            int guessCount = 0;
            int guessLimit = 3; // providing a limit of guessing
            bool outOfGuess = false;  // out of guess = true

            while (guess != secretWord && !outOfGuess)
            {
                if (guessCount < guessLimit)
                {
                    Console.Write("Enter your guessed word: ");
                    guess = Console.ReadLine();
                    guessCount++; // incrementing the count
                }

                else // out of the guess limit
                {
                    outOfGuess = true; // flagging
                }
                
            }

            if (outOfGuess) // if the user can't win within the provided limit
            {
                Console.Write("Ops! You LOST!");
            }
            else // if the user win within the provided limit
            {
                Console.Write("Congratulations! You won!!!");
            }
            
            Console.ReadLine();
        }
    }
}
