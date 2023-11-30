#include <iostream>
#include <string>

using namespace std;

string checkString(string one, string two) {

     int indexWD = 0;

            while((int(one[indexWD]) == int(two[indexWD]))
             && (indexWD < one.length() && indexWD < two.length())){
                ++indexWD;
            }

            if(int(one[indexWD]) < int(two[indexWD])){
              return two;
            } else{
              return one;
            }
}

int main() {

  

  int n, inst=0;

  while(cin >> n){

    string students[11] = {};

    for(int i=0; i < n; i++){

          int points;
          string name;
          cin >> name >> points;

          if(students[points] == ""){
            students[points] = name;
          } else {
            students[points] = checkString(students[points], name);
          }

    }


    cout << "Instancia " << ++inst << endl;

    for (string student : students){
      if(student != ""){
        cout << student << endl;
        break;
      }
    }
  }

   
 

  return 0;
}
