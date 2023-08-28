#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int numeros1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int numeros2[]={16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int numeros3[]={31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
    
    int inf,sup,mitad,dato;
    char bandera='F';
    
    cout<<"Esciba el numero que desea buscar\n";
    cin>>dato;
    
    
    inf=0;
    sup=15;
    
    while(inf <= sup){
        mitad=(inf+sup)/2;
        
        if(numeros1[mitad] == dato||numeros2[mitad]== dato||numeros3[mitad]== dato){
            bandera = 'V';
            break;
        }
        
        if(numeros1[mitad]<dato||numeros2[mitad]<dato||numeros3[mitad]<dato){
            inf=mitad+1;
        }
        else{
            sup=mitad-1;
        }
        
         
    }
    
       if (bandera =='V'){
            cout<< "el numero ha sido encontrado en la posicion " << mitad+1;
        }
        else{
            cout<<"El numero no ha sido encontrado";
        }
    
    return 0;
}