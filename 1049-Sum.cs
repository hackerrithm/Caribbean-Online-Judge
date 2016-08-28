using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace COJ1049_C_Sharp_solution
{
    class Program
    {
        static int Main(string[] args)
        {
            int N;
            int sum = 0;
            N = int.Parse(Console.ReadLine());
            if (N > 0)
            {
                for (int i = 1; i <= N; i++)
                {
                    sum = i + sum;
                }

            }
            else if (N <= 1)
            {
                for (int j = 1; j >= N; j--)
                {
                    sum = j + sum;
                }
            }
            Console.WriteLine(sum);
            return 0;
        }
    }
}