#include <iostream>
using namespace std;

int main() {
  
  int n;
  int sumFood=0;

  cin >> n;

  char pacmanArena[n][n];

    for(int i=0; i < n; i++){
      for(int j=0; j < n; j++){

        cin >> pacmanArena[i][j];

      }
    }

    for(int i=0; i < n; i++){

      if(i % 2 == 0){      
          for(int j=0; j < n; j++){

            if(pacmanArena[i][j] == 'o'){
              ++sumFood;
            } 
            
            if(pacmanArena[i][j] == 'A'){
              sumFood = 0;
            }
            cout << pacmanArena[i][j];
              

        
          }

          cout << endl;
      } else{
          for(int j=n-1; j >= 0; --j){
            if(pacmanArena[i][j] == 'o'){
              ++sumFood;
            } 
            
            if(pacmanArena[i][j] == 'A'){
              sumFood = 0;
            }
            cout << pacmanArena[i][j];
              
          }
          cout << endl;
      } 
    }

    cout << sumFood << endl;

  return 0;
}