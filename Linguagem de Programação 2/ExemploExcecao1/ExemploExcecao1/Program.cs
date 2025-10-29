using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploExcecao1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool execute = true;
            while (execute)
            {
                try
                {
                    Console.Write("Informe sua idade: ");
                    int idade = int.Parse(Console.ReadLine());

                    if (!(idade >= 0 && idade <= 100))
                    {
                        throw new ErroCriticoException(99,"Meu erro");
                    }

                    execute = false;
                }
                catch (ErroCriticoException erro)
                {
                    erro.getTexto();
                    erro.getValor();
                }
                catch (ArgumentException erro)
                {
                    Console.WriteLine(erro.Message);
                    execute = true;
                }
                catch (DivideByZeroException)
                {
                    Console.WriteLine("Erro de divisão por zero");
                    execute = true;
                }
                catch (FormatException)
                {
                    Console.WriteLine("Digite um valor inteiro no int.Parse()");
                    execute = true;
                }
                catch (Exception erro)
                {
                    Console.WriteLine("\nCatch Exception: captura qualquer exceção gerada !!!");
                    Console.WriteLine("\nException: " + erro.GetType());
                    Console.WriteLine("\nMessage: " + erro.Message);
                    Console.WriteLine("\nSource: " + erro.Source);
                    Console.WriteLine("\nTargetSite: " + erro.TargetSite);
                    Console.WriteLine("\nStackTrace: " + erro.StackTrace);
                }
            }
            Console.WriteLine("\nFim da execução do programa!");
        }
    }
}
