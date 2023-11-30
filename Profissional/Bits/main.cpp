#include <iostream>
using namespace std;

int main() {


    int v;
    int n=0;

    while(cin >> v && v > 0){
        int i=0, j=0, k=0, l=0;

        while(v > 0){

        if(v >= 50){

            i = v / 50;  
            v = v % 50;

        }else if(v >= 10 && v < 50){ 

            j = v / 10;  
            v = v % 10;

        }else if(v >= 5 && v < 10){ 

            k = v / 5;  
            v = v % 5;

        }else if(v >= 1 && v < 5){ 

            l = v / 1;  
            v = v % 1;

            } else {
                v = 0;
            }

        }

        cout << "Teste " << ++n << endl;
        cout << i  << " " << j << " " << k << " " << l << " " << endl;
        cout << " " << endl;

    }
  return 0;
}