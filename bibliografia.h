#ifndef BIBLIOGRAFIA_H
#define BIBLIOGRAFIA_H

#include "documento.h"
#include "libro.h"
#include "articulo.h"

class Bibliografia : public Documento{
private:
    vector <Documento> referencias;
public:
    Bibliografia();
    Bibliografia(const vector<Documento> &referenciass);
    bool agregarlibro();
    bool agregararticulo();
    void imprimirreferencia();
    const vector<Documento> &obtenerReferencia() const;


};

#endif // BIBLIOGRAFIA_H
