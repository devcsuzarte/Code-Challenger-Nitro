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
    for(int j=0; j < 5; j++){

             if(battleArena[i][j] == 'o' || battleArena[i][j] == 'm'){
                counterO++;
                counterOM++;
            }
             if((battleArena[i][j-1] == 'o' || battleArena[i][j-1] == 'm') && (j-1) < 5){
                
                counterOM++;
            }
            if((battleArena[i][j+1] == 'o' || battleArena[i][j+1] == 'm') && (j+1) < 5){
                
                counterOM++;
            }
            if((battleArena[i-1][j] == 'o' || battleArena[i-1][j] == 'm') && (i-1) < 5){
                
                counterOM++;
            }
            if((battleArena[i+1][j] == 'o' || battleArena[i+1][j] == 'm') && (i+1) < 5){
                
                counterOM++;
            }
             if(battleArena[i][j] == 'm'){
                magoO = true;
            }


    } 
 }


for(int i=5; i < 10; i++){
    for(int j=5; j < 10; j++){

        if(battleArena[i][j] == 'h' || battleArena[i][j] == 'm'){
                counterH++;
                counterHM++;
            }
             if((battleArena[i][j-1] == 'h' || battleArena[i][j-1] == 'm') && (j-1) > 4){
                
                counterHM++;
            }
            if(battleArena[i][j+1] == 'h' || battleArena[i][j+1] == 'm' && (j+1) > 4){
                
                counterHM++;
            }
            if(battleArena[i-1][j] == 'h' || battleArena[i-1][j] == 'm' && (i-1) > 4){
                
                counterHM++;
            }
            if(battleArena[i+1][j] == 'h' || battleArena[i+1][j] == 'm' && (i+1) > 4){
                
                counterHM++;
            }
             if(battleArena[i][j] == 'm'){
                magoH = true;
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