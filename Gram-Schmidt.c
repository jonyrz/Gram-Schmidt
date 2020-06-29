#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double a[3][3] = {
    {1, 2, 1},
    {0, 1, 3},
    {1, 0, 2}
};

double x[3][3], y[3][3];

int main(int argc, char *argv[]){
    int k, i, j;
    
    cout << "\t\t Gram-Schmidt \n ";
    cout << "Rendon Zamora Jonathan Omar - Rivera Elizalde Jose Antonio \n ";
   
    for (k=0; k<3; k++){
        x[k][k]=0; 
          for (i=0; i<3; i++)
            x[k][k] = x[k][k] + a[i][k] * a[i][k]; 
              x[k][k] = sqrt(x[k][k]);  
 
          for (i=0; i<3; i++){
            y[i][k] = a[i][k]/x[k][k];
            cout << "\n\t\ta"<<i<<k<<": "<<y[i][k] << " ";
          }
    
          for(j=k+1; j<3; j++){
            x[k][j]=0;
            for(i=0; i<3; i++) x[k][j] += y[i][k] * a[i][j];

        for (i=0; i<3; i++) a[i][j] = a[i][j] - x[k][j]*y[i][k];
        }
    }
    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}