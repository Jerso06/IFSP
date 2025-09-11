using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exLampada
{
    internal class Lampada
    {
        private bool estado;

        public Lampada()
        {
            estado = false;
        }

        public void acende()
        {
            estado = true;
        }

        public void apaga()
        {
            estado = false;
        }

        public void mostraEstado()
        {
            if(estado != true)
            {
                Console.WriteLine("Lâmpada Apagada!!!");
                return;
            }

            Console.WriteLine("Lâmpada Acesa!!!");
        }
    }
}
