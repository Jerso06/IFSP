using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exLampada
{
    internal class Abajur
    {
        private Lampada lampada;

        public Abajur()
        {
            lampada = null;
        }

        public void encaixaLampada(Lampada lampada)
        {
            this.lampada = lampada;
        }

        public void liga()
        {
            if(lampada == null)
            {
                Console.WriteLine("Abajur sem lâmpada.");
                return;
            }

            lampada.acende();
        }

        public void desliga()
        {
            if (lampada == null)
            {
                Console.WriteLine("Abajur sem lâmpada.");
                return;
            }

            lampada.apaga();
        }

        public void mostraEstado()
        {
            if (lampada == null)
            {
                Console.WriteLine("Abajur sem lâmpada.");
                return;
            }

            lampada.mostraEstado();
        }
    }
}
