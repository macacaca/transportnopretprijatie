#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    
    int N = 10;
   
    
    int kilometri[] = { 57, 22, 73, 45, 17, 61, 36, 82, 49, 6 };
    int gorivo[] = { 53, 90, 48, 12, 38, 19, 27, 67, 71, 85 };
     
    int vkKilometri = 0, vkGorivo = 0;
     
    int indexA = 0, indexB = kilometri[0];
   
    int indexC = 0;
    double indexD = (double)gorivo[0] / (double)kilometri[0];
   
    for(int i=0; i<N; i++) {
           
            if( i > 0 ) {
                if( kilometri[i] > indexB ) {
                    indexB = kilometri[i];
                    indexA = i;
                }
               
                double tmp = (double)gorivo[i] / (double)kilometri[i];
                if( tmp < indexD ) {
                    indexD = tmp;
                    indexC = i;
                }
            }
           
            vkKilometri += kilometri[i];
            vkGorivo += gorivo[i];
    }
   
    cout << "Vkupno pominati kilometri: " << vkKilometri << endl;
    cout << "Vkupno potroseno gorivo: " << vkGorivo << endl;
    cout << "Prosecno pominati kilometri: " << (float)vkKilometri / (float)N << endl;
    cout << "Prosecno potroseno gorivo po kilometar: " << (double)vkGorivo / (double)vkKilometri << endl;
    cout << "Kamionot so najmnogu pominati kilometri ima reden broj: " << indexA+1 << endl;
    cout << "Najekonomicniot kamion ima reden broj: " << indexC+1 << endl;
   
    return EXIT_SUCCESS;
}
