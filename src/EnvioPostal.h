#ifndef ENVIOPOSTAL_H
#define ENVIOPOSTAL_H

#include "TipoEnvio.h"

using namespace std;

class EnvioPostal : public TipoEnvio{
    int clase;

    public:
    EnvioPostal(int peso, float kilometros, int clase);

    virtual float CalculoEnvio();

};

#endif