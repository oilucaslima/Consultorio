#include "listapaciente.hpp"

using namespace std;

ListaPaciente::ListaPaciente(){
    primeiro = NULL;
    ultimo = NULL;
}

ListaPaciente::ListaPaciente(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao){
    primeiro = new Paciente(nome,sexo,endereco,cpf,telefone,identidade,relato,dataUltimaConsulta,medicacao);
    ultimo = primeiro;
}

bool ListaPaciente::vazia(){
    return (primeiro == NULL);
}

ListaPaciente::~ListaPaciente(){
    delete primeiro;
}

Paciente* ListaPaciente::getPrimeiro(){
    return this->primeiro;      
}
void ListaPaciente::setPrimeiro(Paciente* primeiro){
    this->primeiro=primeiro;
}

Paciente* ListaPaciente::getUltimo(){
    return this->ultimo;      
}
void ListaPaciente::setUltimo(Paciente* ultimo){
    this->ultimo=ultimo;
}

void ListaPaciente::inserir(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao){
    Paciente* newPaciente = new Paciente(nome,sexo,endereco,cpf,telefone,identidade,relato,dataUltimaConsulta,medicacao);

    if(vazia()){
        primeiro = newPaciente;
        ultimo = newPaciente;
    }
    else{

        ultimo->setProximo(newPaciente);
        ultimo=newPaciente;

    }
}


void ListaPaciente::imprimir(){

    Paciente* p = getPrimeiro();

    if(vazia()){
        cout<<"\n\t-----sem pacientes-----\n";
    }
    else{
        cout<<"\n\t-----|REGISTRO DE PACIENTES|-----\n";

        while(p){
            cout<<"\n\t| Nome: "<< p->getNome();
            cout<<"\n\t| CPF: "<< p->getCpf();
            p= p->getProximo();
            cout<<"\n";
        }
        cout<<"\n\t---------------------\n";

    }
}