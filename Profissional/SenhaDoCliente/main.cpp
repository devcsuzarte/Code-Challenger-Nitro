#include <iostream>
using namespace std;


int descript(int a, int b, int x, int y){
            if(a == x && b != y){
        return a;
    } else if(a == y && b != x){
        return a;

    } else if(b == x && a != y){
        return b;
        
    } else if(b == y && a != x){
        return b;
        
    } else{
        return -1;
    }
}




int main() {

  int n;
  int test = 0;


  while(cin >> n && n > 0){
    
    int getPassword[10];
    int passwordCheck[12];
    int passwordInput[12];
    int password[6] = {-1, -1, -1, -1, -1, -1};
    char charPass;

    for(int v=0; v<n; v++){


    for(int i=0; i < 10; i++){

        cin >> getPassword[i];
    }
    

    for(int i=0; i < 12; i = i + 2){

        cin >> charPass;


        switch (charPass){
                case 'A':

                    if (v == 0){
                        passwordCheck[i] = getPassword[0];
                        passwordCheck[i+1] = getPassword[1];

                    } 
                    
                    if (v > 0) {
                        passwordInput[i] = getPassword[0];
                        passwordInput[i+1] = getPassword[1];

                    }
                    
                    
                
                    break;
                case 'B':

                    if (v == 0){
                        passwordCheck[i] = getPassword[2];
                        passwordCheck[i+1] = getPassword[3];
                    } 
                    
                    if (v > 0) {
                        passwordInput[i] = getPassword[2];
                        passwordInput[i+1] = getPassword[3];

                    }
                    
                    break;

                case 'C':

                    if (v == 0){
                        passwordCheck[i] = getPassword[4];
                        passwordCheck[i+1] = getPassword[5];
                    } 
                    if (v > 0) {
                        passwordInput[i] = getPassword[4];
                        passwordInput[i+1] = getPassword[5];

                    }

                    break;

                case 'D':
                
                    if (v == 0){
                        passwordCheck[i] = getPassword[6];
                        passwordCheck[i+1] = getPassword[7];
                    } 
                    
                    if (v > 0) {
                        passwordInput[i] = getPassword[6];
                        passwordInput[i+1] = getPassword[7];

                    }
                                 
                    break;

                case 'E':


                    if (v == 0){
                        passwordCheck[i] = getPassword[8];
                        passwordCheck[i+1] = getPassword[9];
                    } 
                    if (v > 0) {
                        passwordInput[i] = getPassword[8];
                        passwordInput[i+1] = getPassword[9];

                    }
                    
                    break;
                
                default:
                    break;
                }

    }

      if(v > 0){

        int p = 0;

        for(int i=0; i < 12; i = i + 2){

          if(password[p] == -1){

            password[p] = descript(passwordCheck[i], passwordCheck[i+1], passwordInput[i], passwordInput[i+1]);
          }
          p++;
      
        }

      }

    }
    

    cout << "Teste " << ++test << endl;

    for(int i: password){

          cout << i << " ";
    
          }
      cout << endl;
      cout << " " << endl;

  }

  
  return 0;
}
