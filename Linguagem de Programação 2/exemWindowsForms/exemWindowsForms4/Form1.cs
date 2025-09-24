using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exemWindowsForms4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            txtBox1.Text = "";

            if (ckBox1.Checked)
            {
                txtBox1.Text += ckBox1.Text + ", ";
            }
            if (ckBox2.Checked)
            {
                txtBox1.Text += ckBox2.Text + ", ";
            }
            if (ckBox3.Checked)
            {
                txtBox1.Text += ckBox3.Text + ", ";
            }
            if (ckBox4.Checked)
            {
                txtBox1.Text += ckBox4.Text + ", ";
            }
            if (ckBox5.Checked)
            {
                txtBox1.Text += ckBox5.Text + "...";
            }
        }
    }
}
