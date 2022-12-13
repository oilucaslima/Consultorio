#include "medico.hpp"
#include <iostream>

using namespace std;

Medico:: Medico(){
}

Medico :: Medico(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade):Pessoa(nome,sexo,endereco,cpf,telefone,identidade){
    this->crm=crm;
    this->especialidade=especialidade;
    this->proximo = NULL;
}

void Medico::setCrm(int crm){
    this->crm=crm;
}
int Medico::getCrm(){
    return this->crm;
}

void Medico::setEspecialidade(string especialidade){
    this->especialidade=especialidade;
}
string Medico::getEspecialidade(){
    return this->especialidade;
}

Medico* Medico::getProximo(){
    return this->proximo;
}
void Medico::setProximo(Medico* proximo){
    this->proximo=proximo;
}

