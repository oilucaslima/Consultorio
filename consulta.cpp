#include "consulta.hpp"
#include <iostream>

using namespace std;

Consulta:: Consulta(){
}

Consulta :: Consulta(int dia,int mes, int ano, string hora,long long int cpfPaciente, int crmMedico){
    this->setDataConsulta(dia,mes,ano);
    this->hora=hora;
    this->cpfPaciente=cpfPaciente;
    this->crmMedico=crmMedico;
}

void Consulta::setDataConsulta(int dia, int mes, int ano){
    Data* date = new Data(dia, mes,ano);
    this->data=date;
}
Data* Consulta::getDataConsulta(){
    return this->data;
}
        
void Consulta::setHora(string hora){
    this->hora=hora;
}
string Consulta::getHora(){
    return this->hora;
}

void Consulta::setCpfPaciente(long long int cpfPaciente){
    this->cpfPaciente=cpfPaciente;
}
long long int Consulta::getCpfPaciente(){
    return this->cpfPaciente;
}

void Consulta::setCrmMedico(int crmMedico){
    this->crmMedico=crmMedico;
}
int Consulta::getCrmMedico(){
    return this->crmMedico;
}

Consulta* Consulta::getProximo(){
    return this->proximo;
}
void Consulta::setProximo(Consulta* proximo){
    this->proximo=proximo;
}


