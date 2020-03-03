using System;

namespace Script_1___Horda
{
    class Program
    {
        static void Main(string[] args)
        {
            float NumHorda;
            float VidaHorda = 30;
            float AtaqueHorda = 10;
            float NovaVidaHorda;
            float NovoAtaqueHorda;
            float Dificuldade;
            float MultiplicadorDificuldade=25;


            Dificuldade = MultiplicadorDificuldade / 100;

            for (NumHorda = 0; NumHorda<=20; NumHorda++){
                NovaVidaHorda = (VidaHorda * (NumHorda *(1 + Dificuldade))) + VidaHorda;
                NovoAtaqueHorda = (AtaqueHorda * (NumHorda *(1 + Dificuldade))) + AtaqueHorda;

                

                Console.WriteLine("Horda: " + NumHorda + " ATK: " + NovoAtaqueHorda + " HP: " + NovaVidaHorda);
            }
        }
    }
}
