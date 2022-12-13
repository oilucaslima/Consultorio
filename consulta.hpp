#ifndef _CONSULTA_HPP
#define _CONSULTA_HPP
#include <string>
#include "data.hpp"

using namespace std;

class Consulta{

    private:

        Data* data;
        string hora;
        long long int cpfPaciente;
        int crmMedico;
        Consulta* proximo;

    public:

        Consulta(int dia, int mes, int ano, string hora, long long int cpfPaciente, int crmMedico);        
        Consulta();

        void setDataConsulta(int dia, int mes, int ano);
        Data* getDataConsulta();
        
        void setHora(string hora);
        string getHora();

        void setCpfPaciente(long long int cpfPaciente);
        long long int getCpfPaciente();

        void setCrmMedico(int crmMedico);
        int getCrmMedico();

        Consulta* getProximo();
        void setProximo(Consulta* proximo);
};
#endif

