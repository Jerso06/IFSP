using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista4
{
    internal class Cadastro
    {
        //Cria um campo para uma referência para uma lista de pessoas
        private List<Pessoa> lista_pessoas;
        public Cadastro()
        {
            //Cria o objeto do tipo "List" responsável por guardar os objetos do tipo
            //"Pessoa" que são criados no método "CadastrarPessoa";
            lista_pessoas = new List<Pessoa>();
        }
        //-----------------------------------------------------------------------------------
        //Realiza o cadastro de uma pessoa
        public void CadastrarPessoa(Pessoa pessoa)
        {
            //verifica se a referencia é valida
            //(se está associada a um objeto do tipo Pessoa)
            if (pessoa != null)
            {
                //insere o objeto na lista
                lista_pessoas.Add(pessoa);
            }
        }
        //-------------------------------------------------------------------------
        //Verifica se existe uma pessoa cadastrada que possui o cpf passado como parâmetro;
        //Caso exista uma pessoa/objeto cadastrada com o cpf passado, retorna a sua referência
        //Caso não exista uma pessoa/objeto cadastrado como o cpf passado, returna null;
        public Pessoa PesquisarCPF(string cpf)
        {
            //percorre toda a lista com os objetos do tipo pessoa
            foreach (Pessoa pessoa in lista_pessoas)
            {
                //verifica se a pessoa possui o cpf igual ao passado como parâmetro
                if (String.Compare(pessoa.getCpf(), cpf, true) == 0)
                {
                    //encontrou uma pessoa na lista com o mesmo cpf, retorna sua referência
                    return pessoa;
                }
            }
            //se o programa chegar nesse ponto, significa que não foi encontrada nenhuma
            //pessoa na lista de pessoas ("lista_pessoas") com o cpf igual ao passado
            //como parâmetro, nesse caso é retornado "null" para indicar que nenhuma
            //pessoa foi encontrada.
            return null;
        }
        //-------------------------------------------------------------------------
        //Remove a pessoa do cadastro que possuir um cpf igual ao passado como parâmetro.
        public bool RemoverPessoa(string cpf)
        {
            //procura uma pessoa que possua o cpf igual ao passado como parâmetro
            //caso encontre returna uma referência para essa pessoa;
            //caso não encontre, retorna null
            Pessoa pessoa = PesquisarCPF(cpf);
            //caso encontre uma pessoa
            if (pessoa != null)
            {
                //remove a pessoa da lista e retorna "true"
                //indicando que a pessoa foi encontrada e removida
                lista_pessoas.Remove(pessoa);
                return true;
            }
            //caso o programa chegue nesse ponto, significa que não foi encontrada
            //uma pessoa com o cpf passado, e portando, não foi removida.
            //retorna "false" para indicar que a pessoa não foi encontrada e removida.
            return false;
        }
        //-------------------------------------------------------------------------
        //devolve uma string com os dados das pessoas cadastradas
        public string Relatorio()
        {
            //cria um "construtor" de string
            StringBuilder sb = new StringBuilder();
            //percorre a lista de pessoas
            foreach (Pessoa pessoa in lista_pessoas)
            {
                sb.AppendFormat("* Nome: {0} - Idade: {1} - CPF: {2};\n",
                pessoa.getNome(), pessoa.getIdade(), pessoa.getCpf());
            }
            //retorna a string construida !!!
            return sb.ToString();
        }

    }
}
