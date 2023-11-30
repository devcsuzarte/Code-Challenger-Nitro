#include <iostream>
using namespace std;

int main() {
  
  long fX0, fY0, fX1, fY1, sX0, sY0, sX1, sY1;
  bool colides = true;

  cin >> fX0 >> fY0 >> fX1 >> fY1;
  cin >> sX0 >> sY0 >> sX1 >> sY1;
  

  if(sX0 > fX0 && sX1 > fX0){colides = false;}
  if(sY0 > fY0 && sY1 > fY0){colides = false;}
  if(sX1 > fX1 && sX0 > fX1){colides = false;}
  if(sY1 > fY1 && sY0 > fY1){colides = false;}
     
     
    if(colides){

    cout << 0 << endl;

  } else {

    cout << 1 << endl;
    
  }

  return 0;
}


  // if(
  //   (sX0 > fX0 && sX1 > fX0) &&
  //   (sY0 > fY0 && sY1 > fY0) &&
  //   (sX1 > fX1 && sX0 > fX1) &&
  //   (sY1 > fY1 && sY0 > fY1)
  // ) {
  //   cout << 0 << endl;
  // } else {