#include <iostream>

using namespace std;


int main() {
    int n = 0;
    int max = 0;
    cout << "Enter array size: ";
    cin >> n;
    if(n <= 0){
        cout << "Error array size!";
        return 1;
    }
    int mass[n];

    for(int i = 0; i < n; i++){
        mass[i] = rand() % 100;
        cout << mass[i] << " ";
    }
    cout << endl;

    max = mass[0];
    for(int i = 0; i < n; i++){
        if(mass[i]>max){
            max = mass[i];
        }
        if(mass[i]<max) cout << mass[i] << " ";
    }

    return 0;
}

