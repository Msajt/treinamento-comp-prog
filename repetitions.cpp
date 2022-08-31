#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    int maior = 1, auxMaior = 1;

    cin >> x;

    for(unsigned int i=1; i<x.length(); i++){
        if(x[i-1] == x[i]){
            auxMaior += 1;
            if(auxMaior >= maior) maior = auxMaior;
        } else auxMaior = 1;
    }

    cout << maior;

    return 0;
}
