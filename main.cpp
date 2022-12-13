#include "consultorio.hpp"
#include <iostream>
#include <string>

int main(){

    int opcao=-1;
    Consultorio* c = new Consultorio();

    do{
        cout<<"\n\n\t-------["<<c->getNomeConsultorio()<<"]-------";
        cout<<"\n\n"<<c->getEndercoConsultorio();
        cout<<"\n"<<c->getTelefoneConsultorio();

        cout<<"\n\n(1) - Cadastrar Médico.";    //ok e tratado...
        cout<<"\n(2) - Cadastrar Paciente.";    //ok e tratado...
        cout<<"\n(3) - Cadastrar Consulta.";    //ok e tratado...
        cout<<"\n(4) - Dados do Médico.";       //ok
        cout<<"\n(5) - Dados da Consulta.";     //ok
        cout<<"\n(6) - Dados do Paciente.";     //ok
        cout<<"\n(7) - Consulta Especifica.";   //ok e tratado...
        cout<<"\n(8) - Remover Médico.";        //ok e tratado...
        cout<<"\n(9) - Remover Paciente.";       //ok
        cout<<"\n(10) - Remover Consulta.";     //ok e tratado...
        cout<<"\n(0) - Sair.";
        cout<<"\n(*) - ";
        cin>>opcao;

        switch(opcao){

            case 1:
                c->cadastraMedico();
            break;

            case 2:
                c->cadastraPaciente();
            break;

            case 3:
                c->cadastraConsulta();
            break;

            case 4:
                c->dadosMedico();
            break;

            case 5:
                c->dadosConsultas();
            break;

            case 6:
                c->dadosPaciente();
            break;

            case 7:
                c->consultaEspecifica();
            break;

            case 8:
                c->removerMedico();
            break;

            case 9:
               c->removerPaciente();
            break;

            case 10:
                c->removerConsulta();
            break;

        }

    }while(opcao!=0);

}