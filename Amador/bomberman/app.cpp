#include <iostream>
using namespace std;

int main() {
  
  int h, w;
  cin >> h >> w;

  char arena[h][w];

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){

      cin >> arena[i][j];

    }
  }

  int t;
  cin >> t;


    for (int c=0; c < t; c++){


      for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){

          switch(arena[i][j]){

            case 'c':

              if(i > 0 && (arena[i-1][j] == 'o')){

                  arena[i][j] = 'o';
                  arena[i-1][j] = 'C';

              } else{

                arena[i][j] = 'B';
                
              }

              break;

            case 'b':

              if(i < h-1 && (arena[i+1][j] == 'o')){

                  arena[i][j] = 'o';
                  arena[i+1][j] = 'B';

              } else{

                arena[i][j] = 'C';
                
              }

              break;

            case 'e':

              if(j > 0 && (arena[i][j-1] == 'o')){

                  arena[i][j] = 'o';
                  arena[i][j-1] = 'E';

              } else{

                arena[i][j] = 'D';
                
              }

              break;
            
            case 'd':

              if(j < w-1 && (arena[i][j+1] == 'o')){

                  arena[i][j] = 'o';
                  arena[i][j+1] = 'D';

              } else{

                arena[i][j] = 'E';
                
              }

              break;

            default:
            break;

            
          }
      }
    }

    for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){

      switch(arena[i][j]){

        case 'C':
          arena[i][j] = 'c';
        break;
        case 'B':
          arena[i][j] = 'b';
        break;
        case 'D':
          arena[i][j] = 'd';
        break;
        case 'E':
          arena[i][j] = 'e';
        break;
      }

    }
  }
    }


  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){

      cout << arena[i][j];

    }

    cout << endl;
  }


  return 0;
}