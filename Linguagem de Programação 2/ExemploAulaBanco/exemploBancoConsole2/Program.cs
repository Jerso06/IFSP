//biblioteca MySql
using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SELECT_02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //string de conexão com o banco de dados
            string connectionStr = @"server=127.0.0.1;uid=root;pwd=ifsp;database=bd_lp2;ConnectionTimeout=1";

            //referências para os objetos que representam a conexão com o banco e o comando sql
            MySqlConnection connectionBD = null;
            MySqlCommand cmd01 = null;

            //Usado para capturar as exceções de falha de conexão (e outros erros não previstos)
            try
            {

                //tenta criar uma conexão com o banco
                connectionBD = new MySqlConnection(connectionStr);

                //abre a conexão com o banco
                connectionBD.Open();


                //------------------------------------------------------------------------------------------------
                //Exemplo - Executa uma consulta SELECT que devolve um escalar---------------------------------
                //------------------------------------------------------------------------------------------------

                //retorna o total de linhas da tabela
                cmd01 = new MySqlCommand("SELECT COUNT(*) FROM Funcionario", connectionBD); //comando de seleção

                long count = (long)cmd01.ExecuteScalar();
                Console.WriteLine("Total de Registos: " + count);

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
                //libera a memória utilizada pelos comandos
                if (cmd01 != null) cmd01.Dispose();

                //fecha a conexão com o banco!
                connectionBD.Close();
            }


            //usado para indicar que o programa conseguiu terminar sua execução com sucesso
            Console.WriteLine("\nFim da execução!");
        }
    }
}
