#include <iostream>
#include <string>

using namespace std;

//aaab

string valide(string nome){

  int l = nome.length(); // 4
  int n = 1;
  bool isValid = false; 

  if( l == 1 ){
    return "INVALIDO";
  } else {

    while(n <= (l/2)){

      for(int i=0; i<l-n; i++){

              if(nome[i] == nome[i+n]){
                  cout << "ola" << endl;
                  isValid = true;
              } else {
                cout << "oi" << endl;
                isValid = false;
              }
          }

          if(isValid){
            return "VALIDO";
          } else {
            return "INVALID";
          }

          cout << "------" << endl;
          n++;

    }
  }


  
  

  cout << l << endl;

}

int main() {
  
  string nome = "abcabcabc";

  cout << valide(nome) << endl;


  return 0;
}