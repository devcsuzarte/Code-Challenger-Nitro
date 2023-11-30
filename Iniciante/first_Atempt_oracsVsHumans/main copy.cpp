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
        if(battleArena[i][j] == 'o'){
            counterO++;
            counterOM++;

            if(battleArena[i][j-1] == 'o'){
                counterOM++;
            }
            if(battleArena[i][j+1] == 'o'){
                counterOM++;
            }
            if(battleArena[i-1][j] == 'o'){
                counterOM++;
            }
            if(battleArena[i+1][j] == 'o'){
                counterOM++;
            }
        }

        if(battleArena[i][j] == 'h'){
            counterH++;
            counterHM++;

             if(battleArena[i][j-1] == 'h'){
                counterHM++;
            }
            if(battleArena[i][j+1] == 'h'){
                counterHM++;
            }
            if(battleArena[i-1][j] == 'h'){
                counterHM++;
            }
            if(battleArena[i+1][j] == 'h'){
                counterHM++;
            }

        }

        if(battleArena[i][j] == 'm'){
            if(j < 4){
                magoO = true;
                counterO++;
                counterOM++;

                if(battleArena[i][j-1] == 'm'){
                    counterHM++;
                }
                if(battleArena[i][j+1] == 'm'){
                    counterHM++;
                }
                if(battleArena[i-1][j] == 'm'){
                    counterHM++;
                }
                if(battleArena[i+1][j] == 'm'){
                    counterHM++;
                }
            } else{
                magoH = true;
                counterH++;
                counterHM++;
                if(battleArena[i][j-1] == 'm'){
                    counterHM++;
                }
                if(battleArena[i][j+1] == 'm'){
                    counterHM++;
                }
                if(battleArena[i-1][j] == 'm'){
                    counterHM++;
                }
                if(battleArena[i+1][j] == 'm'){
                    counterHM++;
                }
            }
        }
    }
 }

 if(magoO){
   counterO = counterOM;
 } 

 if(magoH){
   counterH = counterHM;
 }


    if(counterH == counterO){
        cout << "Batalha lendaria!" << endl;
    } else if(counterH > counterO){
        cout << "Pela Alianca!" << endl;
    } else{
        cout << "Loktar Ogar!!!" << endl;
    }




  return 0;
}