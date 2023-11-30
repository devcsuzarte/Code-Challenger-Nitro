#include <iostream>
#include <string>
using namespace std;


void order(string nomes[], int n){


    for(int i=0; i < n-1; i++){
        int indiceMenor = i;

        for(int j = i+1; j < n; j++){

            int indexWD = 0;

            while((int(nomes[indiceMenor][indexWD]) == int(nomes[j][indexWD]))
             && 
             (indexWD+1 < nomes[indiceMenor].length() && indexWD+1 < nomes[indiceMenor].length())){
                ++indexWD;
            }

                if(int(nomes[indiceMenor][indexWD]) > int(nomes[j][indexWD])){

                    indiceMenor = j;

                }
            }


            if(i != indiceMenor){
                swap(nomes[i], nomes[indiceMenor]);
            }
        }
    }

    



int main() {

    int n, p;

    cin >> n >> p;
    string nomes[n];

    for(int i=0; i < n; i++){

        cin >> nomes[i];
    }

    order(nomes, n);

    cout << nomes[p-1] << endl;

    /*for(string nome : nomes){
        cout << nome << endl;
    }*/

    return 0;
}


// criar funcao selection sort recebendo lista de nomes e quantidade de nomes

// crio varredura primaria e secundaria

// crio a variavel que vai guardar a posicao


 // ae primeira letra for !=
    // se primeira letra do nome da posicao varrida for > que primeira letra do nome da posicao analisada, salve como menor

// se nao
    /// enquanto palavra[i] == palavra2[i] && (conuter < lenght)

