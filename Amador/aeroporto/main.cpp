#include <iostream>
using namespace std;

int main() {
  

  int a, v;
  int teste = 0;
  int arrv, dprt;

  

  while (cin >> a >> v && a != 0 && v != 0){
    int airport[a] = {};

    for(int i=0; i < v; i++){
      cin >> arrv >> dprt;
        ++airport[arrv-1];   
        ++airport[dprt-1];      
    }

    int indexOfMV = 0;
    // verifico o maior
    for(int i=1; i < a; i++) {
      if(airport[i] > airport[indexOfMV]){
        indexOfMV = i;
      }
    }

  // verifico se existe mais algum com número maior
  cout << "Teste " << ++teste <<endl;
  cout << indexOfMV + 1 << " ";

    for(int i = indexOfMV + 1; i < a; i++){
      if(airport[i] == airport[indexOfMV]){
        cout << i + 1 << " ";
      }
    }

    cout << " " << endl;
  }

  return 0;
}


// enqunado A e V != de 0 execute
// aeroporto recebe tamanho de A
// incio o loop que roda V vezes para pegar os voos
// A - D
// se a == A-1 || D-1
  // ++aeroporto[a-1]
  // ++aeroporto[d-1];

// Verificar qual que tem mais movimento




