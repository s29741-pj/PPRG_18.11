#include <iostream>
using namespace std;



int main() {
    int arrSize = 0;
    int arrNum = 0;
    int currentBiggest = 0;

    cout << "Podaj długość tablicy : ";
    cin >> arrSize;

    int newArr[arrSize];


    for (int i = 0; i < arrSize; i++) {
            cout << "Podaj liczbę do umieszczenia w tablicy: ";
            cin >> arrNum;
            newArr[i] = arrNum;    
     }

    for (int j = 0; j < arrSize; j++){
        currentBiggest > newArr[j] ? currentBiggest : newArr[j];
        for(int k = 0; k < arrSize; k++){
            if (j == 0){
                newArr[j] > newArr[k] ? currentBiggest = newArr[j] : currentBiggest = newArr[k];
                break;
            }
            currentBiggest > newArr[k] ? currentBiggest : currentBiggest = newArr[k];
        }
    }

    cout << "Tablica składa się z następujących elementów: " << endl;

    for (int l = 0; l < arrSize; l++)
        cout << newArr[l] << " ";

    cout << endl;
    cout << "Największa liczba to: " << currentBiggest << endl;


    return 0;
}