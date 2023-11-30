#include <iostream>
using namespace std;

int main() {
  
    int n, x1, x2, y1, y2;
    int dx, dy;
    int insc = 0;

    cin >> n;

    for(int i=0; i < n; i++){

        cin >> x1 >> y1 >> x2 >> y2;

        dx = x2-x1;
        dy = y2-y1;

        insc = ((dx*dx) + (dy*dy)) + insc;
        
    }

    cout << insc << endl;


  return 0;
}


  // recebo os valores REAL -> x1 y1 / x2 y2 <- TENTATIVA

  // calculo o dx = (x1-x2) o dy = (y1-y2)
  
  // calcula a soma
    // soma = ((dx + dy) * (dx + dy)) + soma



    // FIM do LOOP

    // mostra a soma