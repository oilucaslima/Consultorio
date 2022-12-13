#include "listaconsulta.hpp"

using namespace std;

ListaConsulta::ListaConsulta(){
    primeiro = NULL;
    ultimo = NULL;
}

ListaConsulta::ListaConsulta(int dia,int mes,int ano, string hora, long long int cpfPaciente, int crmMedico){
    primeiro = new Consulta(dia,mes,ano,hora,cpfPaciente,crmMedico);
    ultimo = primeiro;
}

bool ListaConsulta::vazia(){
    return (primeiro == NULL);
}

ListaConsulta::~ListaConsulta(){
    delete primeiro;
}

Consulta* ListaConsulta::getPrimeiro(){
    return this->primeiro;      
}
void ListaConsulta::setPrimeiro(Consulta* primeiro){
    this->primeiro=primeiro;
}

Consulta* ListaConsulta::getUltimo(){
    return this->ultimo;      
}
void ListaConsulta::setUltimo(Consulta* ultimo){
    this->ultimo=ultimo;
}

void ListaConsulta::inserir(int dia, int mes, int ano, string hora, long long int cpfPaciente, int crmMedico){

    Consulta* newConsulta = new Consulta(dia,mes,ano,hora,cpfPaciente,crmMedico);

    if(vazia()){
        primeiro = newConsulta;
        ultimo = newConsulta;
    }
    else{

        ultimo->setProximo(newConsulta);
        ultimo=newConsulta;

    }
}

//oid ListaConsulta::imprimir(){

    // Consulta* c = getPrimeiro();
    // Paciente* p = getPrimeiro();

    // if(vazia()){
    //     cout<<"\n\t-----sem consultas-----\n";
    // }
    // else{
    //     cout<<"\n\t-----|REGISTRO DE CONSULTAS|-----\n";

    //     while(c){

    //         while(p){
            
    //             if(p->getCpf()==c->getCpfPaciente()){
    //                 nomeP = p->getNome();

    //             }
    //         }
    //         cout<<"\n\t| Paciente: "<<nomeP;
    //         cout<<"\n\t| CPF: "<< c->getCpfPaciente();
    //         cout<<"\n\t| Médico: ";
    //         cout<<"\n\t| CRM: "<<c->getCrmMedico();
    //         cout<<"\n\t| Data: ";
    //         cout<<"\n\t   - dia: "<<c->getDataConsulta()->getDia();
    //         cout<<"\n\t   - mês: "<<c->getDataConsulta()->getMes();
    //         cout<<"\n\t   - ano: "<< c->getDataConsulta()->getAno();
    //         cout<<"\n\t| Horario: "<< c->getHora();
    //         c = c->getProximo();
    //         cout<<"\n";
    //     }
    //     cout<<"\n\t-------------------------------\n";

    // }
