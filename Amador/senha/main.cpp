#include <iostream>
#include <string>

using namespace std;

string passwordCheck(string inputPass, int n, int m, int a, int k){

  int c = inputPass.length();
 
  int mn=0, ma=0, nu=0;  
    if(c < n){

        return "Ufa :)";

    } else{

        for(int i=0; i < inputPass.length(); i++) {

        if(int(inputPass[i]) >= 48 && int(inputPass[i] <= 57)){
            ++nu;
        } else if(int(inputPass[i]) >= 65 && int(inputPass[i] <= 90)){
            ++ma;
        } else if(int(inputPass[i]) >= 97 && int(inputPass[i] <= 122)){
            ++mn;
        }
    }

     if( mn >= m && ma >= a && nu >= k ) {
        return "Ok =/";
    } else{
        return "Ufa :)";
    }
  }
 
}



int main() {

  string senha;
  int n, m, a, k;

  

  cin >> n >> m >> a >> k;

  cin >> senha;

  cout << passwordCheck(senha, n, m, a, k);
  return 0;
}