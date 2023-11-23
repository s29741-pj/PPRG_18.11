#include <iostream>
using namespace std;

int main() {
    int arrSize = 0;
    int arrNum = 0;
    int lastMost[2] = {0,0};
    int currentMost = 0;
    int checkArrSum = 0;

    cout << "Podaj długość tablicy : ";
    cin >> arrSize;

    int newArr[arrSize];
    int checkArr[arrSize];


    for (int i = 0; i < arrSize; i++) {
            cout << "Podaj liczbę do umieszczenia w tablicy: ";
            cin >> arrNum;
            newArr[i] = arrNum;
            checkArr[i] = 0;    
     }

    for (int j = 0; j < arrSize; j++){

        currentMost = 0;

        for(int k = 0; k < arrSize; k++){
            if (j == 0){
                lastMost[0] = newArr[j];
                newArr[j] == newArr[k] ? lastMost[1]++ : lastMost[1];
                lastMost[1] == 1 ? checkArr[k] = 1 : 0;
            }else {
                newArr[j] == newArr[k] ? currentMost++ : 0;
                currentMost == 1 ? checkArr[k] = 1 : 0;
            }
        }


         if(lastMost[1] < currentMost) {
            lastMost[0] = newArr[j];
            lastMost[1] = currentMost;
         }

    }

    for(int x :checkArr){
        checkArrSum += checkArr[x];
    }
    
    if(checkArrSum == arrSize) {
        cout << "Wszystkie liczby w ciągu wystąpują tylko 1 raz.";
    }else {
        cout << "Najczęstsza liczba to: " << lastMost[0] << ", powtarza się " << lastMost[1] << " razy.";
    }

 
    return 0;
}


