using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploExcecao1
{
    internal class ErroCriticoException : Exception
    {
        private int valor;
        private string texto;

        public ErroCriticoException(int valor, string texto)
        {
            this.valor = valor;
            this.texto = texto;
        }

        public int getValor()
        {
            return valor;
        }

        public string getTexto()
        {
            return texto;
        }
    }
}
