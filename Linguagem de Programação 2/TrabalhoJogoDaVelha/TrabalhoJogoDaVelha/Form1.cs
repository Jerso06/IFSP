using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TrabalhoJogoDaVelha
{
    public partial class Form1 : Form
    {
        int vez = 0;
        int jogada = 0;
        public Form1()
        {
            InitializeComponent();
            txtInfo.Text = "Vez do O";
        }

        public void limpar()
        {
            btn1.Text = "";
            btn1.BackColor = SystemColors.Control;
            btn2.Text = "";
            btn2.BackColor = SystemColors.Control;
            btn3.Text = "";
            btn3.BackColor = SystemColors.Control;
            btn4.Text = "";
            btn4.BackColor = SystemColors.Control;
            btn5.Text = "";
            btn5.BackColor = SystemColors.Control;
            btn6.Text = "";
            btn6.BackColor = SystemColors.Control;
            btn7.Text = "";
            btn7.BackColor = SystemColors.Control;
            btn8.Text = "";
            btn8.BackColor = SystemColors.Control;
            btn9.Text = "";
            btn9.BackColor = SystemColors.Control;
        }

        public void verifica(int posicao)
        {
            jogada++;

            if(verificaLinha(posicao) || verificaColuna(posicao) || verificaDiagonal(posicao))
            {
                if (vez % 2 == 0)
                {
                    lblO.Text = (int.Parse(lblO.Text) + 1).ToString();
                    MessageBox.Show("Jogador O venceu!!!");
                    jogada = 0;
                    limpar();
                    return;
                }

                lblX.Text = (int.Parse(lblX.Text) + 1).ToString();
                MessageBox.Show("Jogador X venceu!!!");
                jogada = 0;
                limpar();
            }

            if (jogada == 9)
            {
                lblEmpate.Text = (int.Parse(lblEmpate.Text) + 1).ToString();
                MessageBox.Show("Empate!!!");
                jogada = 0;
                limpar();
            }
        }

        public bool verificaLinha(int posicao)
        {
            if(posicao == 1 || posicao == 2 || posicao == 3)
            {
                if(btn1.Text == btn2.Text && btn1.Text == btn3.Text)
                {
                    btn1.BackColor = Color.Lime;
                    btn2.BackColor = Color.Lime;
                    btn3.BackColor = Color.Lime;
                    return true;
                }
            }

            if (posicao == 4 || posicao == 5 || posicao == 6)
            {
                if (btn4.Text == btn5.Text && btn4.Text == btn6.Text)
                {
                    btn4.BackColor = Color.Lime;
                    btn5.BackColor = Color.Lime;
                    btn6.BackColor = Color.Lime;
                    return true;
                }
            }

            if (posicao == 7 || posicao == 8 || posicao == 9)
            {
                if (btn7.Text == btn8.Text && btn7.Text == btn9.Text)
                {
                    btn7.BackColor = Color.Lime;
                    btn8.BackColor = Color.Lime;
                    btn9.BackColor = Color.Lime;
                    return true;
                }
            }

            return false;
        }

        public bool verificaColuna(int posicao)
        {
            if (posicao == 1 || posicao == 4 || posicao == 7)
            {
                if (btn1.Text == btn4.Text && btn1.Text == btn7.Text)
                {
                    btn1.BackColor = Color.Lime;
                    btn4.BackColor = Color.Lime;
                    btn7.BackColor = Color.Lime;
                    return true;
                }
            }

            if (posicao == 2 || posicao == 5 || posicao == 8)
            {
                if (btn2.Text == btn5.Text && btn2.Text == btn8.Text)
                {
                    btn2.BackColor = Color.Lime;
                    btn5.BackColor = Color.Lime;
                    btn8.BackColor = Color.Lime;
                    return true;
                }
            }

            if (posicao == 3 || posicao == 6 || posicao == 9)
            {
                if (btn3.Text == btn6.Text && btn3.Text == btn9.Text)
                {
                    btn3.BackColor = Color.Lime;
                    btn6.BackColor = Color.Lime;
                    btn9.BackColor = Color.Lime;
                    return true;
                }
            }

            return false;
        }

        public bool verificaDiagonal(int posicao)
        {
            if (posicao == 1 || posicao == 5 || posicao == 9)
            {
                if (btn1.Text == btn5.Text && btn1.Text == btn9.Text)
                {
                    btn1.BackColor = Color.Lime;
                    btn5.BackColor = Color.Lime;
                    btn9.BackColor = Color.Lime;
                    return true;
                }
            }

            if (posicao == 3 || posicao == 5 || posicao == 7)
            {
                if (btn3.Text == btn5.Text && btn3.Text == btn7.Text)
                {
                    btn3.BackColor = Color.Lime;
                    btn5.BackColor = Color.Lime;
                    btn7.BackColor = Color.Lime;
                    return true;
                }
            }

            return false;
        }
        public void alteraJogador()
        {
            vez++;
            if (vez % 2 == 0)
            {
                txtInfo.Text = "Vez do O";
            }
            else
            {
                txtInfo.Text = "Vez do X";
            }
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            if(btn1.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn1.Text = "O";
                    btn1.ForeColor = Color.Red;
                }
                else
                {
                    btn1.Text = "X";
                    btn1.ForeColor = SystemColors.HotTrack;
                }

                verifica(1);
                alteraJogador();
            }
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            if (btn2.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn2.Text = "O";
                    btn2.ForeColor = Color.Red;
                }
                else
                {
                    btn2.Text = "X";
                    btn2.ForeColor = SystemColors.HotTrack;
                }

                verifica(2);
                alteraJogador();
            }
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            if (btn3.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn3.Text = "O";
                    btn3.ForeColor = Color.Red;
                }
                else
                {
                    btn3.Text = "X";
                    btn3.ForeColor = SystemColors.HotTrack;
                }

                verifica(3);
                alteraJogador();
            }
        }

        private void btn4_Click(object sender, EventArgs e)
        {
            if (btn4.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn4.Text = "O";
                    btn4.ForeColor = Color.Red;
                }
                else
                {
                    btn4.Text = "X";
                    btn4.ForeColor = SystemColors.HotTrack;
                }

                verifica(4);
                alteraJogador();
            }
        }

        private void btn5_Click(object sender, EventArgs e)
        {
            if (btn5.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn5.Text = "O";
                    btn5.ForeColor = Color.Red;
                }
                else
                {
                    btn5.Text = "X";
                    btn5.ForeColor = SystemColors.HotTrack;
                }

                verifica(5);
                alteraJogador();
            }
        }

        private void btn6_Click(object sender, EventArgs e)
        {
            if (btn6.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn6.Text = "O";
                    btn6.ForeColor = Color.Red;
                }
                else
                {
                    btn6.Text = "X";
                    btn6.ForeColor = SystemColors.HotTrack;
                }

                verifica(6);
                alteraJogador();
            }
        }

        private void btn7_Click(object sender, EventArgs e)
        {
            if (btn7.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn7.Text = "O";
                    btn7.ForeColor = Color.Red;
                }
                else
                {
                    btn7.Text = "X";
                    btn7.ForeColor = SystemColors.HotTrack;
                }

                verifica(7);
                alteraJogador();
            }
        }

        private void btn8_Click(object sender, EventArgs e)
        {
            if (btn8.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn8.Text = "O";
                    btn8.ForeColor = Color.Red;
                }
                else
                {
                    btn8.Text = "X";
                    btn8.ForeColor = SystemColors.HotTrack;
                }

                verifica(8);
                alteraJogador();
            }
        }

        private void btn9_Click(object sender, EventArgs e)
        {
            if (btn9.Text == "")
            {
                if (vez % 2 == 0)
                {
                    btn9.Text = "O";
                    btn9.ForeColor = Color.Red;
                }
                else
                {
                    btn9.Text = "X";
                    btn9.ForeColor = SystemColors.HotTrack;
                }

                verifica(9);
                alteraJogador();
            }
        }

        private void btnResetar_Click(object sender, EventArgs e)
        {
            lblO.Text = "0";
            lblX.Text = "0";
            lblEmpate.Text = "0";
            
            limpar();
        }
    }
}
