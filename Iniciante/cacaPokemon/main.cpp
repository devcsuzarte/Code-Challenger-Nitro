#include <iostream>
using namespace std;

int main() {
  
  int n, m;
  int area[n][m];
  int p, q;

  cin >> n >> m;

  for(int i=0; i < n; i++){

    for(int j=0; j < m; j++){
        cin >> area[i][j];
    }
  }  

    cin >> p;

  for(int i=0; i < n; i++){

    for(int j=0; i < m; j++){
        if(area[i][j] == p){
            q++;
        }
    }
  } 


  cout << q << endl;

  return 0;
}