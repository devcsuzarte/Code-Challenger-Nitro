#include <iostream>
using namespace std;

int main() {
  int c, t;

  cin >> c >> t;

  int circulos[c];
  int tiros[t];

  for(int i=0; i < c; i++){
    cin >> circulos[i];
  }
  for(int i=0; i < t; i++){
    cin >> tiros[i];
  }

  
  return 0;
}