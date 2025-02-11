using System;
 
namespace CountTrailingZeroes
{
    class Program
    {   
         
        static int CountTrailingZeroes(int n)
        {
            int count = 0;
             
            while ((n & 1) == 0)
            {
                count += 1;
                n >>= 1;
            }
             
            return count;
        }
 
        static void Main(string[] args)
        {
            int n1 = 16;
            Console.WriteLine(CountTrailingZeroes(n1));
        }
    }
}