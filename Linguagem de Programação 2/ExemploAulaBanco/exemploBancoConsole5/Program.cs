//biblioteca MySql
using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DELETE
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //string de conexão com o banco de dados
            string connectionStr = @"server=127.0.0.1;uid=root;pwd=ifsp;database=bd_lp2;ConnectionTimeout=1";

            //referências para os objetos que representam a conexão com o banco e o comando sql
            MySqlConnection connectionBD = null;
            MySqlCommand cmdDelete = null;


            //Usado para capturar as exceções de falha de conexão (e outros erros não previstos)
            try
            {
                //tenta criar uma conexão com o banco
                connectionBD = new MySqlConnection(connectionStr);

                //abre a conexão com o banco
                connectionBD.Open();

                //------------------------------------------------------------------------------------------

                // Executa um comando DELETE para remover o cliente com cpf "11111111111"
                // Como o DELETE não retorna valores, devemos executar o comando 'ExecuteNonQuery'
                cmdDelete = new MySqlCommand();

                //atribui uma conexão ao comando (obrigatório)
                cmdDelete.Connection = connectionBD;

                //Será executado o seguinte comando SQL:
                // DELETE FROM Funcionario  
                // WHERE cpf = '44444444444';

                //variável contendo o valor do cpf que será utilizado para remover 
                //uma linha da tabela funcionário
                string cpf = "44444444444";

                //seta o comando sql que será executado
                cmdDelete.CommandText = "DELETE FROM Funcionario " +
                                    "WHERE cpf = @cpf";

                //seta os parametros que deverão ser passados para a consulta sql
                cmdDelete.Parameters.AddWithValue("cpf", cpf);

                //executa o comando / consulta sql
                int numLinhasAfetadas = cmdDelete.ExecuteNonQuery();
                if (numLinhasAfetadas != 0)
                {
                    Console.WriteLine("DELETE executado com sucesso! ");
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
                //libera a memória utilizada pelo comando sql
                if (cmdDelete != null) cmdDelete.Dispose();


                //fecha a conexão com o banco!
                connectionBD.Close();
            }

            //usado para indicar que o programa conseguiu terminar sua execução com sucesso
            Console.WriteLine("\nFim da execução!");
        }
    }
}
