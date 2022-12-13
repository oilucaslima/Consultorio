#ifndef _PACIENTE_HPP
#define _PACIENTE_HPP
#include <string>
#include "pessoa.hpp"

using namespace std;

class Paciente : public Pessoa{

    private:

        string relato;
        string dataUltimaConsulta;
        string medicacao;
        Paciente* proximo;

    public:

        Paciente(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, string relato, string dataUltimaConsulta, string medicacao);
        Paciente();

        void setRelato(string relato);
        string getRelato();

        void setDataUltimaC(string dataUltimaConsulta);
        string getDataUltimaC();

        void setMedicacao(string medicacao);
        string getMedicacao();

        Paciente* getProximo();
        void setProximo(Paciente* proximo);
};
#endif

