#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;
  

  struct {
    int nota;
    int repeticao = 1;
    bool verificado = false;
  } alunos[n];

  for (int i=0; i < n; i++){

    cin >> alunos[i].nota;
  }

  
  for (int i=0; i < n; i++){
    if(alunos[i].verificado == false){
      alunos[i].verificado = true;
        for(int j=1; j < n; j++){
            if(alunos[i].nota == alunos[j].nota && alunos[j].verificado == false){
        
                ++alunos[i].repeticao;
                alunos[j].verificado = true;
                

            }
        }
   
    }
  }

int maisRep = 0;
  for(int i=1; i < n; i++){
 

    if(alunos[i].repeticao != 0){

      if(alunos[i].repeticao > alunos[maisRep].repeticao){
        maisRep = i;
      }

      if (alunos[i].repeticao == alunos[maisRep].repeticao){
        if (alunos[i].nota > alunos[maisRep].nota){
          maisRep = i;
        } else{

        }
      }
    }
  }

 
   
  cout << alunos[maisRep].nota << endl;


  return 0;
}
