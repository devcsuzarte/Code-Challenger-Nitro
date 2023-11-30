#include <iostream>
#include <string>


using namespace std;

int main(){

string n;
  
  while(cin >> n && n != "0"){

    int sumPar = 0;
    int sumImp = 0;

    for(int i=0; i < n.length(); i++){

        

            if((i+1)%2 == 0){
                sumPar = sumPar + (n[i] - '0');
            } else {
                sumImp = sumImp + (n[i] - '0');
            }
              
    }

    if(((sumPar - sumImp) % 11) == 0 || (sumPar - sumImp) == 0){
        cout << n <<  " is a multiple of 11." << endl;

    } else {
        cout << n << " is not a multiple of 11." << endl;
    }
    
  }

  return 0;
}


// inicio o loop e se n for != de 0 eu continuo

// rodo um FOR e somo a posição impar e a posição par de cada algarimos

// SE (somaAP - somaAI) % 11 || somaAP - somaAI) == 0
    // É DIVISIVEL

// SE N
    // Ñ É DIV


// foi necessario usar string para contabilizar os caracteres e aplicar a regra do 11