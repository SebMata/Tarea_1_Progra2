#include "EnvioPostal.h"

using namespace std;

EnvioPostal::EnvioPostal(int peso, float kilometros, int clase){
    this->peso = peso;
    this->kilometros = kilometros;
    this->clase = clase;
}

float EnvioPostal::CalculoEnvio(){
    switch (clase){
        case 1:
            if (peso<=3){
                return kilometros * 0.300;
            }else if(peso<=8){
                return kilometros * 0.450;
            }else{
                return kilometros * 0.600;
            }
        case 2:
            if (peso<=3){
                return kilometros * 0.0280;
            }else if(peso<=8){
                return kilometros * 0.0530;
            }else{
                return kilometros * 0.0750;
            }
        case 3:
                return kilometros * 0.0120;
        default:
                return 0;        
            }  
}

