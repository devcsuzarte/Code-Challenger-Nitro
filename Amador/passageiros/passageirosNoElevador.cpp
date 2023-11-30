#include <iostream>
using namespace std;

int main() {
  
  int sensor, capacidade, saiu, entrou;
  int pessoasNoElevador = 0;
  bool excedeu = false;

  cin >> sensor >> capacidade;

  for(int i=0; i < sensor; i++){

    cin >> saiu >> entrou;

    pessoasNoElevador = (entrou - saiu) + pessoasNoElevador;

    if (pessoasNoElevador > capacidade) {

      excedeu = true;
    }
  }

  if(excedeu) {
    cout << "S" << endl;
  } else{
    cout << "N" << endl;
  }
  
  return 0;
}