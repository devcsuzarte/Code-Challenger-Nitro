#include <iostream>
#include <cstring>

using namespace std;

int main() {
  
  string fraseCodificada;

  cin.ignore();
  getline(cin, fraseCodificada);

  for(int i=0; i < fraseCodificada.length(); i++) {
        
        if((fraseCodificada[i] != 'p') || (fraseCodificada[i + 1] != 'p' && fraseCodificada[i - 1] == 'p')) {
            cout << fraseCodificada[i];
        }
  }

  cout << endl;
  return 0;
}