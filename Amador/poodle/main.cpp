#include <iostream>
#include <cmath>

using namespace std;

void poodle(float size){

size = ceil(size);

if(size > 6){
    //mostrra Poo

    cout << "Poo";
    // faz o loop e mostro os O's

    for(int i=0; i < size - 6; i++){
        if(i < 14){
            cout << "o";
        }   
    }
    cout << "dle" << endl;
} else {
    cout << "Poodle" << endl;
}



}

int main() {
  
  int n, p;
  cin >> n >> p;

  while(n != 0 && p != 0){

    float doc = float(n) / float(p);

    poodle(doc);
    

    
    cin >> n >> p;
  }

  
  return 0;
}