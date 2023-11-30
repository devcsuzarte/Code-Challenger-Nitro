#include <iostream>

using namespace std;

int main()
{
  char area[10][10];
  
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        cin >> area[i][j];
    }  
  }
  
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        
        bool findUp = false;
        bool findDw = false;
        bool findLf = false;
        bool findRt = false;
        
        if(area[i][j] == 't'){
        
            if(i > 0 && area[i-1][j] == '*'){
                findUp = true;
            }
            
            if(i < 9 && area[i+1][j] == '*'){
                findDw = true;
            }
            
            if(j > 0 && area[i][j-1] == '*'){
                findLf = true;
            }
            
            if(j < 9 && area[i][j+1] == '*'){
                findRt = true;
            }
            
            if((findUp || findDw) || (findLf || findRt)){
                
                area[i][j] = 'p';
            }
        
        }    
    
            
    }  
  }

  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        cout << area[i][j] << " ";
    }  

        cout << endl;
  }

    return 0;
}