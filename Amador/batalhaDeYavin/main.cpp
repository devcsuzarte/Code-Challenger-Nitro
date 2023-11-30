#include <iostream>
using namespace std;

int main() {
  int n, m;
  int l, c;
  cin >> n >> m;

  int arena[n][n];

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin >> arena[i][j];
    }
  }

int destroyed = 0;

 for(int i=0; i<m; i++){

    cin >> l >> c;

    if(arena[l-1][c] == 1){
      arena[l-1][c] = 0;
      ++destroyed;


    } else {

      for(int d = l-2; d >= 0; d--){
        if(arena[d][c] == 1){
          arena[d][c] = 0;
          ++destroyed;
          break;
        }
      }
    }

 }

cout << destroyed << endl;


  return 0;
}