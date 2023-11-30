#include <iostream>
using namespace std;

int main() {
 char battleArena[10][10];   
 int counterH = 0, counterHM = 0;
 int counterO = 0, counterOM = 0;
 bool magoH = false, magoO = false;

 for(int i=0; i < 10; i++){
    for(int j=0; j < 10; j++){
        cin >> battleArena[i][j];
    }
 }


 for(int i=0; i < 10; i++){
    for(int j=0; j < 10; j++){

          if(j < 5){

            if(battleArena[i][j] == 'o' || battleArena[i][j] == 'm'){
                counterO++;
                counterOM++;
            }

            if(j-1 > 0 && (battleArena[i][j-1] == 'o' || battleArena[i][j-1] == 'm')){
                
                counterOM++;
            }

            if(j+1 < 4 && (battleArena[i][j+1] == 'o' || battleArena[i][j+1] == 'm')){
                
                counterOM++;
            }

            if(i+1 > 0 && (battleArena[i-1][j] == 'o' || battleArena[i-1][j] == 'm')){
                
                counterOM++;
            }

            if(i+1 < 4 && (battleArena[i+1][j] == 'o' || battleArena[i+1][j] == 'm')){
                
                counterOM++;
            }

            if(battleArena[i][j] == 'm'){
                magoO = true;
            }



          } else {

            if(battleArena[i][j] == 'h' || battleArena[i][j] == 'm'){
                counterH++;
                counterHM++;
            }

            if(j > 5 && (battleArena[i][j-1] == 'h' || battleArena[i][j-1] == 'm')){
                
                counterHM++;
            }

            if(j < 9 && (battleArena[i][j+1] == 'h' || battleArena[i][j+1] == 'm')){
                
                counterHM++;
            }

            if(i > 5 && (battleArena[i-1][j] == 'h' || battleArena[i-1][j] == 'm')){
                
                counterHM++;
            }

            if(i < 9 && (battleArena[i+1][j] == 'h' || battleArena[i+1][j] == 'm')){
                
                counterHM++;
            }

            if(battleArena[i][j] == 'm'){
                magoH = true;
            }

          }


    } 
 }


//  if(magoO){
//    counterO = counterOM;
//  } 

//  if(magoH){
//    counterH = counterHM;
//  }


    cout << counterO << " - " << counterH << endl;
    cout << counterOM << " - " << counterHM << endl;



  return 0;
}