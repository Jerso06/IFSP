using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploClasseNoForms
{
    internal class ContaBancaria
    {
        private double saldoAtual;

        public ContaBancaria()
        {
            saldoAtual = 100.00;
        }

        public double saldo()
        {
            return saldoAtual;
        }

        public bool deposito(double valor)
        {
            if (valor < 50.00)
            {
                return false;
            }

            saldoAtual += valor;
            descontaTarifa();
            return true;
        }

        public bool saque(double valor)
        {
            if (valor < 10.00)
            {
                return false;
            }

            if (valor > saldoAtual)
            {
                return false;
            }

            saldoAtual -= valor;
            descontaTarifa();
            return true;
        }

        private void descontaTarifa()
        {
            saldoAtual -= 0.10;
        }
    }
}
