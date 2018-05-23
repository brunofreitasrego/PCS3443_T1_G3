#ifndef ORDEM_DE_SAÍDA_H
#define ORDEM_DE_SAÍDA_H
//Begin section for file Ordem_de_Saída.h
//TODO: Add definitions that you want preserved
//End section for file Ordem_de_Saída.h
#include "date.h"



class Ordem_de_Serviço; //Dependency Generated Source:Ordem_de_Saída Target:Ordem_de_Serviço





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Ordem_de_Saída
{
    //Begin section for Ordem_de_Saída
    //TODO: Add attributes that you want preserved
    //End section for Ordem_de_Saída

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        date data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Serviço * ordem_de_Serviço;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Saída(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Ordem_de_Saída(); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        date get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_data(date data); 



        //get ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Serviço * get_ordem_de_Serviço(); 



        //set ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordem_de_Serviço(Ordem_de_Serviço * ordem_de_Serviço); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterarEstado(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void destroyOSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Criação_de_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Atribui_a_OS_a_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Atribui_Equipe_a_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Lista_de_OSS_em_aberto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Detalhes_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_OS_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_Equipe_da_OS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_Equipe_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Altera_o_estado_para__OSS_Removida_(); 



};  //end class Ordem_de_Saída



#endif#endif#endif
