#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <string>
#include <vector>

using namespace std;


class Documento
{
private:
    vector <string> autores;
    int numAutores;
protected:
    string publicacion;
public:
    Documento();
    Documento(int numAutores);
    bool agregarAutor(string nombre);
    virtual string obtenerReferencia();
    const vector<string> &getAutores() const;
};

#endif // DOCUMENTO_H
