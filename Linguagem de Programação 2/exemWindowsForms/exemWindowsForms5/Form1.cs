using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exemWindowsForms5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label4.Text = "Adição:";
        }

        private void radioAdd_CheckedChanged(object sender, EventArgs e)
        {
            label4.Text = "Adição:";
        }

        private void radioSub_CheckedChanged(object sender, EventArgs e)
        {
            label4.Text = "Subtração:";
        }

        private void radioMult_CheckedChanged(object sender, EventArgs e)
        {
            label4.Text = "Multiplicação:";
        }

        private void radioDiv_CheckedChanged(object sender, EventArgs e)
        {
            label4.Text = "Divisão:";
        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            double value1 = double.Parse(txtB1.Text), value2 = double.Parse(txtB2.Text);

            if (radioAdd.Checked)
            {
                txtB3.Text = (value1+value2).ToString();
            }else if (radioSub.Checked)
            {
                txtB3.Text = (value1 - value2).ToString();
            }else if (radioMult.Checked)
            {
                txtB3.Text = (value1 * value2).ToString();
            }
            else
            {
                txtB3.Text = (value1 / value2).ToString();
            }
        }
    }
}
