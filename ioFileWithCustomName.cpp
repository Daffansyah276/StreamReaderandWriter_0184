#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namefile;

    cout << "Masukkan nama File " << endl;
    cin >> namefile;
    cin.ignore();

    ofstream outfile;    //membuat objek output file stream.
    outfile.open(namefile + ".txt"); //membuka file untuk ditulisi
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
    infile.open(namefile + ".txt"); // membuka file yang ditulisi

    cout << endl << ">= Membuka dan Membaca file " << endl; 
    //jika file ada maka
    if (infile.is_open()){
        while (getline(infile, baris)) // melakukan perulangan setiap baris
        {
            cout << baris << '\n'; //dan tampilkan disini
        }
        infile.close();//tutup file tersebut setelah selesai 
    }

    else cout << "Unable to open file "; //jika tidak ditemukan file maka akan menampilkan ini 
    return 0;
}