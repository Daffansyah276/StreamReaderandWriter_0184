#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    //membuat objek output file stream.
    ofstream outfile;
    //membuka file untuk ditulisi
    outfile.open("contoh file.txt");

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    //unlimited loop untuk menulis 
    while (true){
        cout << "-";
        getline(cin, baris);  //mendapatkan setiap karakter dalam satu baris 

        if (baris == "q") break; //loop akan berhenti jika anda memasukkan karakter q
        outfile << baris << endl; // menulis dan memasukkan nilai dari 'baris' ke dalam file
    }
    
}
