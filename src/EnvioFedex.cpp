#include "EnvioFedex.h"

using namespace std;

EnvioFedex::EnvioFedex(int peso, float kilometros){
    this->peso = peso;
    this->kilometros = kilometros;
}

float EnvioFedex::CalculoEnvio(){
    if(kilometros>500){
        base = base + 15.00;
    }
    if(peso>10){
        base = base + 10.00;
    }

    return base;
}