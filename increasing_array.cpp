#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, moves = 0;
    cin >> n;
    long int x[n];

    for(int i=0; i<n; i++) cin >> x[i];

    for(int i=1; i<n; i++){
        // Verificando se o sucessor é menor que o antecessor
        if(x[i] < x[i-1]){
            // Caso for verdadeiro, faz a soma até chegar no antecessor
            moves += (x[i-1] - x[i]);
            // Substitue o valor com o do maior anterior
            x[i] = x[i-1];
        }
    }

    cout << moves;

    return 0;

    /// 3 2 5 1 7

    // 3 [2 + (3-2)] 5      1      7
    // 3      3      5      1      7
    // 3      3      5 [1 + (5-1)] 7
    // 3      3      5      5      7

}
