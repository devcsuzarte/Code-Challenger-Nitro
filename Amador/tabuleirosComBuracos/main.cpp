#include <iostream>
using namespace std;

int checkTab(int n){
  
  int m;
  int countM = 0;
  int x = 4, y = 3;
  bool caiu = false;

  for(int i=0; i < n; i++){
    cin >> m;

    switch (m)
    {
    case 1:
        x = x + 1;
        y = y + 2;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;
    case 2:
        x = x + 2;
        y = y + 1;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 3:
        x = x + 2;
        y = y - 1;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 4:
        x = x + 1;
        y = y - 2;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 5:
        x = x - 1;
        y = y - 2;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 6:
        x = x - 2;
        y = y - 1;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 7:
        x = x - 2;
        y = y + 1;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    case 8:
        x = x - 1;
        y = y + 2;

        if(x == 1 && y == 3){return ++countM;} 
        if(x == 2 && y == 3){return ++countM;} 
        if(x == 2 && y == 5){return ++countM;} 
        if(x == 5 && y == 4){return ++countM;}    
            else{
            ++countM;
        }

        break;

    default:
        break;
    }
  }

  return countM;
}

int main() {
  int n, m;
  
  cin >> n;

  cout << checkTab(n) << endl;
  return 0;
}