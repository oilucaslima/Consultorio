#include "paciente.hpp"
#include <iostream>

using namespace std;

Paciente:: Paciente(){
}

Paciente :: Paciente(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao):Pessoa(nome,sexo,endereco,cpf,telefone,identidade){
    this->relato=relato;
    this->dataUltimaConsulta=dataUltimaConsulta;
    this->medicacao=medicacao;
    this->proximo = NULL;
}

void Paciente::setRelato(string relato){
    this->relato=relato;
}
string Paciente::getRelato(){
    return this->relato;
}

void Paciente::setDataUltimaC(string dataUltimaConsulta){
    this->dataUltimaConsulta=dataUltimaConsulta;
}
string Paciente::getDataUltimaC(){
    return this->dataUltimaConsulta;
}

void Paciente::setMedicacao(string medicacao){
    this->medicacao=medicacao;
}
string Paciente::getMedicacao(){
    return this->medicacao;
}

Paciente* Paciente::getProximo(){
    return this->proximo;
}
void Paciente::setProximo(Paciente* proximo){
    this->proximo=proximo;
}

