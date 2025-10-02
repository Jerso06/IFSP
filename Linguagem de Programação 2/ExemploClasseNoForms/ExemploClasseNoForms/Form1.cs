using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ExemploClasseNoForms
{
    public partial class Form1 : Form
    {
        private ContaBancaria conta;
        public Form1()
        {
            InitializeComponent();
            conta = new ContaBancaria();

            rdbSaque.Checked = true;
            txtSaldo.Text = conta.saldo().ToString();
        }

        private void btnExecutar_Click(object sender, EventArgs e)
        {
            double valor=0.0;

            if (txtValor.Text.Length != 0)
            {
                valor = double.Parse(txtValor.Text);
            }

            if(rdbSaque.Checked == true)
            {
                if (conta.saque(valor))
                {
                    txtSaldo.Text = conta.saldo().ToString();
                    MessageBox.Show("Saque realizado com sucesso!");
                }
                else
                {
                    MessageBox.Show("Falha no saque.");
                }
            }
            else
            {
                if (conta.deposito(valor))
                {
                    txtSaldo.Text = conta.saldo().ToString();
                    MessageBox.Show("Depósito realizado com sucesso!");
                }
                else
                {
                    MessageBox.Show("Falha no depósito.");
                }
            }

            txtValor.Clear();
        }
    }
}
