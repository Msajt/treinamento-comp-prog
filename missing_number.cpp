#include <bits/stdc++.h>
using namespace std;

int main(){
    // Defini��o de 'n'
    long int n;
    // Entrada para 'n'
    cin >> n;

    // Defini��o do array
    int arr[n-1];
    // Entrada para o array
    for(int i=0; i<n-1; i++) cin >> arr[i];

    // Ordenar o array
    sort(arr, arr + (n-1));

    // Verificando se o primeiro elemento cont�m o n�mero 1
    if(arr[0] != 1){
        cout << 1;
        return 0;
    } else if(arr[n-2] != n){
        cout << n << endl;
        return 0;
    }
    // Verificando n�mero que falta
    for(int i=0; i<n-2; i++){
        if(arr[i+1] - arr[i] != 1){
            cout << arr[i] + 1;
            return 0;
        }
    }
}
