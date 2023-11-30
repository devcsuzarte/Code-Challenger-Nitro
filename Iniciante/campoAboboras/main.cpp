#include <iostream>
using namespace std;

int main() {
  int n, x, y;
  cin >> n;

  int campo[n][n];

  for(int i=0; i < n; i++){
    for(int j=0; j < n; j++){
      cin >> campo[i][j];
    }
  }


  cin >> x >> y; 


  int counterRon = 0;
  int counterHarry = 0;

  //cout << campo[y][x] << endl;
  for(int i=0; i < n; i++){
    
     counterRon = counterRon + campo[i][y];
     campo[i][y] = 0;
     counterHarry = counterHarry + campo[x][i];
     campo[x][i] = 0;
    
  }


  cout << "Harry " << counterHarry << endl;
  cout << "Ron " << counterRon << endl;
  return 0;
}



// percorrer a coluna
// percorrer a linha