#include <iostream>

using namespace std;

int main() {
  
  long c, paineis = 0;
  char road;
  
  cin >> c;
 
    for(int i=0; i < c; i++){

        cin >> road;

        switch(road){

            case 'P':
                paineis = paineis + 2;
                break;
            case 'C':
                paineis = paineis + 2;
                break;
            case 'A':
                paineis = paineis + 1;
                break;
            case 'D':
                paineis = paineis;
                break;
            default:
                break;
            

        }
    }

    cout << paineis << endl;
    
  return 0;
}

// dado um mapa da auto estrada

// determinar quantos painéis deﬂetores são 
// necessários para cobrir toda a extensão dessa auto estrada

// P = 2 paineis 

// C = 2 paineis

// A = 1 painel

// D = 0 => nenhum painel instalado

// cada painel possuí 10 metros

// 1-IN => long c [comprimento da estrada]
// 2-IN => long {C caracteres} [defini o bloco da estrada]

// OUT => quantos paineis

// recebe c

// loop ate c
    // switch case
        // => P painel = painel + 2
        // => C painel = painel + 2
        // => A painel = painel + 1



