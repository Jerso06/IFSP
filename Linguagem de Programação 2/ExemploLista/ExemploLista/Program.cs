using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista
{
    internal class Program
    {
        static void Main(string[] args)
        {

            List<int> numeros = new List<int>();

            //insere elementos no final da lista;
            numeros.Add(1);
            numeros.Add(2);
            numeros.Add(4);
            numeros.Add(4);
            numeros.Add(5);
            //insere elemento em uma dada posiação
            numeros.Insert(2, 3);
            numeros.Insert(1, 10);
            //procura e remore o elemento 10
            numeros.Remove(10);
            //encontra a primeira ocorrencia do elemento "4"
            int index = numeros.IndexOf(4);
            if (index >= 0)
            {
                //remove um elemento da lista
                numeros.RemoveAt(index);
            }
            //imprime um elemento na lista
            Console.Write("Lista: ");
            for (int i = 0; i < numeros.Count; i++)
            {
                Console.Write(numeros[i] + " ");
            }
            Console.WriteLine();

        }
    }
}
