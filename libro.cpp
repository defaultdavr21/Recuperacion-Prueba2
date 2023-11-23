#include "libro.h"

int Libro::getPaginas() const{
    return paginas;
}

void Libro::setPaginas(int newPaginas){
    paginas = newPaginas;
}

Libro::Libro(){

}

Libro::Libro(int numAutores, string publicacion, string titulo):
    Documento(numAutores),
    titulo(titulo){
    this->publicacion = publicacion;
}
string Libro::obtenerReferencia()
{
    return Documento::obtenerReferencia() +
            titulo + ", " +
            this->publicacion + ", " +
            to_string(paginas) + " pags. \n";
}
