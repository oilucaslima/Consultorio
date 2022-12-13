#include "consultorio.hpp"
#include <iostream>

using namespace std;

Consultorio::Consultorio(){  
    setNomeConsultorio("CONSULTORIO PLUS LIFE");
    setEnderecoConsultorio("Rua Raimundo Batista, nº118, cep:35600-233.");
    setTelefoneConsultorio("(37) 3241-9921");
    this->medicos = new ListaMedico();
    this->pacientes = new ListaPaciente();
    this->consultas = new ListaConsulta();

}

Consultorio::Consultorio(string nomeConsultorio,string enderecoConsultorio,string telefoneConsultorio,ListaPaciente* pacientes,ListaMedico* medicos,ListaConsulta* consultas){
    this->nomeConsultorio=nomeConsultorio;
    this->enderecoConsultorio=enderecoConsultorio;
    this->telefoneConsultorio=telefoneConsultorio;
    this->medicos = new ListaMedico();
    this->pacientes = new ListaPaciente();
    this->consultas = new ListaConsulta();
}

void Consultorio::setNomeConsultorio(string nomeConsultorio){
    this->nomeConsultorio=nomeConsultorio;
}
string Consultorio::getNomeConsultorio(){
    return this->nomeConsultorio;
}

void Consultorio::setEnderecoConsultorio(string enderecoConsultorio){
    this->enderecoConsultorio=enderecoConsultorio;
}
string Consultorio::getEndercoConsultorio(){
    return this->enderecoConsultorio;
}

void Consultorio::setTelefoneConsultorio(string telefoneConsultorio){
    this->telefoneConsultorio=telefoneConsultorio;
}
string Consultorio::getTelefoneConsultorio(){
    return this->telefoneConsultorio;
}

void Consultorio::setLstPaciente(ListaPaciente* pacientes){
    this->pacientes=pacientes;
}
ListaPaciente* Consultorio::getLstPaciente(){
    return this-> pacientes;
}

void Consultorio::setLstMedico(ListaMedico* medicos){
    this->medicos=medicos;
}
ListaMedico* Consultorio::getLstMedico(){
    return this-> medicos;
}

void Consultorio::setLstConsulta(ListaConsulta* consultas){
    this->consultas=consultas;
}
ListaConsulta* Consultorio::getLstConsulta(){
    return this-> consultas;
}

void Consultorio::cadastraPaciente(){

    Paciente* p = pacientes->getPrimeiro();
    Medico* m = medicos->getPrimeiro();
    string nome, sexo, endereco;
    string telefone, identidade;
    string relato, dataUltimaConsulta, medicacao;
    long long int cpf;
    int controle=0;

    cout<<"\n\t --- | Cadatrar Paciente | --- \n";

    cout<<"\n| CPF: ";
    cin>>cpf;

    while(p){
        if(p->getCpf()==cpf){

            while(p->getCpf()==cpf){

                cout<<"\n\t! CPF JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| CPF: ";
                cin>>cpf;
            }
        }
        p = p->getProximo();
    }

    while(m){
        if(m->getCpf()==cpf){

            while(m->getCpf()==cpf){

                cout<<"\n\t! CPF JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| CPF: ";
                cin>>cpf;
            }
        }
        m = m->getProximo();
    }

    m = medicos->getPrimeiro();
    p = pacientes->getPrimeiro();

    cout<<"| Nome: ";
    cin.ignore();
    getline(cin,nome);
    cout<<"| Sexo: ";
    getline(cin,sexo);
    cout<<"| Endereco: ";
    getline(cin,endereco);
    cout<<"| Telefone: ";
    cin.ignore();
    getline(cin,telefone);
    cout<<"| Identidade: ";
    getline(cin,identidade);

    while(p){
        if(p->getID()==identidade){

            while(p->getID()==identidade){

                cout<<"\n\t! IDENTIDADE JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| Identidade: ";
                getline(cin,identidade);
            }
        }

        p = p->getProximo();
    }

    while(m){
        if(m->getID()==identidade){

            while(m->getID()==identidade){

                cout<<"\n\t! IDENTIDADE JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| Identidade: ";
                getline(cin,identidade);
            }
        }

        m = m->getProximo();
    }

    cout<<"\t - Relato: ";
    getline(cin,relato);
    cout<<"\t - Data da ultima consulta: ";
    getline(cin,dataUltimaConsulta);
    cout<<"\t - Medicação: ";
    getline(cin,medicacao);

    cout<<"\n\t - (V) Cadastro completo...";

    pacientes->inserir(nome,sexo,endereco,cpf,telefone,identidade,relato,dataUltimaConsulta,medicacao);

    

}

void Consultorio::cadastraMedico(){
    string nome, sexo, endereco;
    string telefone, identidade;
    string especialidade;
    Medico* m = medicos->getPrimeiro();
    Paciente* p = pacientes->getPrimeiro();
    long long int cpf;
    int crm;

    cout<<"\n\t --- | Cadatrar Médico | --- \n";

    cout<<"\n| CPF: ";
    cin>>cpf;

    while(m){
        if(m->getCpf()==cpf){
            while(m->getCpf()==cpf){

                cout<<"\n\t! CPF JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| CPF: ";
                cin>>cpf;
            }
        }
        m = m->getProximo();
    }

    while(p){
        if(p->getCpf()==cpf){

            while(p->getCpf()==cpf){

                cout<<"\n\t! CPF JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| CPF: ";
                cin>>cpf;
            }
        }
        p = p->getProximo();
    }

    m = medicos->getPrimeiro();
    p = pacientes->getPrimeiro();

    cout<<"| Nome: ";
    cin.ignore();
    getline(cin,nome);
    cout<<"| Sexo: ";
    getline(cin,sexo);
    cout<<"| Endereco: ";
    getline(cin,endereco);
    cout<<"| Telefone: ";
    cin.ignore();
    getline(cin,telefone);
    cout<<"| Identidade: ";
    getline(cin,identidade);

    while(m){
        if(m->getID()==identidade){

            while(m->getID()==identidade){

                cout<<"\n\t! Identidade JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| Identidade: ";
                getline(cin,identidade);
            }
        }

        m = m->getProximo();

    }

    while(p){
        if(p->getID()==identidade){

            while(p->getID()==identidade){

                cout<<"\n\t! Identidade JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| Identidade: ";
                getline(cin,identidade);
            }
        }

        p = p->getProximo();

    }

    m = medicos->getPrimeiro();

    cout<<"| CRM: ";
    cin>>crm;

    while(m){
        if(m->getCrm()==crm){

            while(m->getCrm()==crm){

                cout<<"\n\t! CRM JA REGISTRADA ! ";
                cout<<"\n\n| Digite novamente: ";
                cout<<"\n| CRM: ";
                cin>>crm;
            }
        }

        m = m->getProximo();

    }

    cout<<"| Especialidade:  ";
    cin.ignore();
    getline(cin,especialidade);   

    cout<<"\n\t - (V) Cadastro completo...";

    medicos->inserir(nome,sexo,endereco,cpf,telefone,identidade,crm,especialidade);
}

void Consultorio::cadastraConsulta(){

    Consulta* c = consultas->getPrimeiro();
    Paciente* p = pacientes->getPrimeiro();
    Medico* m = medicos->getPrimeiro();
    int dia,mes,ano,op;
    string hora;
    long long int cpfPaciente;
    int controleMedico=0, controlePaciente=0,controle=0,crmMedico;
    

    cout<<"\n\t --- | Cadatrar Consulta | --- \n";
    cout<<"\n| Data: ";
    cout<<"\n\t - Dia: ";
    cin>>dia;

    if(dia<1 || dia>31){
        cout<<"\n ! obs.: Dia é (1) - (31).\n Digite novamente: \n";

        while(dia<1 || dia>31){
            cout<<"\n\t - Dia: ";
            cin>>dia;
        }
    }

    cout<<"\t - Mês: ";
    cin>>mes;
    
    if(mes>12 || mes<1){
        cout<<"\n ! obs.: Mês é (1) - (12).\n Digite novamente: \n";

        while(mes<1 || mes>12){
            cout<<"\n\t - Mês: ";
            cin>>mes;
        }
    }

    
    cout<<"\t - Ano: ";
    cin>>ano;
    if(ano<2022){
        cout<<"\n ! obs.: Ano menor que (2022).\n Digite novamente: \n";

        while(ano<2022){
            cout<<"\n\t - Ano: ";
            cin>>ano;
        }
    }

    cout<<"\n! adicionar horas no formato 00:00 de 30/30min...\n";
    cout<<"\n| Hora: ";
    cin.ignore();
    getline(cin,hora);

    while(c){
        if(c->getDataConsulta()->getDia()==dia && c->getDataConsulta()->getMes()==mes && c->getDataConsulta()->getAno()==ano && c->getHora()==hora){
            cout<<"\n\t ! Ja temos consulta nesse horario :( \n\t --> Marque em um outro horario/dia... ";
            controle=10;
        }
        c = c->getProximo();
    }

    if(controle!=10){

        if(pacientes->vazia()){
            cout<<"\n\t ! - Nenhum Paciente Cadastrado - !";

        }
        else{

            cout<<"| CPF (paciente): ";
            cin>>cpfPaciente;

            while(p){

                if(p->getCpf()==cpfPaciente){
                    controlePaciente=1;
                }
                p = p->getProximo();
            }

            if(controlePaciente!=1){
                cout<<"\n\t ! Paciente não cadastrado ! ";
            }
            else{

                cout<<"| CRM (médico): ";
                cin>>crmMedico;

                while(m){
                    if(m->getCrm()==crmMedico){
                        controleMedico=1;
                        cout<<"\n\t - (V) Cadastro completo...";
                        consultas->inserir(dia,mes,ano,hora,cpfPaciente,crmMedico);
                    }
                    m = m->getProximo();
                }
            }

            if(controleMedico!=1){
                cout<<"\n\t ! Médico não cadastrado ! ";

            }

        
        }

    }




}

void Consultorio::dadosMedico(){

    Medico* lm = getLstMedico()->getPrimeiro();
    int controle=0;
    int auxCRM;
    medicos->imprimir();

    cout<<"\n\t| Dados do Médico | ";
    cout<<"\n\n| CRM: ";
    cin>>auxCRM;

    while(lm){
        if(lm->getCrm()==auxCRM){
            cout<<"\n(%)imprimindo dados...";
            controle=1;
            cout<<"\n\t| Nome: "<< lm->getNome();
            cout<<"\n\t| Sexo: "<< lm->getSexo();
            cout<<"\n\t| Endereço: "<< lm->getEndereco();
            cout<<"\n\t| CPF: "<< lm->getCpf();
            cout<<"\n\t| Telefone: "<<lm->getTelefone();
            cout<<"\n\t| Identidade: "<< lm->getID();
            cout<<"\n\t     | CRM: "<<lm->getCrm();
            cout<<"\n\t     | Especialidade: "<<lm->getEspecialidade();
            cout<<"\n";

        }
        lm = lm->getProximo();
    }
    if(controle!=1){
        cout<<"\n\t ! CRM NÃO CADASTRADO.";
    }

}

void Consultorio::dadosPaciente(){

    Paciente* lp = getLstPaciente()->getPrimeiro();

    long long int auxCpf;
    int controle=0;
    pacientes->imprimir();

    cout<<"\n\t| Dados do Paciente | ";
    cout<<"\n\n| CPF: ";
    cin>>auxCpf;

    while(lp){
        if(lp->getCpf()==auxCpf){
            cout<<"\n(%)imprimindo dados...";
            controle=1;
            cout<<"\n\t| Nome: "<< lp->getNome();
            cout<<"\n\t| Sexo: "<< lp->getSexo();
            cout<<"\n\t| Endereço: "<< lp->getEndereco();
            cout<<"\n\t| CPF: "<< lp->getCpf();
            cout<<"\n\t| Telefone: "<<lp->getTelefone();
            cout<<"\n\t| Identidade: "<< lp->getID();
            cout<<"\n\t     | Relato: "<<lp->getRelato();
            cout<<"\n\t     | Ultima consulta: "<<lp->getDataUltimaC();
            cout<<"\n\t     | Medicação: "<<lp->getMedicacao();
            cout<<"\n";

        }
        lp = lp->getProximo();
    }
     if(controle!=1){
        cout<<"\n\t ! CPF NÃO CADASTRADO.";
    }


}

void Consultorio::dadosConsultas(){

    Consulta* c = getLstConsulta()->getPrimeiro();
    Paciente* p = getLstPaciente()-> getPrimeiro();
    Medico* m = getLstMedico()->getPrimeiro();
    string nomeP, nomeM;

    if(consultas->vazia()){
        cout<<"\n\t-----sem consultas-----\n";
    }
    else{
        cout<<"\n\t-----|REGISTRO DE CONSULTAS|-----\n";

        while(c){

            p = pacientes->getPrimeiro();

            while(p){
            
                if(p->getCpf()==c->getCpfPaciente()){
                    nomeP = p->getNome();
                }
                p = p->getProximo();
            }

            m = medicos->getPrimeiro();

            while(m){
                if(m->getCrm()==c->getCrmMedico()){
                    nomeM = m->getNome();

                }
                m = m->getProximo();
            }

            cout<<"\n\n\t| Paciente: "<<nomeP;
            cout<<"\n\t| CPF: "<< c->getCpfPaciente();
            cout<<"\n\t| Médico: "<<nomeM;
            cout<<"\n\t| CRM: "<<c->getCrmMedico();
            cout<<"\n\t| Data"<<":"<< c->getDataConsulta()->getDia()<< "/" <<c->getDataConsulta()->getMes()<<"/"<<c->getDataConsulta()->getAno();
            cout<<"\n\t| Horario: "<< c->getHora();
            c = c->getProximo();
            cout<<"\n";
        }
        cout<<"\n\t-------------------------------\n";

    }
}

void Consultorio::consultaEspecifica(){

    Paciente* p = getLstPaciente()->getPrimeiro();
    Medico* m = getLstMedico()->getPrimeiro();
    Consulta* c = getLstConsulta()->getPrimeiro();
    string nomeP,nomeM;
    int auxPaciente=0, auxMedico=0, resultado=0,crm, controle=0;
    long long int cpf; 
    
    cout<<"\n| CPF do Paciente: ";
    cin>>cpf;

    while(p){
        if(p->getCpf()==cpf){
            cout<<" (%) ... ";
            nomeP = p->getNome();
            auxPaciente=1;
            controle++;
        }
        p = p->getProximo();
    }

    if(auxPaciente!=1){
        cout<<"\n\t ! CPF INVALIDO";
    }
    else{

        cout<<"\n| CRM do Médico: ";
        cin>>crm;

        while(m){
            if(m->getCrm()==crm){
                cout<<" (%) ... ";
                nomeM = m->getNome();
                auxMedico=1;
                controle++;
            }
            m = m->getProximo();
        }

        if(auxMedico!=1){
            cout<<"\n\t ! CRM INVALIDO";
        }
        else{

            if(controle==2){
                while(c){

                    if(c->getCpfPaciente()==cpf && c->getCrmMedico()==crm){
                        cout<<"\n\n\t| Paciente: "<<nomeP;
                        cout<<"\n\t| CPF: "<< c->getCpfPaciente();
                        cout<<"\n\t| Médico: "<<nomeM;
                        cout<<"\n\t| CRM: "<<c->getCrmMedico();
                        cout<<"\n\t| Data: "<<c->getDataConsulta()->getDia()<<"/"<<c->getDataConsulta()->getMes()<<"/"<<c->getDataConsulta()->getAno();
                        cout<<"\n\t| Horario: "<< c->getHora();
                        resultado=1;
                    }
                    c = c->getProximo();
                }

            }
            else{
                cout<<"\n\t ! consulta não encontrada.";
            }

            if(resultado!=1 && auxPaciente==1 && auxPaciente==1){
                cout<<"\n\t ! Dados incompativeis de consulta médica.";
            }

        }

    }

}

void Consultorio::removerConsulta(){

    int  crm, dia, mes, ano,controle=0;
    long long int cpf=0;
    string hora;
    Consulta* atual = consultas->getPrimeiro();
    Consulta* ant = NULL;

    if(consultas->vazia()){
        cout<<"\n\t ! SEM CONSULTAS.";
    }
    else{

        cout<<"\n\t ---- [ REMOVER CONSULTA ] ------- ";
        cout<<"\n\n| CPF: "; 
        cin>>cpf;
        cout<<"| CRM: ";
        cin>>crm;
        cout<<"| Data: ";
        cout<<"\n      - dia:";
        cin>>dia;

        if(dia<1 || dia>31){
            cout<<"\n ! obs.: Dia é (1) - (31).\n Digite novamente: \n";

            while(dia<1 || dia>31){
                cout<<"\n\t - Dia: ";
                cin>>dia;
            }
        }

        cout<<"      - mês:";
        cin>>mes;

        if(mes>12 || mes<1){
            cout<<"\n ! obs.: Mês é (1) - (12).\n Digite novamente: \n";

            while(mes<1 || mes>12){
                cout<<"\n\t - Mês: ";
                cin>>mes;
            }
        }

        cout<<"      - ano:";
        cin>>ano;

        if(ano<2022){
            cout<<"\n ! obs.: Ano menor que (2022).\n Digite novamente: \n";

            while(ano<2022){
                cout<<"\n\t - Ano: ";
                cin>>ano;
            }
        }

        cout<<"| Horario: ";
        cin.ignore();
        getline(cin,hora);

        if(atual->getCpfPaciente()==cpf && atual->getCrmMedico()==crm && atual->getDataConsulta()->getDia()==dia && atual->getDataConsulta()->getMes()==mes && atual->getDataConsulta()->getAno()==ano && atual->getHora()==hora){
            consultas->setPrimeiro(atual->getProximo());
            delete atual;
            cout<<"\n\t ! CONSULTA REMOVIDA ";
        }
        //funciona


        else{

            while(atual){
                if((atual->getCpfPaciente()==cpf) && (atual->getCrmMedico()==crm) && (atual->getDataConsulta()->getDia()==dia) && (atual->getDataConsulta()->getMes()==mes) && (atual->getDataConsulta()->getAno()==ano) && (atual->getHora()==hora)){
                    cout<<"\n (%) PROCURANDO...";
                    controle=1;
                    break;
                }
                else{
                    ant = atual;
                    atual = atual->getProximo();
                }
                
            }
             
            if(controle!=1){
                cout<<"\n\t! CONSULTA NÃO CADASTRADA";
            }
            //ok
            else{

                if( (consultas->getPrimeiro()->getProximo()->getProximo()==NULL) && (consultas->getUltimo()->getCpfPaciente()==cpf) && (consultas->getUltimo()->getCrmMedico()==crm) && (consultas->getUltimo()->getDataConsulta()->getDia()==dia) && (consultas->getUltimo()->getDataConsulta()->getMes()==mes) && (consultas->getUltimo()->getDataConsulta()->getAno()==ano) && (consultas->getUltimo()-> getHora()==hora)){
                    consultas->getPrimeiro()->setProximo(NULL);
                    consultas->setUltimo(consultas->getPrimeiro());
                    cout<<"\n\t ! CONSULTA REMOVIDA ";
                }
                else if((atual == consultas->getUltimo()) && (atual->getCpfPaciente()==cpf) && (atual->getCrmMedico()==crm) && (atual->getDataConsulta()->getDia()==dia) && (atual->getDataConsulta()->getMes()==mes) && (atual->getDataConsulta()->getAno()==ano) && (atual->getHora()==hora)){
                    ant -> setProximo(NULL);
                    consultas->setUltimo(ant);
                    delete atual;
                    cout<<"\n\t ! CONSULTA REMOVIDA ";
                }
                else{
                    ant ->setProximo(atual->getProximo());
                    delete atual;
                    cout<<"\n\t ! CONSULTA REMOVIDA ";
                }

            }

            // while((atual!=NULL) && (atual->getCpfPaciente()!=cpf) && (atual->getCrmMedico()!=crm) && (atual->getDataConsulta()->getDia()!=dia) && (atual->getDataConsulta()->getMes()!=mes) && (atual->getDataConsulta()->getAno()!=ano) && (atual->getHora()!=hora)){
            //     ant = atual;
            //     atual = atual->getProximo();
            // }   
       }
    }

}

void Consultorio::removerMedico(){


    int crm, consultaMarcada=0;
    Medico* atual = medicos->getPrimeiro();
    Medico* ant = NULL;
    Consulta* c = consultas->getPrimeiro();

    cout<<"\n\t ---- [ REMOVER MÉDICO ] ------- ";
    cout<<"\n| CRM: "; 
    cin>>crm;

    if(medicos->vazia()){
        cout<<"\n\t ! SEM MÉDICOS.";
    }
    else{

        if(atual->getCrm()==crm){
            cout<<"\n (%) removendo todas consultas desse médico...";
            while(c){
                auxRemover(crm);
                c = c ->getProximo();
            }

            medicos->setPrimeiro(atual->getProximo());
            delete atual;
            cout<<"\n\t ! MÉDICO DEMITIDO ";

        }
        else{

            while((atual!=NULL) && (atual->getCrm()!=crm)){
                ant = atual;
                atual = atual->getProximo();
            }
            if(atual==NULL){
                cout<<"\n\t! MÉDICO FORA DO SISTEMA.";
            }
            else{

                c = consultas->getPrimeiro();

                if((medicos->getPrimeiro()->getProximo()->getProximo()==NULL) && (medicos->getUltimo()->getCrm()==crm)){
                    medicos->getPrimeiro()->setProximo(NULL);
                    medicos->setUltimo(medicos->getPrimeiro());
                    cout<<"\n (%) removendo todas consultas desse médico...";
                    while(c){
                        auxRemover(crm);
                        c = c ->getProximo();
                    }

                    cout<<"\n\t ! MÉDICO DEMITIDO ";
                }
                else if((atual == medicos->getUltimo()) && (atual->getCrm()==crm)){
                    ant -> setProximo(NULL);
                    medicos->setUltimo(ant);
                    cout<<"\n (%) removendo todas consultas desse médico...";
                    while(c){
                        auxRemover(crm);
                        c = c ->getProximo();
                    }

                    delete atual;
                    cout<<"\n\t ! MÉDICO DEMITIDO ";
                }
                else{
                    ant ->setProximo(atual->getProximo());
                    cout<<"\n (%) removendo todas consultas desse médico...";
                    while(c){
                        auxRemover(crm);
                        c = c ->getProximo();
                    }

                    delete atual;
                    cout<<"\n\t ! MÉDICO DEMITIDO ";
                }

            }

        }
    }
}

void Consultorio::removerPaciente(){

    long long int cpf;
    Paciente* atual =pacientes->getPrimeiro();
    Paciente* ant = NULL;
    Consulta* c = consultas->getPrimeiro();

    cout<<"\n\t ---- [ REMOVER PACIENTE ] ------- ";
    cout<<"\n| CPF: "; 
    cin>>cpf;

    if(pacientes->vazia()){
        cout<<"\n\t ! SEM PACIENTES.";
    }
    else{


        if(atual->getCpf()==cpf){
            cout<<"\n (%) removendo todas consultas desse paciente...";
            while(c){
                auxRemoverPaciente(cpf);
                c = c ->getProximo();
            }

            pacientes->setPrimeiro(atual->getProximo());
            delete atual;
            cout<<"\n\t ! PACIENTE REMOVIDO ";
        }
        else{

            while((atual!=NULL) && (atual->getCpf()!=cpf)){
                ant = atual;
                atual = atual->getProximo();
            }
            if(atual==NULL){
                cout<<"\n\t! PACIENTE FORA DO SISTEMA.";
            }
            else{

                if((pacientes->getPrimeiro()->getProximo()->getProximo()==NULL) && (pacientes->getUltimo()->getCpf()==cpf)){
                    pacientes->getPrimeiro()->setProximo(NULL);
                    pacientes->setUltimo(pacientes->getPrimeiro());
                    cout<<"\n (%) removendo todas consultas desse paciente...";
                    while(c){
                        auxRemoverPaciente(cpf);
                        c = c ->getProximo();
                    }
                    cout<<"\n\t ! PACIENTE REMOVIDO ";
                }
                else if((atual == pacientes->getUltimo()) && (atual->getCpf()==cpf)){
                    ant -> setProximo(NULL);
                    pacientes->setUltimo(ant);
                    cout<<"\n (%) removendo todas consultas desse paciente...";
                    while(c){
                        auxRemoverPaciente(cpf);
                        c = c ->getProximo();
                    }
                    delete atual;
                    cout<<"\n\t ! PACIENTE REMOVIDO ";
                }
                else{
                    ant ->setProximo(atual->getProximo());
                    cout<<"\n (%) removendo todas consultas desse paciente...";
                    while(c){
                        auxRemoverPaciente(cpf);
                        c = c ->getProximo();
                    }
                    delete atual;
                    cout<<"\n\t ! PACIENTE REMOVIDO ";
                }

            }

        }
    }
}

void Consultorio::auxRemover(int crm){


    Consulta* c = consultas->getPrimeiro();
    Consulta* ant = NULL;
    int controle=0;

    if(consultas->vazia()){
        cout<<"\n\t ! SEM CONSULTAS DESSE MÉDICO.";
    }
    else{
        if(c->getCrmMedico()==crm){
            consultas->setPrimeiro(c->getProximo());
            delete c;
        }
        else{

            while(c){
                if(c->getCrmMedico()==crm){
                    controle=1;
                    break;
                }
                else{
                    ant = c;
                    c = c->getProximo();
                }
            }

            if(controle!=1){
                //cout<<"\n\t! CONSULTA NÃO CADASTRADA";
            }
            else{

                if((consultas->getPrimeiro()->getProximo()->getProximo()==NULL) && (consultas->getUltimo()->getCrmMedico()==crm)){
                    consultas->getPrimeiro()->setProximo(NULL);
                    consultas->setUltimo(consultas->getPrimeiro());
                }
                else if((c == consultas->getUltimo()) && (c->getCrmMedico()==crm)){
                    ant -> setProximo(NULL);
                    consultas->setUltimo(ant);
                    delete c;
                }
                else{
                    ant ->setProximo(c->getProximo());
                    delete c;
                }

            }
    
        
        }
    }


}

void Consultorio::auxRemoverPaciente(long long int cpf){    
    
    Consulta* c = consultas->getPrimeiro();
    Consulta* ant = NULL;
    int controle=0;

    if(consultas->vazia()){
        cout<<"\n\t ! SEM CONSULTAS DESSE MÉDICO.";
    }
    else{
        if(c->getCpfPaciente()==cpf){
            consultas->setPrimeiro(c->getProximo());
            delete c;
        }
        else{

            while(c){
                if(c->getCpfPaciente()==cpf){
                    controle=1;
                    break;
                }
                else{
                    ant = c;
                    c = c->getProximo();
                }
            }

            if(controle!=1){
                //cout<<"\n\t! CONSULTA NÃO CADASTRADA";
            }
            else{

                if((consultas->getPrimeiro()->getProximo()->getProximo()==NULL) && (consultas->getUltimo()->getCpfPaciente()==cpf)){
                    consultas->getPrimeiro()->setProximo(NULL);
                    consultas->setUltimo(consultas->getPrimeiro());
                }
                else if((c == consultas->getUltimo()) && (c->getCpfPaciente()==cpf)){
                    ant -> setProximo(NULL);
                    consultas->setUltimo(ant);
                    delete c;
                }
                else{
                    ant ->setProximo(c->getProximo());
                    delete c;
                }

            }
    
        
        }
    }
 
}