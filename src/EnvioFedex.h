#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "TipoEnvio.h"

using namespace std;

class EnvioFedex : public TipoEnvio{

    int base = 35.00;

    public:
    EnvioFedex(int peso, float kilometros);

    virtual float CalculoEnvio();    

};


#endif