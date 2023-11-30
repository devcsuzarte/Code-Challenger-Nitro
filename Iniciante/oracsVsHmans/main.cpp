#include <iostream>
using namespace std;

int main() {
  
  char battleArena[10][10];
  int countH = 0, countO = 0;
  int countMH = 0, countMO = 0;
  bool magoO = false;
  bool magoH = false;

    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){

            cin >> battleArena[i][j];
        
        }
    }


    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){

            // contagem sem mago


            if((j < 5) && battleArena[i][j] != '*'){
                ++countO;
            }

            if((j > 4) && battleArena[i][j] != '*'){
                ++countH;
            }

            // contagem com mago

            if(j < 5){
                if(battleArena[i][j] == 'm'){
                    magoO = true;
                }
                if(battleArena[i][j] != '*'){
                    ++countMO;

                    if(i != 0 && battleArena[i-1][j] != '*'){
                    ++countMO;
                    }
                    if(i != 9 && battleArena[i+1][j] != '*'){
                        ++countMO;
                    }
                    if(j != 0 && battleArena[i][j-1] != '*'){
                        ++countMO;
                    }
                    if(j != 9 && battleArena[i][j+1] != '*'){
                        if(j+1 < 5){
                            ++countMO;
                        }
                    }
                }
                
            }

            if(j > 4){
                if(battleArena[i][j] == 'm'){
                    magoH = true;
                }
                if(battleArena[i][j] != '*'){
                    ++countMH;

                    if(i != 0 && battleArena[i-1][j] != '*'){
                    ++countMH;
                    }
                    if(i != 9 && battleArena[i+1][j] != '*'){
                        ++countMH;
                    }

                    if(j != 0 && battleArena[i][j-1] != '*'){
                        if(j-1 > 4){
                            ++countMH;
                        }
                        
                    }
                    if(j != 9 && battleArena[i][j+1] != '*'){
                        ++countMH;
                    }
                }
                
            }

        
        }
    }



        if(magoO){
            countO = countMO;
        }

        if(magoH){
            countH = countMH;
        }

        if(countO == countH){
            cout << "Batalha lendária!" << endl;
        } else if (countO > countH) {
            cout << "Loktar Ogar!!!" << endl;
        } else {
            cout << "Pela aliança!" << endl;
        }



  return 0;
}