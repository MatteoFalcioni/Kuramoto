#include "kuramoto.h"
#include <vector>

static int N;

//definire i parametri di campo medio

void Oscillator::MeanField() {

std::vector<Oscillator> System(N); //insieme degli oscillatori

for(int i=0; i<=N; ++i){
    std::complex<double> X = 0;
    X += System[i].phasor;  //X è la somma di tutti gli esponenziali con fase theta_i
}

}
