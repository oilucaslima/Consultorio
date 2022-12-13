#ifndef _LISTAMEDICO_HPP
#define _LISTAMEDICO_HPP
#include <iostream>
#include "medico.hpp"

using namespace std;

class ListaMedico{

    private:

        Medico* primeiro;
        Medico* ultimo;
        
    public:

        ListaMedico(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade);
        ListaMedico();

        bool vazia();
        
        virtual ~ListaMedico();

        void inserir(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade);

        void imprimir();

        Medico* getPrimeiro();
        void setPrimeiro(Medico* primeiro);

        Medico* getUltimo();
        void setUltimo(Medico* ultimo);

};
#endif