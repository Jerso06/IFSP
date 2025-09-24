namespace exemWindowsForms5
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txtB1 = new System.Windows.Forms.TextBox();
            this.txtB2 = new System.Windows.Forms.TextBox();
            this.panel2 = new System.Windows.Forms.Panel();
            this.radioDiv = new System.Windows.Forms.RadioButton();
            this.radioAdd = new System.Windows.Forms.RadioButton();
            this.radioMult = new System.Windows.Forms.RadioButton();
            this.radioSub = new System.Windows.Forms.RadioButton();
            this.panel3 = new System.Windows.Forms.Panel();
            this.txtB3 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.btnCalc = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel3.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.txtB1);
            this.panel1.Controls.Add(this.txtB2);
            this.panel1.Location = new System.Drawing.Point(12, 12);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(200, 74);
            this.panel1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(3, 12);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(73, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "Primeiro valor:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(3, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(79, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "Segundo valor:";
            // 
            // txtB1
            // 
            this.txtB1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtB1.Location = new System.Drawing.Point(87, 9);
            this.txtB1.Name = "txtB1";
            this.txtB1.Size = new System.Drawing.Size(100, 20);
            this.txtB1.TabIndex = 7;
            // 
            // txtB2
            // 
            this.txtB2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtB2.Location = new System.Drawing.Point(87, 47);
            this.txtB2.Name = "txtB2";
            this.txtB2.Size = new System.Drawing.Size(100, 20);
            this.txtB2.TabIndex = 8;
            // 
            // panel2
            // 
            this.panel2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel2.Controls.Add(this.radioDiv);
            this.panel2.Controls.Add(this.radioAdd);
            this.panel2.Controls.Add(this.radioMult);
            this.panel2.Controls.Add(this.radioSub);
            this.panel2.Location = new System.Drawing.Point(218, 12);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(97, 141);
            this.panel2.TabIndex = 1;
            // 
            // radioDiv
            // 
            this.radioDiv.AutoSize = true;
            this.radioDiv.Location = new System.Drawing.Point(3, 110);
            this.radioDiv.Name = "radioDiv";
            this.radioDiv.Size = new System.Drawing.Size(60, 17);
            this.radioDiv.TabIndex = 13;
            this.radioDiv.Text = "Divisão";
            this.radioDiv.UseVisualStyleBackColor = true;
            this.radioDiv.CheckedChanged += new System.EventHandler(this.radioDiv_CheckedChanged);
            // 
            // radioAdd
            // 
            this.radioAdd.AutoSize = true;
            this.radioAdd.Checked = true;
            this.radioAdd.Location = new System.Drawing.Point(3, 10);
            this.radioAdd.Name = "radioAdd";
            this.radioAdd.Size = new System.Drawing.Size(58, 17);
            this.radioAdd.TabIndex = 10;
            this.radioAdd.TabStop = true;
            this.radioAdd.Text = "Adição";
            this.radioAdd.UseVisualStyleBackColor = true;
            this.radioAdd.CheckedChanged += new System.EventHandler(this.radioAdd_CheckedChanged);
            // 
            // radioMult
            // 
            this.radioMult.AutoSize = true;
            this.radioMult.Location = new System.Drawing.Point(3, 79);
            this.radioMult.Name = "radioMult";
            this.radioMult.Size = new System.Drawing.Size(87, 17);
            this.radioMult.TabIndex = 12;
            this.radioMult.Text = "Multiplicação";
            this.radioMult.UseVisualStyleBackColor = true;
            this.radioMult.CheckedChanged += new System.EventHandler(this.radioMult_CheckedChanged);
            // 
            // radioSub
            // 
            this.radioSub.AutoSize = true;
            this.radioSub.Location = new System.Drawing.Point(3, 46);
            this.radioSub.Name = "radioSub";
            this.radioSub.Size = new System.Drawing.Size(74, 17);
            this.radioSub.TabIndex = 11;
            this.radioSub.Text = "Subtração";
            this.radioSub.UseVisualStyleBackColor = true;
            this.radioSub.CheckedChanged += new System.EventHandler(this.radioSub_CheckedChanged);
            // 
            // panel3
            // 
            this.panel3.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel3.Controls.Add(this.txtB3);
            this.panel3.Controls.Add(this.label3);
            this.panel3.Controls.Add(this.label4);
            this.panel3.Location = new System.Drawing.Point(12, 92);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(200, 64);
            this.panel3.TabIndex = 2;
            // 
            // txtB3
            // 
            this.txtB3.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtB3.Enabled = false;
            this.txtB3.Location = new System.Drawing.Point(7, 30);
            this.txtB3.Name = "txtB3";
            this.txtB3.Size = new System.Drawing.Size(188, 20);
            this.txtB3.TabIndex = 9;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 14);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(70, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Resultado da";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(80, 14);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(35, 13);
            this.label4.TabIndex = 6;
            this.label4.Text = "label4";
            // 
            // btnCalc
            // 
            this.btnCalc.Location = new System.Drawing.Point(12, 164);
            this.btnCalc.Name = "btnCalc";
            this.btnCalc.Size = new System.Drawing.Size(303, 23);
            this.btnCalc.TabIndex = 3;
            this.btnCalc.Text = "Calcular";
            this.btnCalc.UseVisualStyleBackColor = true;
            this.btnCalc.Click += new System.EventHandler(this.btnCalc_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(319, 199);
            this.Controls.Add(this.btnCalc);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Name = "Form1";
            this.Text = "Calculadora";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtB1;
        private System.Windows.Forms.TextBox txtB2;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtB3;
        private System.Windows.Forms.RadioButton radioAdd;
        private System.Windows.Forms.RadioButton radioSub;
        private System.Windows.Forms.RadioButton radioMult;
        private System.Windows.Forms.RadioButton radioDiv;
        private System.Windows.Forms.Button btnCalc;
    }
}

