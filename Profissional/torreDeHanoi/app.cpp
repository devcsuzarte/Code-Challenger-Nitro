#include <iostream>
using namespace std;

int hanoi(int n) {

    if(n == 1){
        return 1;
    } else {
        return (2 * hanoi(n-1))+1;
    }



}

int main() {

    int n, testeCount =0;
    
    while(cin >> n && n != 0){

        cout << "Teste " << ++testeCount << endl;
        cout << hanoi(n) << endl;
        cout << endl;

    }
    
   
  return 0;
}