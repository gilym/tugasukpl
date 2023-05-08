#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Enter an integer between 1 and 100: ";
    cin >> input;

    if (input >= 1 && input <= 100) {
        cout << "Valid input" << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}

//Boundary Value Analysis (BVA) adalah teknik pengujian perangkat lunak yang digunakan untuk 
//mengidentifikasi masalah pada nilai batas atau boundary dari input yang diterima oleh program. 
//Teknik ini dapat membantu menemukan kesalahan yang sering terjadi pada nilai-nilai batas.

//Untuk melakukan BVA pada program tersebut, perhatikan nilai batas pada input yaitu 1 dan 100. 
//Maka, kita dapat melakukan pengujian dengan menguji input pada nilai batas, nilai yang berada di
//dekat batas, serta nilai yang berada di luar batas. Berikut ini adalah contoh kasus uji dengan teknik BVA yang dapat dilakukan:

//1. Kasus Uji Input Nilai Minimum (Boundary Test Case):
//Input: 1
//Output yang diharapkan: "Valid input"
//2. Kasus Uji Input Nilai Minimum Dekat Batas (Boundary Test Case):
//Input: 2
//Output yang diharapkan: "Valid input"
//3. Kasus Uji Input Nilai Maksimum Dekat Batas (Boundary Test Case):
//Input: 99
//Output yang diharapkan: "Valid input"
//4. Kasus Uji Input Nilai Maksimum (Boundary Test Case):
//Input: 100
//Output yang diharapkan: "Valid input"
//5. Kasus Uji Input Nilai Lebih Kecil Dari Batas (Off-by-One Error Test Case):
//Input: 0
//Output yang diharapkan: "Invalid input"
//6. Kasus Uji Input Nilai Lebih Besar Dari Batas (Off-by-One Error Test Case):
//Input: 101
//Output yang diharapkan: "Invalid input"
//7. Kasus Uji Input Nilai Di Antara Batas (Nominal Test Case):
//Input: 50
//Output yang diharapkan: "Valid input"
//
//Dengan melakukan pengujian menggunakan kasus-kasus uji tersebut, kita dapat mengidentifikasi kesalahan pada program
// jika ada. Misalnya, jika program memberikan output yang salah pada kasus uji nomor 2, maka kemungkinan program tersebut 
// memiliki masalah pada kondisi yang menguji input yang dekat dengan batas.
