#include <iostream>
using namespace std;

int main() {
  
  int n, m;
  int p, q;

  cin >> n >> m;
  int area[n][m];

  for(int i=0; i < n; i++){

    for(int j=0; i < j; j++){
        cout << "Insira para a posicao " << i << " " << j <<  endl;
        cin >> area[i][j];
    }
  }  

  return 0;
}