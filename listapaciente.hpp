#ifndef _LISTAPACIENTE_HPP
#define _LISTAPACIENTE_HPP
#include <iostream>
#include "paciente.hpp"

using namespace std;

class ListaPaciente{

    private:

        Paciente* primeiro;
        Paciente* ultimo;
        
    public:

        ListaPaciente(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao);
        ListaPaciente();

        bool vazia();
        
        virtual ~ListaPaciente();

        void inserir(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao);

        void imprimir();

        Paciente* getPrimeiro();
        void setPrimeiro(Paciente* primeiro);

        Paciente* getUltimo();
        void setUltimo(Paciente* ultimo);

};
#endif