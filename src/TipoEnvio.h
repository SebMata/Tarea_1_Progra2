#ifndef TIPOENVIO_H
#define TIPOENVIO_H

using namespace std;

class TipoEnvio{
    protected:
    int peso;
    float kilometros;

    public:
    virtual float CalculoEnvio() = 0;
};

#endif
