namespace exemWindowsForms4
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
            this.gpBox1 = new System.Windows.Forms.GroupBox();
            this.ckBox5 = new System.Windows.Forms.CheckBox();
            this.ckBox4 = new System.Windows.Forms.CheckBox();
            this.ckBox3 = new System.Windows.Forms.CheckBox();
            this.ckBox2 = new System.Windows.Forms.CheckBox();
            this.ckBox1 = new System.Windows.Forms.CheckBox();
            this.btn1 = new System.Windows.Forms.Button();
            this.txtBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.gpBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // gpBox1
            // 
            this.gpBox1.Controls.Add(this.ckBox5);
            this.gpBox1.Controls.Add(this.ckBox4);
            this.gpBox1.Controls.Add(this.ckBox3);
            this.gpBox1.Controls.Add(this.ckBox2);
            this.gpBox1.Controls.Add(this.ckBox1);
            this.gpBox1.Location = new System.Drawing.Point(12, 25);
            this.gpBox1.Name = "gpBox1";
            this.gpBox1.Size = new System.Drawing.Size(239, 117);
            this.gpBox1.TabIndex = 0;
            this.gpBox1.TabStop = false;
            this.gpBox1.Text = "Qual sua linguagem preferida?";
            // 
            // ckBox5
            // 
            this.ckBox5.AutoSize = true;
            this.ckBox5.Location = new System.Drawing.Point(138, 76);
            this.ckBox5.Name = "ckBox5";
            this.ckBox5.Size = new System.Drawing.Size(57, 17);
            this.ckBox5.TabIndex = 4;
            this.ckBox5.Text = "Outras";
            this.ckBox5.UseVisualStyleBackColor = true;
            // 
            // ckBox4
            // 
            this.ckBox4.AutoSize = true;
            this.ckBox4.Location = new System.Drawing.Point(15, 76);
            this.ckBox4.Name = "ckBox4";
            this.ckBox4.Size = new System.Drawing.Size(76, 17);
            this.ckBox4.TabIndex = 3;
            this.ckBox4.Text = "JavaScript";
            this.ckBox4.UseVisualStyleBackColor = true;
            // 
            // ckBox3
            // 
            this.ckBox3.AutoSize = true;
            this.ckBox3.Location = new System.Drawing.Point(173, 37);
            this.ckBox3.Name = "ckBox3";
            this.ckBox3.Size = new System.Drawing.Size(49, 17);
            this.ckBox3.TabIndex = 2;
            this.ckBox3.Text = "Java";
            this.ckBox3.UseVisualStyleBackColor = true;
            // 
            // ckBox2
            // 
            this.ckBox2.AutoSize = true;
            this.ckBox2.Location = new System.Drawing.Point(96, 37);
            this.ckBox2.Name = "ckBox2";
            this.ckBox2.Size = new System.Drawing.Size(40, 17);
            this.ckBox2.TabIndex = 1;
            this.ckBox2.Text = "C#";
            this.ckBox2.UseVisualStyleBackColor = true;
            // 
            // ckBox1
            // 
            this.ckBox1.AutoSize = true;
            this.ckBox1.Location = new System.Drawing.Point(15, 36);
            this.ckBox1.Name = "ckBox1";
            this.ckBox1.Size = new System.Drawing.Size(33, 17);
            this.ckBox1.TabIndex = 0;
            this.ckBox1.Text = "C";
            this.ckBox1.UseVisualStyleBackColor = true;
            // 
            // btn1
            // 
            this.btn1.Location = new System.Drawing.Point(12, 210);
            this.btn1.Name = "btn1";
            this.btn1.Size = new System.Drawing.Size(239, 23);
            this.btn1.TabIndex = 1;
            this.btn1.Text = "Executar";
            this.btn1.UseVisualStyleBackColor = true;
            this.btn1.Click += new System.EventHandler(this.btn1_Click);
            // 
            // txtBox1
            // 
            this.txtBox1.Location = new System.Drawing.Point(12, 175);
            this.txtBox1.Name = "txtBox1";
            this.txtBox1.Size = new System.Drawing.Size(239, 20);
            this.txtBox1.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 159);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(137, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "Especifique as Linguagens:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(267, 241);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtBox1);
            this.Controls.Add(this.btn1);
            this.Controls.Add(this.gpBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.gpBox1.ResumeLayout(false);
            this.gpBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox gpBox1;
        private System.Windows.Forms.Button btn1;
        private System.Windows.Forms.TextBox txtBox1;
        private System.Windows.Forms.CheckBox ckBox5;
        private System.Windows.Forms.CheckBox ckBox4;
        private System.Windows.Forms.CheckBox ckBox3;
        private System.Windows.Forms.CheckBox ckBox2;
        private System.Windows.Forms.CheckBox ckBox1;
        private System.Windows.Forms.Label label1;
    }
}

