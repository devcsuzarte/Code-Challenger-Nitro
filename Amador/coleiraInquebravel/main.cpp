#include <iostream>
#include <cmath>


using namespace std;

int main() {
  
  int n, m;
  int x = 0, y = 0;
  char direcao;
  bool seAfastou = false;

  cin >> n >> m;

  for(int i=0; i < n; i++){
      int deslocameto = 0;
      cin >> direcao >> deslocameto;
    
        if(direcao == 'N'){
          y = y + deslocameto;
        } else if (direcao == 'S'){
          y = y - deslocameto;
        }else if (direcao == 'L'){
          x = x + deslocameto;
        }else if (direcao == 'O'){
          x = x - deslocameto;
        }

      int result = x * x + y * y;
      if(sqrt(result) > m){
        seAfastou = true;
      }

  }

  
  cout << seAfastou << endl;

  
  return 0;
}