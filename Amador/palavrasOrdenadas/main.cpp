#include <iostream>
#include <string>
using namespace std;

int main() {
  int p;
  string word;

  cin >> p;


   for(int j=0; j < p; j++){

      cin >> word;
      bool isOrder = false;

  if(word.length() == 1){
    cout << word << ": O" << endl;
  } else {

     for(int i=0; i < word.length() - 1; i++){

        if(int(word[i]) < 97 && int(word[i+1]) > 96){
            if(int(word[i+1]) > (int(word[i]) + 32)){
                isOrder = true;
            } else{
                isOrder = false;
                break;
            }
        }

        if(int(word[i+1]) < 97 && int(word[i]) > 96){
            if((int(word[i+1]) + 32) > int(word[i])){
                isOrder = true;
            } else{
                isOrder = false;
                break;
            }
        }

        if((int(word[i]) < 97 && int(word[i+1]) < 97) || (int(word[i]) >= 97 && int(word[i+1]) >= 97)){
            if(int(word[i]) < int(word[i+1])){
                isOrder = true;
            } else{
                isOrder = false;
                break;
            }
        }
    }

    if(isOrder){
        cout << word << ": O" << endl;
    } else{
        cout << word << ": N" << endl;
    }
  }
}
  
  return 0;
}



        // verifica se a atual é maíuscula e proxima minuscula
            // se sim atual-32 > prox