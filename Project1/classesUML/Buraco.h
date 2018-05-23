#ifndef BURACO_H
#define BURACO_H
//Begin section for file Buraco.h
//TODO: Add definitions that you want preserved
//End section for file Buraco.h

#include <string>

class Notifica��o; //Dependency Generated Source:Buraco Target:Notifica��o


class Ordem_de_Servi�o; //Dependency Generated Source:Buraco Target:Ordem_de_Servi�o


class Foto; //Dependency Generated Source:Buraco Target:Foto


class Regi�o; //Dependency Generated Source:Buraco Target:Regi�o


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Buraco
{
    //Begin section for Buraco
    //TODO: Add attributes that you want preserved
    //End section for Buraco

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int ID;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int nReclama��es;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int posi��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        date dataInclus�o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * localiza��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int tamanho;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * notifica��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o * ordem_de_Servi�o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto * foto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regi�o * regi�o;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco(std::string address, int size, int position, long int CEP, std::string date);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Buraco(); 



        //get ID
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_ID(); 



        //set ID
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ID(int ID); 



        //get nReclama��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_nReclama��es(); 



        //set nReclama��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nReclama��es(int nReclama��es); 



        //get posi��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_posi��o(); 



        //set posi��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_posi��o(int posi��o); 



        //get dataInclus�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        date get_dataInclus�o(); 



        //set dataInclus�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_dataInclus�o(date dataInclus�o); 



        //get localiza��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * get_localiza��o(); 



        //get tamanho
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_tamanho(); 



        //set tamanho
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_tamanho(int tamanho); 



        //get notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * get_notifica��o(); 



        //set notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_notifica��o(Notifica��o * notifica��o); 



        //get ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o * get_ordem_de_Servi�o(); 



        //set ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordem_de_Servi�o(Ordem_de_Servi�o * ordem_de_Servi�o); 



        //get foto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto * get_foto(); 



        //set foto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_foto(Foto * foto); 



        //get regi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regi�o * get_regi�o(); 



        //set regi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_regi�o(Regi�o * regi�o); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void addNotifica��o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void createBuraco(); 



};  //end class Buraco



#endif#endif#endif
