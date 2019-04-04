#include <iostream>
#include <fstream>
#include <random>
#include <stdlib.h>
using namespace std;



int Nit = 10000;
int cont = 0;
double x = ((double) rand() / (RAND_MAX));
ofstream myfile;
double PI = 3.141592;



double distnormal(double x);


int main(){
myfile.open("MetHas.txt");
if (myfile.is_open())
    {   
    for(cont = 0;cont<Nit;cont++){
     
     double propuesta = x+ 2*((double) rand() / (RAND_MAX))-1;
     double F_actual=distnormal(x);
     double F_propuesta=distnormal(propuesta);
     
     
     double ratio = F_propuesta/F_actual;
     double newRand=((double) rand() / (RAND_MAX));
     if(newRand < ratio){
     x=propuesta;
     
     }
     
     myfile << x<<"\n";
     
    }
        
    }
myfile.close();

return 0;

}


double distnormal(double x){
return (1/sqrt(2*PI)) * exp(-pow(x,2)/2);
}

