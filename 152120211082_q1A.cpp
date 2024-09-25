#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <locale.h>

using namespace std;

int main() {
    int m;

setlocale(LC_ALL, "Turkish");
    cout << "dizi elemanýný giriniz:(m): ";
    cin >> m;

    
    int arr[1000];  


    unsigned long long start_time = 0;

    
    for (int i = 0; i < m; ++i) {
        arr[i] = i + 1;
        start_time++;  
    }

   
    unsigned long long end_time = start_time;

  
    cout << "dizi elemanlarý: ";
    for (int i = 0; i < m; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Geçen süre: " << end_time <<  endl;

    
    cout << "Time complexity O(m)" << endl;

    return 0;
}

