#ifndef _CONSULTORIO_HPP
#define _CONSULTORIO_HPP
#include "listamedico.hpp"
#include "listapaciente.hpp"
#include "listaconsulta.hpp"
#include <iostream>
#include <string>

using namespace std;

class Consultorio{

    private:

        string nomeConsultorio;
        string enderecoConsultorio;
        string telefoneConsultorio;
        ListaPaciente* pacientes;
        ListaMedico* medicos;
        ListaConsulta* consultas;

    public:

        Consultorio(string nomeConsultorio,string enderecoConsultorio,string telefoneConsultorio,ListaPaciente* pacientes,ListaMedico* medicos,ListaConsulta* consultas);
        Consultorio();

        void setNomeConsultorio(string nomeConsultorio);
        string getNomeConsultorio();

        void setEnderecoConsultorio(string enderecoConsultorio);
        string getEndercoConsultorio();

        void setTelefoneConsultorio(string telefoneConsultorio);
        string getTelefoneConsultorio();

        void setLstPaciente(ListaPaciente* pacientes);
        ListaPaciente* getLstPaciente();

        void setLstMedico(ListaMedico* medicos);
        ListaMedico* getLstMedico();

        void setLstConsulta(ListaConsulta* consultas);
        ListaConsulta* getLstConsulta();

        void cadastraPaciente();

        void cadastraMedico();

        void cadastraConsulta();

        void dadosMedico();

        void dadosPaciente();

        void dadosConsultas();

        void consultaEspecifica();

        void removerConsulta();

        void removerMedico();

        void removerPaciente();

        void auxRemover(int crm);

        void auxRemoverPaciente(long long int cpf);

        // void removerPaciente();

        

};
#endif

