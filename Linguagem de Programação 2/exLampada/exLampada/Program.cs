using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exLampada
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Abajur abj = new Abajur();

            abj.liga();
            abj.mostraEstado();
            abj.desliga();
            abj.mostraEstado();

            Lampada lmp = new Lampada();
            abj.encaixaLampada(lmp);

            abj.liga();
            abj.mostraEstado();
            abj.desliga();
            abj.mostraEstado();
        }
    }
}
