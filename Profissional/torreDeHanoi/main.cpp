#include <iostream>
using namespace std;

int hanoi(int n, int origem, int mov, int destino, int temp){


    if(n == 1){
        return mov;
    }else{
      cout << "a" << endl;

        if(origem != 1){
            hanoi(--n, --origem, ++mov, destino, ++temp);
        
        }

        if(origem == 1){
            hanoi(--n, --origem, ++mov, ++destino, temp);
            
        }

        if(origem == 0 && temp != 0){
            hanoi(--n, origem, ++mov, ++destino, --temp);
           
        }
        
            
        }
    }



int main() {

    int n;
    cin >> n;

   cout << hanoi(4, 1, 0, 0, 0);

  return 0;
}