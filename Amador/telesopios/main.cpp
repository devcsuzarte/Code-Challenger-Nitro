#include <iostream>
using namespace std;

int main() {
  int a, n, s;
  cin >> a;
  cin >> n;

  int fotons;

  for(int i=0; i < n; i++){
    cin >> fotons;

    if((fotons * a) >= 40000000){
        s++;
    }
  }

  cout << s << endl;
  return 0;
}