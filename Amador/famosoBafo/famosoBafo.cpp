#include <iostream>
#include <string>

using namespace std;

int main() {
  
  int rodadas, a, b;
  int testes = 0;
  string vencedor;

  do {

    cin >> rodadas;
    int pontosA = 0, pontosB = 0;

    for(int i=0; i < rodadas; i++){
        cin >> a >> b;

        pontosA = pontosA + a;
        pontosB = pontosB + b;

    }

    if(pontosA > pontosB){
        vencedor = "Aldo";
    } else{
        vencedor = "Beto";
    }

    if(rodadas != 0) {

    cout << "Teste " << ++testes << endl;
    cout << vencedor << endl;
    cout << " " << endl;

    }

  } while(rodadas != 0); 

  return 0;
}