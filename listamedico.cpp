#include "listamedico.hpp"

using namespace std;

ListaMedico::ListaMedico(){
    primeiro = NULL;
    ultimo = NULL;
}

ListaMedico::ListaMedico(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade){
    primeiro = new Medico(nome,sexo,endereco,cpf,telefone,identidade,crm,especialidade);
    ultimo = primeiro;
}

bool ListaMedico::vazia(){
    return (primeiro == NULL);
}

ListaMedico::~ListaMedico(){
    delete primeiro;
}

Medico* ListaMedico::getPrimeiro(){
    return this->primeiro;      
}
void ListaMedico::setPrimeiro(Medico* primeiro){
    this->primeiro=primeiro;
}

Medico* ListaMedico::getUltimo(){
    return this->ultimo;      
}
void ListaMedico::setUltimo(Medico* ultimo){
    this->ultimo=ultimo;
}

void ListaMedico::inserir(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade){
        Medico* newMedico = new Medico(nome,sexo,endereco,cpf,telefone,identidade,crm,especialidade);

    if(vazia()){
        primeiro = newMedico;
        ultimo = newMedico;
    }
    else{

        ultimo->setProximo(newMedico);
        ultimo=newMedico;

    }
}

void ListaMedico::imprimir(){

    Medico* a = getPrimeiro();

    if(vazia()){
        cout<<"\n\t-----sem médicos-----\n";
    }
    else{
        cout<<"\n\t-----|REGISTRO DE MÉDICOS|-----\n";

        while(a){
            cout<<"\n\t| Nome: "<< a->getNome();
            cout<<"\n\t| CRM: "<<a->getCrm();
            a = a->getProximo();
            cout<<"\n";
        }
        cout<<"\n\t---------------------\n";

    }
}