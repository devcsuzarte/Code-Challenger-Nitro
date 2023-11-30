#include <iostream>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;
  int snakePath[n][m];
  int eggs = 0;

  // entrada na matriz
  for(int i=0; i < n; i++){
    for(int j=0; j < m; j++){
        cin >> snakePath[i][j];
     }
  }

  for(int i=0; i < n; i++){

    if(i == 0 || i % 2 == 0){      
        for(int j=0; j < m; j++){
            eggs = eggs + snakePath[i][j];
        }
    } else{
        for(int j=m-1; j >= 0; --j){
            eggs = eggs + snakePath[i][j];

            if(eggs < 0){
              eggs = 0;
            }
        }
    } 
  }

  cout << eggs << endl;


  return 0;
}