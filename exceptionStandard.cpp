#include <iostream>
#include <exception>//untuk objek exception yang akan digunakan 
#include <array> //untuk objek array yang kita gunakan
using namespace std;
int main(){
    cout << "Awal program " << endl; //penanda 1:...
    try
    {
        array<int, 3> data = {10,20,30}; // pesan array interger 3 elemen
        cout << data.at(5) << endl; // memanggil array elemen 5
        
    }
    catch(exception& e)
    {
       cout << e.what() << endl; //penangkap menggunakan objek exception
       /*akan dieksekusi karena array data memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir " << endl;

    /*Penanda 2 : bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}