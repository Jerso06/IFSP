using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exemWindowsForms3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnLimp_Click(object sender, EventArgs e)
        {
            txtBox1.Text = "";
            txtBox2.Text = "";
            txtBox3.Text = "";
            txtBox4.Text = "";
        }

        private void btnCalc_Click(object sender, EventArgs e)
        {
            int dividendo, divisor, quociente, resto;

            dividendo = int.Parse(txtBox1.Text);
            divisor = int.Parse(txtBox2.Text);
            quociente = dividendo / divisor;
            resto = dividendo % divisor;
            txtBox3.Text = quociente.ToString();
            txtBox4.Text = resto.ToString();
        }
    }
}
