#ifndef CIDADÃO_H
#define CIDADÃO_H
//Begin section for file Cidadão.h
//TODO: Add definitions that you want preserved
//End section for file Cidadão.h



class Notificação; //Dependency Generated Source:Cidadão Target:Notificação





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Cidadão
{
    //Begin section for Cidadão
    //TODO: Add attributes that you want preserved
    //End section for Cidadão

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * contato;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificação * notificação;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidadão(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Cidadão(); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * get_nome(); 



        //get contato
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * get_contato(); 



        //get notificação
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificação * get_notificação(); 



        //set notificação
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_notificação(Notificação * notificação); 



};  //end class Cidadão



#endif#endif#endif
