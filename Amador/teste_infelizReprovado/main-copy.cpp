#include <iostream>
#include <string>

using namespace std;


int main() {

  int n, instancia = 0;
  int indexLess = 0;

  cin >> n;


  struct {
    string name;
    int points;
  } Student[n];  

    //ENTRADA
  for(int i=0; i<n; i++){
    cin >> Student[i].name >> Student[i].points;

    if(Student[i].points < Student[indexLess].points){
      indexLess = i;
    }
  }
  
  int indexReprove = indexLess;

  for(int i=0; i<n; i++){
    if(Student[i].points == Student[indexReprove].points && Student[i].name != Student[indexReprove].name){

      int c = 1;

      while(c < Student[i].name.length() && c < Student[indexReprove].name.length()){
        
        if(int(Student[i].name[c-1]) > int(Student[indexReprove].name[c-1])){
          indexReprove = i;

          cout << int(Student[i].name[c-1] << " - "<< int(Student[indexReprove].name[c-1] << endl;
          break;
        }        
        ++c;
      }

    }
  }

    cout << Student[indexReprove].name << endl;

  return 0;
}


// ordena por melhor nota
// desempada com ordem alfabetica

// 1 >> n(alunos)
// 2 >> nomeAluno >> resolucoes

// ordenar pela menor nota
// verificar se existe nota igual
// verificar a ordem alfabetica e desempatar