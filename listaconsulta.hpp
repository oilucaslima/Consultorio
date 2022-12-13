#ifndef _LIStACONSULTA_HPP
#define _LISTACONSULTA_HPP
#include <iostream>
#include "consulta.hpp"
#include "listapaciente.hpp"


using namespace std;

class ListaConsulta{

    private:

        Consulta* primeiro;
        Consulta* ultimo;
        ListaPaciente* paciente;
        
    public:

        ListaConsulta(int dia, int mes, int ano, string hora, long long int cpfPaciente, int crmMedico);
        ListaConsulta();

        void inserir(int dia, int mes, int ano, string hora, long long int cpfPaciente, int crmMedico);

        //void imprimir();

        bool vazia();
        
        virtual ~ListaConsulta();

        Consulta* getPrimeiro();
        void setPrimeiro(Consulta* primeiro);

        Consulta* getUltimo();
        void setUltimo(Consulta* ultimo);

};
#endif