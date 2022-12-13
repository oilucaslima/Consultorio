#ifndef _PESSOA_HPP
#define _PESSOA_HPP
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    protected:

        string nome;
        string sexo;
        string endereco;
        long long int cpf;
        string telefone;
        string identidade;
        

    public:

        Pessoa(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade);
        Pessoa();
        
        void setNome(string nome);
        string getNome();

        void setSexo(string sexo);
        string getSexo();

        void setEndereco(string endereco);
        string getEndereco();

        void setCpf(long long int cpf);
        long long int getCpf();

        void setTelefone(string telefone);
        string getTelefone();

        void setID(string identidade);
        string getID();

};
#endif
