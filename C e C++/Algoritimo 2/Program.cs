using System;

namespace Algoritimo_2
{
    class Program
    {
        static void Main(string[] args)
        {
            string A;
            string B;
            string C;

            int ValA;
            int ValB;
            int ValC;
            int R;
            int S;
            int D;


            Console.WriteLine("Digite 3 Numeros inteiros: ");

            Console.Write("Defina o Valor de A: ");
            A = Console.ReadLine();
            ValA = Convert.ToInt32(A);

            if(ValA < 0)
            {
                Console.WriteLine("A precisa ser um numero positivo");
            }

            Console.Write("Defina o Valor de B: ");
            B = Console.ReadLine();
            ValB = Convert.ToInt32(B);

            if (ValB < 0)
            {
                Console.WriteLine("B precisa ser um numero positivo");
            }

            Console.Write("Defina o Valor de C: ");
            C = Console.ReadLine();
            ValC = Convert.ToInt32(C);

            if (ValC < 0)
            {
                Console.WriteLine("C precisa ser um numero positivo");
            }

            R = (ValA + ValB) * (ValA + ValB);
            S = (ValB + ValC) * (ValB + ValC);

            D = (R + S) / 2;

            Console.WriteLine("O valor da operação é: " + D);

        }
    }
}
