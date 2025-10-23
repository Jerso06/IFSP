using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Cria o cadastro de pessoas
            Cadastro cadastro = new Cadastro();
            //----------------------------------------------------------------------------
            //Adiciona 3 pessoas na lista ------------------------------------------------
            //----------------------------------------------------------------------------
            //Cria 3 pessoas
            Pessoa p1 = new Pessoa("Ana", 25, "111.111.111-11");
            Pessoa p2 = new Pessoa("Bia", 16, "222.222.222-22");
            Pessoa p3 = new Pessoa("Max", 28, "333.333.333-33");
            //adiciona as 3 pessoas na lista
            cadastro.CadastrarPessoa(p1);
            cadastro.CadastrarPessoa(p2);
            cadastro.CadastrarPessoa(p3);
            //Cria e adiciona 3 pessoas na lista em um único passo !!!
            /*cadastro.CadastrarPessoa(new Pessoa("Ana", 25, "111.111.111-11"));
            cadastro.CadastrarPessoa(new Pessoa("Bia", 16, "222.222.222-22"));
            cadastro.CadastrarPessoa(new Pessoa("Bia", 16, "222.222.222-22"));*/
            //----------------------------------------------------------------------------
            //Encontra a pessoa com o seguinte CPF: 222.222.222-22 -----------------------
            //----------------------------------------------------------------------------
            //cpf utilizado para buscar uma pessoa
            string cpf = "222.222.222-22";
            Pessoa pessoaCpf = cadastro.PesquisarCPF(cpf);
            Console.WriteLine("Dados da pessoa com o cpf: {0}", cpf);
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
            //Remove a pessoa com o seguinte CPF: 222.222.222-22 -------------------------
            //----------------------------------------------------------------------------
            //remove a pessoa da lista
            bool rs = cadastro.RemoverPessoa(cpf);
            if (rs == true)
            {
                Console.WriteLine("\nFoi removida a pessoa com o cpf: {0}", cpf);
            }
            //----------------------------------------------------------------------------
            //Imprime a lista de pessoas -------------------------------------------------
            //----------------------------------------------------------------------------
            string relatorio = cadastro.Relatorio();
            Console.WriteLine("\nLista de Pessoas:");
            Console.WriteLine(relatorio);
        }

    }
}
