#ifndef _MEDICO_HPP
#define _MEDICO_HPP
#include <string>
#include "pessoa.hpp"

using namespace std;

class Medico : public Pessoa{

    private:

        int crm;
        string especialidade;
        Medico* proximo;

    public:

        Medico(string nome, string sexo, string endereco,long long int cpf, string telefone, string identidade, int crm, string especialidade);
        Medico();
        
        void setCrm(int crm);
        int getCrm();

        void setEspecialidade(string especialidade);
        string getEspecialidade();

        Medico* getProximo();
        void setProximo(Medico* proximo);
};
#endif

