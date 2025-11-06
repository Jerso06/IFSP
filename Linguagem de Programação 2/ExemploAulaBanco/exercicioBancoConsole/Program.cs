using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using MySql.Data.MySqlClient;

namespace exercicioBancoConsole
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string connectionStr = @"server=127.0.0.1;uid=root;pwd=ifsp;database=bd_lp2;ConnectionTimeout=1";

            MySqlConnection connectionBD = null;
            MySqlCommand cmd01 = null;

            try
            {
                connectionBD = new MySqlConnection(connectionStr);

                connectionBD.Open();

                cmd01 = new MySqlCommand("select * from funcionario", connectionBD);
                MySqlDataReader reader = cmd01.ExecuteReader();

                if (reader.HasRows)
                {
                    int numLinha = 1;

                    while (reader.Read())
                    {
                        Console.WriteLine("Linha: " + numLinha++);
                        Console.WriteLine("\tCódgio: " + reader.GetInt32(0));
                        Console.WriteLine("\tNome: " + reader.GetString(1));
                        Console.WriteLine("\tdataAdmissão: " + reader.GetDateTime(2));
                        Console.WriteLine("\tQtdDependentes: " + reader.GetInt32(3));
                        Console.WriteLine("\tQtdHoras: " + reader.GetFloat(4));
                        Console.WriteLine("\tSalário: " + reader.GetDouble(5));
                        Console.WriteLine("\tCPF: " + reader.GetString(6));
                        Console.WriteLine();
                    }
                }

                reader.Close();
            }
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
