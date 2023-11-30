#include <iostream>
using namespace std;

int main() {
  
  int n, m;
  int sum = 0;

  cin >> n >> m;

  int valley[n][m];

  for(int i=0; i<n; i++){
    for (int j=0; j<m; j++){
        
        cin >> valley[i][j];
        
    } 
  }


  char ort;
  int pos;

  cin >> ort >> pos;

  if(ort == 'L'){
    for(int i=0; i<m; i++){
        sum = sum + valley[pos-1][i];
    }
  } else{
    for(int i=0; i<n; i++){
        sum = sum + valley[i][pos-1];
    }
  }

  cout << sum << endl;



  
  return 0;
}