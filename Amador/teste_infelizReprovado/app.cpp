#include <iostream>
#include <string>

using namespace std;

int main() {

  int n, inst=0;

 while(cin >> n && n != 0){

   struct {
    int points;
    string name;
  } Student[n];

  for(int i=0; i<n; i++){

    cin >> Student[i].name >> Student[i].points;
  }

  //ORDENAÇÃO

  for(int i=0; i<n-1; i++){

    int indexMenor = i;

      for(int j=i+1; j<n; j++){
        if(Student[j].points < Student[indexMenor].points){
          indexMenor = j;
        }
      } if(i != indexMenor){
        swap(Student[i], Student[indexMenor]);
      }
  }

  // aqui já está ordenado por notas


  for(int i=0; i<n-1; i++){
    if(Student[i].points != Student[i+1].points){
      break;
    }else{

      int minorChar = i;

      for(int j=i+1; j < n; j++){
        int indexNM = 0;

        while((int(Student[minorChar].name[indexNM]) == int(Student[j].name[indexNM])) && 
              (indexNM+1 < Student[minorChar].name.length() && indexNM+1 < Student[j].name.length())){
                ++indexNM;
              }

              if(int(Student[minorChar].name[indexNM]) < int(Student[j].name[indexNM])){
                minorChar = j;

              }

      } 

        if(minorChar != i){
          swap(Student[i], Student[minorChar]);
        }
    }
  }
  


  cout << "Instancia " << ++inst << endl;
  cout << Student[0].name << endl;
 }

  return 0;
}

// enquanto as notas forem ==
// enquanto a letra for == 