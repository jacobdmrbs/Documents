#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <locale.h>
using namespace std;

int main() {
    int m;

    setlocale(LC_ALL, "Turkish");
    cout << "iki boyutlu dizinin elemanlarýný giriniz (m x m): ";
    cin >> m;

    
    int arr[100][100];  

  
    unsigned long long start_time = 0;  

    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = i * m + j + 1;
            start_time++;  
        }
    }


    unsigned long long end_time = start_time;  

 
    cout << "dizi elemanlarý: " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Geçen süre: " << end_time << endl;

 
    cout << "Time complexity O(m^2)" << endl;

    return 0;
}

