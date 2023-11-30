#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float av1, av2, tb;

    cin >> av1 >> av2 >> tb;

    float media = (av1 * 0.4) + (av2 * 0.4) + (tb * 0.2);

    cout << setprecision(2) << fixed << media << endl;

    return 0;
}