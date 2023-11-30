#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string p1Name, p2Name;
    int p1Number, p2Number;
    int n, pCount = 0;

    while(cin >> n &&  n != 0){

        cin >> p1Name;
        cin >> p2Name;


        cout << "Teste " << ++pCount << endl;

        for(int i=0; i < n; i++){
        cin >> p1Number >> p2Number;

            

        if((p1Number + p2Number) % 2 == 0){
            cout << p1Name << endl;
        } else{
            cout << p2Name << endl;
        }
        }


    }
    
  
  return 0;
}


// nome dos jogadores 
// nº que escolheram

// 1-CIN >> int n | nº de partidas
// 2/3-CIN >> string nomeDoJogador
// N-CIN >> A - B >> numero de dedos 
// 0 pra finalizar

// Teste n
// vencedor da partida

// inicia loop while recebendo numero de jogadas
// recebe nome dos jogadores
// mostra o contagem do teste
// inicio o for recebendo as jogadas
// divide a soma jogada1 mais jogada2 e verifica de o resto da divisão é igual a 0
// se resto = 0 joagador 1 vence
  // se não jogador 2 vence


