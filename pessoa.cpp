#include "pessoa.hpp"

using namespace std;

Pessoa::Pessoa(){
}

Pessoa::Pessoa(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade){
    this->nome=nome;
    this->sexo=sexo;
    this->endereco=endereco;
    this->cpf=cpf;
    this->telefone=telefone;
    this->identidade=identidade;
}

void Pessoa::setNome(string nome){
    this->nome=nome;
}
string Pessoa::getNome(){
    return this->nome;
}

void Pessoa::setSexo(string sexo){
    this->sexo=sexo;
}
string Pessoa::getSexo(){
    return this->sexo;
}

void Pessoa::setEndereco(string endereco){
    this->endereco=endereco;
}
string Pessoa::getEndereco(){
    return this->endereco;
}

void Pessoa::setCpf(long long int cpf){
    this->cpf=cpf;
}
long long int Pessoa::getCpf(){
    return this->cpf;
}

void Pessoa::setTelefone(string telefone){
    this->telefone=telefone;
}
string Pessoa::getTelefone(){
    return this->telefone;
}

void Pessoa::setID(string identidade){
    this->identidade=identidade;
}
string Pessoa::getID(){
    return this->identidade;
}