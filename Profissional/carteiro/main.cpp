#include <iostream>
using namespace std;

int carteiro(int n, int m, int cartas[], long casas[], int time){

    int lastIndex = 0;

    for(int i=0; i < m; i++){

        if(cartas[i] >= casas[lastIndex]){
            for(lastIndex; lastIndex < n; lastIndex++){
                
                if(cartas[i] == casas[lastIndex]){
                    break;
                } else{
                    ++time;
                }

            }
        } else {

            for(lastIndex; lastIndex >= 0; lastIndex--){
                
                if(cartas[i] == casas[lastIndex]){
                    break;
                } else{
                    ++time;
                }

            }

        }
        
          
  }

  return time;

    
}

int main() {
  int n, m;
  int time = 0;

  cin >> n >> m;
  long casas[n];
  int cartas[m];

  for(int i=0; i < n; i++){
    cin >> casas[i];
  }
  
  for(int i=0; i < m; i++){
    cin >> cartas[i];
  }

  cout << carteiro(n, m, cartas, casas, 0) << endl;
  return 0;
}


