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

    int minorChar = i;

      for(int j=i+1; j<n; j++){

        int indexNM = 0;

        while((int(Student[minorChar].name[indexNM]) == int(Student[j].name[indexNM])) && 
              (indexNM < Student[minorChar].name.length() && indexNM < Student[j].name.length())){
                ++indexNM;
              }

              if(int(Student[minorChar].name[indexNM]) < int(Student[j].name[indexNM])){
                minorChar = j;

              }
      } 

      if(i != minorChar){
        swap(Student[i], Student[minorChar]);
      }
  }
  
  // aqui esta ordenado pelo nome

  int indexReprove = 0;

  for(int i=1; i<n; i++){
    

    if(Student[i].points < Student[indexReprove].points){
      indexReprove = i;
    }
  }


  for(int i=0; i<n; i++){
    cout << Student[i].name << endl;
  }




 
  // cout << "Instancia " << ++inst << endl;
  // cout << Student[indexReprove].name << endl;
   
 }

  return 0;
}

// enquanto as notas forem ==
// enquanto a letra for == 