#include <iostream>
using namespace std;

int hanoi(int n, int orig, int dest, int temp, int mov) {

    if(n == 1){
        --orig;
        ++dest;
        ++mov;
        return mov;
    } else {

    
        if(orig != 0){
            hanoi(n, --orig, dest, ++temp, ++mov);
        }

        if(temp > 0){
            hanoi(--n, orig, ++dest, --temp, ++mov);
        }
    }



}

int main() {

    int n, testeCount =0;
    
    while(cin >> n && n != 0){

        cout << "Teste " << testeCount << endl;
        cout << hanoi(n, n, 0, 0, 0) << endl;

    }
    
   
  return 0;
}