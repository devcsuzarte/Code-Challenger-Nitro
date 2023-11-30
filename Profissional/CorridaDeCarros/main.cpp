#include <iostream>
using namespace std;


int main() {

    int n, m;
    
    cin >> n >> m;

    struct {
      int sumLaps;
      int carNum;

    } carLaps[n];

    for(int i=0; i < n; i++){
        int totalLap = 0;
        carLaps[i].carNum = i;

        for(int j=0; j < m; j++){
            
            int getLap;
            cin >> getLap;

            totalLap = totalLap + getLap;

          
        }

        carLaps[i].sumLaps = totalLap;
    }

    
    // ordernacao
        int podium[n];

    for(int i=0; i < n; i++){

        if(carLaps[i].sumLaps > 0){

            int minorIndex = i;

        for(int j = i+1; j < n; j++){

            if(carLaps[j].sumLaps < carLaps[minorIndex].sumLaps && carLaps[j].sumLaps > 0){
                minorIndex = j;
            }

        }

        if(minorIndex != i){
            
            swap(carLaps[i], carLaps[minorIndex]);
            
        }


        } 
    }

    
    for(int i=0; i<3; i++){

        cout << carLaps[i].carNum + 1 << endl;
    }



    return 0;
}