#include "documento.h"

const vector<string> &Documento::getAutores() const
{
    return autores;
}



Documento::Documento()
{

}

Documento::Documento(int numAutores): numAutores(numAutores)
{

}
int Documento::getautor(){

    return numAutores;
}

bool Documento::agregarAutor(string nombre)
{
    autores.push_back(nombre);
    return true;
}

string Documento::obtenerReferencia()
{
    string str = "";
    for(string s: autores){
        str += s + ", ";
    }
    return str;
}
