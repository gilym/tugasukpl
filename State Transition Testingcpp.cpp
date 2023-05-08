#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word) {
    int length = word.length();

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << "The word is a palindrome" << endl;
    } else {
        cout << "The word is not a palindrome" << endl;
    }

    return 0;
}

//State Transition Testing adalah teknik pengujian perangkat lunak yang didasarkan 
//pada model state diagram. Teknik ini dapat membantu menguji perubahan status suatu 
//objek atau sistem ketika menerima masukan atau input tertentu. Berikut ini adalah contoh 
//implementasi teknik State Transition Testing menggunakan bahasa pemrograman C++.

//1.	Kasus Uji Input Palindrom (Transition Test Case):
//"	Input: "racecar"
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Palindrome"
//"	Output yang diharapkan: "The word is a palindrome"

//2.	Kasus Uji Input Bukan Palindrom (Transition Test Case):
//"	Input: "computer"
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Not Palindrome"
//"	Output yang diharapkan: "The word is not a palindrome"

//3.	Kasus Uji Input Kosong (Boundary Test Case):
//"	Input: ""
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Not Palindrome"
//"	Output yang diharapkan: "The word is not a palindrome"

//4.	Kasus Uji Input Satu Karakter (Boundary Test Case):
//"	Input: "a"
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Palindrome"
//"	Output yang diharapkan: "The word is a palindrome"

//5.	Kasus Uji Input Sama Ketika Dibalik (Boundary Test Case):
//"	Input: "rotor"
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Palindrome"
//"	Output yang diharapkan: "The word is a palindrome"

//6.	Kasus Uji Input Berbeda Ketika Dibalik (Boundary Test Case):
//"	Input: "hello"
//"	Status Awal: "Not Palindrome"
//"	Status Akhir: "Not Palindrome"
//"	Output yang diharapkan: "The word is not a palindrome"
//
//Dalam melakukan State Transition Testing, kita dapat memilih kasus uji untuk setiap 
//transisi yang terjadi antar status, serta kasus uji untuk kondisi di mana program tetap 
//berada pada satu status tertentu. Hal ini akan membantu kita untuk memastikan bahwa program 
//berperilaku dengan benar ketika menerima input yang berbeda-beda. Selain itu, Boundary Test 
//Case juga dapat digunakan untuk memastikan bahwa program berperilaku dengan benar pada batas-batas
// yang mungkin terjadi.



