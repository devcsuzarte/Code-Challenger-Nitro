#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {

    int palavrasTotal=0, palavrasCom=0;
    float percentual;
    bool achou = false;
  // input letra
    char letra;
    cin >> letra;

    

// input frase 
    string frase;
    cin.ignore();
    getline(cin, frase);


    for(int i=0; i < frase.length(); i++){

    // verificar a string
    // achou a letra ?
        // se sim true se não false
        if(frase[i] == letra){
            achou = true;
        }

    // houve espaço 
    //se sim contabilize uma palavra
    // achou a letra?
            // se sim contabilize a palavra com letra

        if((int(frase[i]) == 32) || i+1 == frase.length()){
            ++palavrasTotal;
                if(achou){
                    ++palavrasCom;
                }
                achou = false;
        }
        
    }
    
    percentual = float(palavrasCom) / float(palavrasTotal) * 100;

    cout << setprecision(1) << fixed << percentual;
  
 
  return 0;
}