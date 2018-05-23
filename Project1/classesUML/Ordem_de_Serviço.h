#ifndef ORDEM_DE_SERVI�O_H
#define ORDEM_DE_SERVI�O_H
//Begin section for file Ordem_de_Servi�o.h
//TODO: Add definitions that you want preserved
//End section for file Ordem_de_Servi�o.h



class Buraco; //Dependency Generated Source:Ordem_de_Servi�o Target:Buraco


class Equipe; //Dependency Generated Source:Ordem_de_Servi�o Target:Equipe


class Ordem_de_Sa�da; //Dependency Generated Source:Ordem_de_Servi�o Target:Ordem_de_Sa�da





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Ordem_de_Servi�o
{
    //Begin section for Ordem_de_Servi�o
    //TODO: Add attributes that you want preserved
    //End section for Ordem_de_Servi�o

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int nPessoasEstimado;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int horasPessoas;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int prioridade;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * estado;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * equipe;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Sa�da * ordem_de_Sa�da;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Ordem_de_Servi�o(); 



        //get nPessoasEstimado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_nPessoasEstimado(); 



        //set nPessoasEstimado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nPessoasEstimado(int nPessoasEstimado); 



        //get horasPessoas
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_horasPessoas(); 



        //set horasPessoas
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_horasPessoas(int horasPessoas); 



        //get prioridade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_prioridade(); 



        //set prioridade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_prioridade(int prioridade); 



        //get custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_custo(); 



        //set custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_custo(int custo); 



        //get estado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * get_estado(); 



        //get buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * get_buraco(); 



        //set buraco
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_buraco(Buraco * buraco); 



        //get equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * get_equipe(); 



        //set equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_equipe(Equipe * equipe); 



        //get ordem_de_Sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Sa�da * get_ordem_de_Sa�da(); 



        //set ordem_de_Sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordem_de_Sa�da(Ordem_de_Sa�da * ordem_de_Sa�da); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void createOS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void calculaPrioridade(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void calculaEstimativas(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void altEstadoOS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Lista_de_OS_em_aberto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Atribui_a_OS_a_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Detalhes_da_OS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void OS_atribuida_s__a_sa�da(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_OS_da_OSS(); 



};  //end class Ordem_de_Servi�o



#endif#endif#endif
