using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //cria uma lista com marcas/fabricantes de carros
            List<string> carros = new List<string>();
            //insere elementos (marcas) no final da lista;
            carros.Add("Volvo");
            carros.Add("BMW");
            carros.Add("Ford");
            carros.Add("Honda");
            //imprime todos os elemento da lista
            foreach (string carro in carros)
            {
                Console.WriteLine(carro);
            }

        }
    }
}
