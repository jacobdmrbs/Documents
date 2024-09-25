#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <clocale>

using namespace std;

int main() {
    int m;
setlocale(LC_ALL, "Turkish");
   
    cout << "�� boyutlu dizinin de�erlerini giriniz: (m x m x m): ";
    cin >> m;

    
    int arr[10][10][10];  

  
    unsigned long long simulated_time = 0;

    
    int value = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < m; ++k) {
                arr[i][j][k] = value++;
                simulated_time++;  
            }
        }
    }

    
    cout << "�� boyutlu dizi elemanlar�: " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < m; ++k) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

   
    cout << "ge�en  zaman: " << simulated_time << endl;

    
    cout << "Time complexity O(m^3)" << endl;

    return 0;
}

