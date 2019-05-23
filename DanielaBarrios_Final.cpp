#include <iostream>
#include <fstream>
#include <cmath>

using namespace std; 

int main(){
    
    float m = 7294.29;
    float q = 2;
    float omega=1.0;
   
    return 0; 
}
void leapfrog (float t0, float tf, float dt, float m, float q, string datos){

  float t0=0.0;
  float x=1.0;
  float y=0.0;
  float tf=10.0;
  float dt=0.1;
  float x0= 1.0;
  float y0 = 0.0;
    
    
  ofstream outfile;
  outfile.open(datos.dat);
    
   
      if(tf<3){
          cout<<"E=0";
      }
      if (3>tf>7){
          cout<<"E=(0,3)";
      }
  
    
  while(t0<tf){ 
      
    outfile << t0 << " " << x << " " << y << endl;
    x = m + 0.5 * dt * q;
    y  = q + dt * (-q * dt * m);
    t0 = t0 + dt;
      
     
  outfile.close();
}
