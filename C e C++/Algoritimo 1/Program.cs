using System;

namespace Algoritimo_1
{
    class Program
    {
        static void Main(string[] args)
        {

            //Strings

            string x1;
            string y1;

            string x2;
            string y2;

            //Respectivos int

            int valx1;
            int valy1;

            int valx2;
            int valy2;

            double d;

            Console.Write("Entre o valor de x no primeiro ponto: ");
            x1 = Console.ReadLine();
            valx1 = Convert.ToInt32(x1);

            Console.Write("Entre o valor de y no primeiro ponto: ");
            y1 = Console.ReadLine();
            valy1 = Convert.ToInt32(y1);

            Console.Write("Entre o valor de x no segundo ponto: ");
            x2 = Console.ReadLine();
            valx2 = Convert.ToInt32(x2);

            Console.Write("Entre o valor de y no segundo ponto: ");
            y2 = Console.ReadLine();
            valy2 = Convert.ToInt32(y2);

            d = (valx2 - valx1) * (valx2 - valx1) + (valy2 - valy1) * (valy2 - valy1);

            Console.WriteLine("A distancia dos dois pontos é: " + Math.Sqrt(d));
        }
    }
}
