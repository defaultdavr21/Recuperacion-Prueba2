#include "bibliografia.h"
#include <iostream>
using namespace std;

Bibliografia::Bibliografia(){

}

bool Bibliografia::agregarLibro(){

        int numero;
        string nombre;
        string publicacion;
        string titulo;
        int numpaginas;
        cout<<"ingrese el numero de autores: ";
        cin>>numero;
        cout<<"ingrese la publicacion: ";
        getline(cin>>ws,publicacion);
        cout<<"ingrese el titulo: ";
        getline(cin>>ws,titulo);
        cout<<"ingrese el numero de paginas: ";
        cin>>numpaginas;

        Libro* lbr = new Libro(numero,publicacion,titulo);
        for (int i=0;i<numero;i++){
            cout<<"ingrese el autor: ";
            getline(cin>>ws,nombre);
            lbr->agregarAutor(nombre);
        }
        lbr->setPaginas(numpaginas);

        referencias.push_back(lbr);

    return true;
}

bool Bibliografia::agregarArticulo(){

    int numero;
    string nombre;
    string publicacion;
    string revista;
    bool journal;

    cout<<"ingrese el numero de autores: ";
    cin>>numero;

    cout<<"ingrese el nombre de la revista: ";
    getline(cin>>ws,revista);
    cout<<"ingrese 1 si se ha ingresando al journal: ";
    cin>>journal;

     Articulo* a = new Articulo(numero,publicacion,revista);
     for (int i=0;i<numero;i++){
             cout<<"ingrese el autor: ";
             getline(cin>>ws,nombre);
             a->agregarAutor(nombre);
     }
     if(journal==true){
         a->setJournal(true);
     }else{
         a->setJournal(false);
     }

    referencias.push_back(a);

    return true;
}
void Bibliografia::imprimirReferencias()
{
    for(int i=0;i<referencias.size();i++){
        cout<<referencias[i]->obtenerReferencia();
    }
}
