#include "bibliografia.h"
#include "libro.h"
#include "articulo.h"

#include<iostream>
using namespace std;

Bibliografia::Bibliografia(){

}
const vector<Documento> &Bibliografia::obtenerReferencia() const
{
    return referencias;
}

bool Bibliografia::agregarlibro(){
    Libro l;
    Documento d;
    string nombre;
    int autor, pag;
    cout<<"Ingrese cuantos autores son: ";
    cin>>autor;
    for(int i=0;i<autor;i++){
        cout<<"Ingrese el autor: ";
        getline(cin>>ws,nombre);
        agregarAutor(nombre);
    }
    cout<<"Ingrese el numero de paginas: ";
    cin>>pag;
    l.setPaginas(pag);
    cout<<d.obtenerReferencia();
    cout<<l.obtenerReferencia();
    return true;


}
bool Bibliografia::agregararticulo(){

}

void Bibliografia::imprimirreferencia(){

    //referencias.push_back(obtenerReferencia());

}



