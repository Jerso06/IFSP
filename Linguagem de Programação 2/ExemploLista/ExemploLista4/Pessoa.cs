using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExemploLista4
{
    internal class Pessoa
    {
        //campos representando os dados que serão guardados
        string nome;
        int idade;
        string cpf;
        //contrutor responsável por inicializar o objeto criado com os
        //dados passados como parametro
        public Pessoa(string nome, int idade, string cpf)
        {
            //inicializa os parâmetros da classe com os dados
            //passados como parâmetro
            this.nome = nome;
            this.cpf = cpf;
            this.idade = idade;
        }
        //retorna o nome da pessoa.
        public string getNome()
        {
            return nome;
        }
        //retorna o cpf da pessoa.
        public string getCpf()
        {
            return cpf;
        }
        //retorna a idade da pessoa.
        public int getIdade()
        {
            return idade;
        }
    }
}
