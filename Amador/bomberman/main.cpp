#include <iostream>
using namespace std;

int main() {
  
  int h, w, s;
  cin >> h >> w;

  char scenario[h][w];

  for(int i=0; i < h; i++){
    for(int j=0; j < h; j++){
      cin >> scenario[i][j];
    }
  }

  for(int i=0; i < h; i++){
    for(int j=0; j < h; j++){

        switch (scenario[i][j])
        {
    
        case 'c':

            if(i-1 > 0){}
            
            break;
        case 'b':
            
            break;
        case 'e':
            
            break;
        case 'd':
            
            break;
        
        default:
            break;
        }
      
    }
  }
  return 0;
}


// H E W determinao o tamanho da matrix

// H - linhas 

// o’ (A letra O, de ovelha) - Sinaliza um espaço vazio no cenário; 
//‘x’ (Um xis) - Sinaliza uma das paredes do cenário; 
//‘c’ (cima) - Um monstro indo para cima; 
//‘b’ (baixo) - Um monstro indo para baixo; 
//‘e’ (esquerda) - Um monstro indo para esquerda; 
//‘d’ (direita) - Um monstro indo para direita.