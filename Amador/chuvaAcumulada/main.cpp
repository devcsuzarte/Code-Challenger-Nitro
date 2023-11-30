#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int mapa1[n][n];
  int mapa2[n][n];

  for(int i=0; i < n; i++){
    for(int j=0; j < n; j++){
           cin >> mapa1[i][j];
    }

  }

  for(int i=0; i < n; i++){
    for(int j=0; j < n; j++){
            cin >> mapa2[i][j];
    }

  }

  for(int i=0; i < n; i++){
    for(int j=0; j < n; j++){
           cout <<  mapa1[i][j] + mapa2[i][j] << " ";
    }

    cout << endl;

  }


  return 0;
}