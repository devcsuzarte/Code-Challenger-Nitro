#include <iostream>
using namespace std;

int main() {
  
  int n, k, r;
  
  cin >> n >> k;

  int rotulos[k] = {};

  for(int i=0; i < n; i++){
      cin >> r;
      ++rotulos[r-1];
  }

  int indexMenor = 0;

  for(int i=1; i < k; i++){
      
      if(rotulos[i] < rotulos[indexMenor]){
        indexMenor = i;
      }
  }

  cout << rotulos[indexMenor] << endl;


  return 0;
}

// é preciso enviar um envelope 
// contendo um rótulo de cada tipo de bala que a SBC produz

// dada a lista de rotulos
// nº máx de envelopes validos pra enviar

// 1-CIN >> N (rotulos) << K (quantidades de Tipos)
// 