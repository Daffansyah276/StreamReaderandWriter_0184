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
    outfile.close(); //selesai dalam menulis sekarang tutup fileny

    ifstream infile; // membuat objek input file stream
    infile.open("contohfile.txt"); // membuka file yang ditulisi

    cout << endl << ">= Membuka dan Membaca file " << endl; 
    //jika file ada maka
    if (infile.is_open()){
        while (getline(infile, baris)) // melakukan perulangan setiap baris
        {
            cout << baris << '\n'; //dan tampilkan disini
        }
        infile.close();//tutup file tersebut setelah selesai 
    }

    