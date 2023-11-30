#include <iostream>
using namespace std;


int queueOut(int n, int m, int initFila[]){
    
    int outFila[m];
    initFila[n];


       for(int s=0; s < m; s++){
        int saiu = 0;
        cin >> saiu;

        for(int i=0; i < n; i++){
            if(saiu == initFila[i]){
                initFila[i] = -1;
            }
        }  
    }

        for(int i=0; i < n; i++){
            if(initFila[i] != -1){
                cout << initFila[i] << " ";
            } 
        }

    cout << endl;
}


int main() {

int n, m;

cin >> n;
int inFila[n];


for(int i=0; i < n; i++){
        cin >> inFila[i];
    }

cin >> m;
int outFila[n];


queueOut(n, m, inFila);

    return 0;
}