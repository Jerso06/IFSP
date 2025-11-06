//biblioteca MySql
using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UPDATE
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //string de conexão com o banco de dados
            string connectionStr = @"server=127.0.0.1;uid=root;pwd=ifsp;database=bd_lp2;ConnectionTimeout=1";

            //referências para os objetos que representam a conexão com o banco e o comando sql
            MySqlConnection connectionBD = null;
            MySqlCommand cmdUpdate = null;

            //Usado para capturar as exceções de falha de conexão (e outros erros não previstos)
            try
            {
                //tenta criar uma conexão com o banco
                connectionBD = new MySqlConnection(connectionStr);

                //abre a conexão com o banco
                connectionBD.Open();



                //------------------------------------------------------------------------------------------


                // Executa um comando UPDATE para modificar o cep do cliente com cpf "11111111111"
                // Como o UPDATE não retorna valores, devemos executar o comando 'ExecuteNonQuery'
                cmdUpdate = new MySqlCommand();

                //atribui uma conexão ao comando (obrigatório)
                cmdUpdate.Connection = connectionBD;

                //Será executado o seguinte comando SQL:
                // UPDATE Funcionario SET salario = 13200.50  
                // WHERE cpf = '44444444444';

                //variáveis contendo os dados que serão usados na consulta
                double salario = 13200.50;
                string cpf = "44444444444";

                //seta o comando sql que será executado
                cmdUpdate.CommandText = "UPDATE Funcionario SET salario = @salario " +
                                    "WHERE cpf = @cpf";

                //seta os parametros que deverão ser passados para a consulta sql
                cmdUpdate.Parameters.AddWithValue("cpf", cpf);
                cmdUpdate.Parameters.AddWithValue("salario", salario);

                //executa o comando / consulta sql
                int numLinhasAfetadas = cmdUpdate.ExecuteNonQuery();
                if (numLinhasAfetadas != 0)
                {
                    Console.WriteLine("UPDATE executado com sucesso! ");
                    Console.WriteLine("Total de Linhas Afetadas: " + numLinhasAfetadas);
                }
                else
                {
                    Console.WriteLine("Não foi encontrado um funcionário com CPF: {0}", cpf);
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
                Console.WriteLine(erro.StackTrace);
            }
            finally
            {
                //libera a memória utilizada pelo comando
                if (cmdUpdate != null) cmdUpdate.Dispose();

                //fecha a conexão com o banco!
                connectionBD.Close();
            }

            //usado para indicar que o programa conseguiu terminar sua execução com sucesso
            Console.WriteLine("\nFim da execução!");
        }
    }
}
