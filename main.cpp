#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main(){

    int op;
    Bibliografia bi;

    do{
        cout<<"\n--- Bienvenidos ---"<<endl;
        cout<<"1.Ingresar un Libro"<<endl;
        cout<<"2.ingresar un Articulo"<<endl;
        cout<<"3.Imprimir Referencias"<<endl;
        cout<<"4.Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>op;
        switch(op){
        case 1:
            bi.agregarLibro();
            break;
        case 2:
            bi.agregarArticulo();
            break;
        case 3:
            bi.imprimirReferencias();
            break;
        case 4:
            cout<<"Gracias ";
        default:
            cout<<"Error...";
            break;
        }
    }while(op!=4);



    return 0;
}
