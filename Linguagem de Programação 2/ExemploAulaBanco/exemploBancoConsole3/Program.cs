//biblioteca MySql
using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace INSERT
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //string de conexão com o banco de dados
            string connectionStr = @"server=127.0.0.1;uid=root;pwd=ifsp;database=bd_lp2;ConnectionTimeout=1";

            //referências para os objetos que representam a conexão com o banco e o comando sql
            MySqlConnection connectionBD = null;
            MySqlCommand cmdInsert = null;

            //Usado para capturar as exceções de falha de conexão (e outros erros não previstos)
            try
            {
                //tenta criar uma conexão com o banco
                connectionBD = new MySqlConnection(connectionStr);

                //abre a conexão com o banco
                connectionBD.Open();

                //------------------------------------------------------------------------------------------

                // Executa um comando INSERT para inserir um registro na tabela 'Funcionario'
                // Como o INSERT não retorne valores, devemos executar o comando 'ExecuteNonQuery'
                cmdInsert = new MySqlCommand();

                //atribui uma conexão ao comando (obrigatório)
                cmdInsert.Connection = connectionBD;


                //variáveis contendo os dados que queremos inserir no banco
                string nome = "Ana Aparecida";
                DateTime dataAdmissao = new DateTime(2008, 1, 25, 13, 0, 27); //2008-01-21 13:00:27
                int qtdDependentes = 4;
                float qtdHoras = 6.57f;
                double salario = 10200.54;
                string cpf = "44444444444";

                //guarda quantas linhas da tabela foram alteradas por um comando sql
                int numLinhasAfetadas;



                //Será executado o seguinte comando SQL:
                // INSERT INTO Funcionario (nome, dataAdmissao, qtdDependentes, salario, cpf) 
                // VALUES('Ana Aparecida', '2008-01-21 13:00:27', 4, 10200.54, '44444444444');

                //seta o comando sql que será executado
                cmdInsert.CommandText = "INSERT INTO Funcionario (nome, dataAdmissao, qtdDependentes, qtdHoras, salario, cpf)" +
                                    "VALUES ( @nome, @dataAdmissao, @qtdDependentes, @qtdHoras, @salario, @cpf)";

                //seta os parametros que deverão ser passados para a consulta sql
                cmdInsert.Parameters.AddWithValue("nome", nome);
                cmdInsert.Parameters.AddWithValue("dataAdmissao", dataAdmissao);
                cmdInsert.Parameters.AddWithValue("qtdDependentes", qtdDependentes);
                cmdInsert.Parameters.AddWithValue("qtdHoras", qtdHoras);
                cmdInsert.Parameters.AddWithValue("salario", salario);
                cmdInsert.Parameters.AddWithValue("cpf", cpf);


                //executa o comando / consulta sql
                numLinhasAfetadas = cmdInsert.ExecuteNonQuery();
                if (numLinhasAfetadas != 0)
                {
                    Console.Write("INSERT executado com sucesso! ");
                    Console.WriteLine("Total de Linhas Afetadas: " + numLinhasAfetadas);
                }

            }

            //faz o tratamentos dos erros associados ao banco
            catch (MySqlException erro)
            {
                Console.WriteLine("Erro Banco!");
                Console.WriteLine(erro.GetType());
                Console.WriteLine(erro.Message);
                Console.WriteLine("\n" + erro.StackTrace);
            }
            //tratamento dos demais erros que possam ocorrer
            catch (Exception erro)
            {
                Console.WriteLine("Exceção Desconhecida !!!");
                Console.WriteLine(erro.GetType());
                Console.WriteLine(erro.Message);
                Console.WriteLine("\n" + erro.StackTrace);
            }
            finally
            {
                //libera a memória utilizada pelo comando sql
                if (cmdInsert != null) cmdInsert.Dispose();

                //fecha a conexão com o banco!
                connectionBD.Close();
            }

            //usado para indicar que o programa conseguiu terminar sua execução com sucesso
            Console.WriteLine("\nFim da execução!");
        }
    }
}
