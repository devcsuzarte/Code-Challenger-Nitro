#include <iostream>
#include <string>

using namespace std;

int main() {
  string number;
  


  while(cin >> number && number != "0"){
    int sum = 0;

    for (int i=0; i < number.length(); i++){
      
      cout << int(number[i]) - '0' << endl;
      sum = sum + (int(number[i]) - '0');
      
    }

    if(sum % 9 == 0){

      cout << number << " is a multiple of 9 and has " << endl;
    } else {
      cout << number << " is not a multiple of 9. " << endl;
    }


  }

  return 0;
}