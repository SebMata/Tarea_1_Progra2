#include "TipoEnvio.h"
#include "EnvioPostal.h"
#include "EnvioFedex.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<TipoEnvio *> envios;

    EnvioPostal* envio1 = new EnvioPostal(5,14,2);
    envios.push_back(envio1);

    EnvioPostal* envio3 = new EnvioPostal(10,54,1);
    envios.push_back(envio3);

    EnvioFedex* envio2 = new EnvioFedex(7,720);
    envios.push_back(envio2);

    double totalMontoEnvios = 0;

    for (TipoEnvio* TipoEnvio : envios)
    {
        totalMontoEnvios += TipoEnvio->CalculoEnvio();
    }

    cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;
     
}