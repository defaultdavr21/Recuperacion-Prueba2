#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main()
{
    cout << "= = PRUEBA 2 = =" << endl;
    cout << "Autor: Rodrigo Tufiño" << endl;

    Libro doc(2,"McGraw Hill", "C++ Programming: An Object-Oriented Approach");
    doc.agregarAutor("Forouza B.");
    doc.agregarAutor("Gilberg R.");
    doc.setPaginas(960);
    cout << doc.obtenerReferencia() << endl;
    Bibliografia b;
    b.agregarlibro();
    b.obtenerReferencia();

    /*Articulo art(5, "Intelligent Human Systems Integration 2021: Proceedings of the 4th International Conference on Intelligent Human Systems Integration (IHSI 2021)","Integrating People and Intelligent Systems");
    art.agregarAutor("Sebastián Valladares");
    art.agregarAutor("Mayerly Toscano");
    art.agregarAutor("Rodrigo Tufiño");
    art.agregarAutor("Paulina Morillo");
    art.agregarAutor("Diego Vallejo-Huanga");
    art.setJournal(false);
    cout << art.obtenerReferencia() << endl;*/

    return 0;
}
