using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Cria o objeto do tipo "List" responsável por guardar
            //os objetos do tipo "Pessoa"
            List<Pessoa> lista = new List<Pessoa>();
            //----------------------------------------------------------------------------
            //Adiciona 3 pessoas na lista ------------------------------------------------
            //----------------------------------------------------------------------------
            //Cria 3 pessoas
            Pessoa p1 = new Pessoa("Ana", 25, "111.111.111-11");
            Pessoa p2 = new Pessoa("Bia", 16, "222.222.222-22");
            Pessoa p3 = new Pessoa("Max", 28, "333.333.333-33");
            //adiciona as 3 pessoas na lista
            lista.Add(p1);
            lista.Add(p2);
            lista.Add(p3);
            //Cria e adiciona 3 pessoas na lista em um único passo !!!
            /*lista.Add(new Pessoa("Ana", 25, "111.111.111-11"));
            lista.Add(new Pessoa("Bia", 16, "222.222.222-22"));
            lista.Add(new Pessoa("Bia", 16, "222.222.222-22"));*/
            //----------------------------------------------------------------------------
            //Encontra a pessoa com o seguinte CPF: 222.222.222-22 -----------------------
            //----------------------------------------------------------------------------
            //cpf utilizado para buscar uma pessoa
            string cpf = "222.222.222-22";
            Pessoa pessoaCpf = null;
            Console.WriteLine("Dados da pessoa com o cpf: {0}", cpf);
            //percorre toda a lista com os objetos do tipo pessoa
            foreach (Pessoa pessoa in lista)
            {
                //verifica se a pessoa possui o cpf igual ao passado como parâmetro
                if (String.Compare(pessoa.getCpf(), cpf, true) == 0)
                {
                    //encontrou uma pessoa na lista com o mesmo cpf, retorna sua referência
                    pessoaCpf = pessoa;
                    //encerra o laço !!!
                    break;
                }
            }
            //se a referência não for nula, quer dizer que encontrou a pessoa
            if (pessoaCpf != null)
            {
                Console.WriteLine("* Nome: {0} - Idade: {1} - CPF: {2};",
                pessoaCpf.getNome(), pessoaCpf.getIdade(), pessoaCpf.getCpf());
            }
            else
            {
                Console.WriteLine("Não foi encontrada uma pessoa com o cpf: {0}", cpf);
            }
            //----------------------------------------------------------------------------
            //Remove da lista a pessoa com o seguinte CPF: 222.222.222-22 ----------------
            //----------------------------------------------------------------------------
            //caso tenha encontrado a pessoa... a remove da lista
            if (pessoaCpf != null)
            {
                //remove a pessoa da lista
                lista.Remove(pessoaCpf);
            }
            //----------------------------------------------------------------------------
            //Imprime a lista de pessoas
            //----------------------------------------------------------------------------
            //percorre toda a lista com os objetos do tipo pessoa
            Console.WriteLine("\nLista de Pessoas:");
            foreach (Pessoa pessoa in lista)
            {
                Console.WriteLine("* Nome: {0} - Idade: {1} - CPF: {2};",
                pessoa.getNome(), pessoa.getIdade(), pessoa.getCpf());
            }
        }
    }
}
