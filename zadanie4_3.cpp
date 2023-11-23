#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
using namespace std;


int main() {

    setprecision(1);

    int arr[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            switch (i) {
                case 0:
                    arr[i][j] = i + j;
                    break;
                case 1:
                    arr[i][j] = arr[i - 1][j] + j;
                    break;
                case 2:
                    arr[i][j] = pow((double)arr[i - 1][j], 2.0);
                    break;
                case 3:
                    arr[i][j] = i + j;
                    break;
                case 4:
                    arr[i][j] = i - j;
                    break;
                default:
                    arr[i][j] = 0;
            }
        }
    }

    for(int k = 0; k < 10; k++){
        for(int l = 0; l < 10; l++){
            cout << setw(5) << arr[k][l];
        }
        cout << endl;
    }

    return 0;
}