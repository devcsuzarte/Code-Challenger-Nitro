#include <iostream>
using namespace std;

// Decrescente
void bubbleSort(string nomes[], int n) {

bool change = false;

do {

    change = false;

    // percorra todos os nomes
    for(int i=0; i < n -1; i++) {
        string firstName = nomes[i];
        string secondName = nomes[i+1];

        // percorra as letras dos nomes
        int indexOfChar;

       if(int(firstName[0]) == int(secondName[0])){
        for(int j=0; j < firstName.length(); j++){

            // ache a letra que vamos comparar
            if(int(firstName[j]) != int(secondName[j])) {
                indexOfChar = j;
            }
        }

       }else{
        indexOfChar = 0;
       }
        

        // faça a troca
        if (secondName[indexOfChar] < firstName[indexOfChar]) {
            nomes[i] = secondName;
            nomes[i+1] = firstName;

            change = true;

        }
        
    }
} while(change);


} 


int main() {


int numberOfStudents;
int sortNumber;
cin >> numberOfStudents >> sortNumber;
string studentsName[numberOfStudents];

if (sortNumber <= numberOfStudents && numberOfStudents <= 100) {

    for (int i=0; i < numberOfStudents; i++) {
    cin >> studentsName[i];
}

bubbleSort(studentsName, numberOfStudents);


  cout << studentsName[sortNumber - 1] << endl;


}


    return 0;
}