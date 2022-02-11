#include "kuramoto.h"
#include <vector>
using namespace std::complex_literals;

static int N;  //numero di oscillatori
static double K; //parametro di accoppiamento

//definire i parametri di campo medio
void Oscillator::MeanField() {

std::vector<Oscillator> System(N); //insieme degli oscillatori
double COS;
double SIN;
for(int i=0; i<=N; ++i){
    COS += std::cos(System[i].theta_);  //COS è la somma di tutti i coseni di theta_i
    SIN += std::cos(System[i].theta_);  //stesso per SIN
}
double X = COS/N;
double Y = SIN/N;           //possiamo vedere la somma dei fasori come COS/N + i*SIN/N = X + iY. Da qui lo riportiamo in exp
double r = std::sqrt(X*X + Y*Y);   
double psi = std::atan(Y/X);        //non è così semplice calcolare la fase, non so se esiste qualche funzione che considera i vari casi possibili
std::complex<double> MF = std::polar(r, psi);  //polar costruisce un exp complesso, MF sta per mean field non per Matteo Falcioni

}

void Oscillator::Gen(){  //funzione che genera le fasi secondo una distribuzione uniforme [giusto assumerla uniforme?] e le frequenze tramite g(w) 

}
