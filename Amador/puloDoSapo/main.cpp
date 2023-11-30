#include <iostream>
using namespace std;

int main() {

   //atencao o sapo pode pula 0, 1 ou mais vezes.
  
  int numeroDePedras, numeroDeSapos, pedraInit, distPulo;

    cin >> numeroDePedras >> numeroDeSapos;
    int pedras[numeroDePedras] = {};

    for(int i=0; i < numeroDeSapos; i++){

        cin >> pedraInit >> distPulo;

        pedras[pedraInit-1] = 1;

        int frente = (pedraInit-1) + distPulo;
        int tras = (pedraInit-1) - distPulo;

            if(tras >= 0){
                pedras[tras] = 1;
            }
            
            if (frente < numeroDePedras){
                pedras[frente] = 1;
            }
    }

    for (int i : pedras){
        cout << i << endl;
    }
  return 0;

}




// numero de pedras
// numero de sapos
// pedra inicial
// distancia que o sapo pula

//  recebo np e ns

// crio o vetor com np posições

// crio um loop que roda até ns vezes
  // recebo posicaoInicial >> distanciaDoSalto


  // frente = posicaoInicial-1 + distancia;
  // tras = posicaoInicial-1 - distancia;

  // se  frent >= 0
       // arr[frente]= 1;
    // se nao se tras < numeroDEPedras
      // arr[tras]= 1;
     
  