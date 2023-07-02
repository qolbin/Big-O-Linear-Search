#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  // Return the index if the target is found
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Measure execution time
    auto start = high_resolution_clock::now();
    int result = linearSearch(arr, n, target);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    if (result == -1)
        cout << "Target element not found" << endl;
    else
        cout << "Target element found at index " << result << endl;

    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    // Measure space complexity
    int space = sizeof(arr) + sizeof(n) + sizeof(target);
    cout << "Space complexity: " << space << " bytes" << endl;

    return 0;
}

/*Waktu Eksekusi (Time Complexity):
Kasus Terbaik (Best Case): O(1) Pada kasus terbaik, elemen yang dicari ditemukan pada posisi pertama array. Sehingga, waktu eksekusi adalah konstan O(1).
Kasus Rata-rata dan Kasus Terburuk (Average Case & Worst Case): O(n) Pada kasus rata-rata dan terburuk, elemen yang dicari berada di posisi terakhir atau tidak ada dalam array. Dalam kasus ini, algoritma perlu melakukan iterasi melalui seluruh elemen dalam array. Sehingga, waktu eksekusi memiliki kompleksitas linier O(n), di mana n adalah jumlah elemen dalam array.
Jadi, waktu eksekusi algoritma Linear Search memiliki kompleksitas O(1) pada kasus terbaik dan O(n) pada kasus rata-rata dan terburuk.
Penggunaan Memori (Space Complexity):
Algoritma Linear Search hanya menggunakan sedikit memori tambahan selain array yang diberikan untuk penyimpanan elemen.
Space complexity dari Linear Search adalah O(1) karena penggunaan memori tidak tergantung pada ukuran masukan.
Algoritma ini hanya menggunakan beberapa variabel sementara untuk menyimpan indeks, elemen saat ini, dan elemen yang dicari.
Jadi, kompleksitas waktu (time complexity) Linear Search adalah O(1) pada kasus terbaik dan O(n) pada kasus rata-rata dan terburuk, sedangkan kompleksitas ruang (space complexity) adalah O(1).
*/
