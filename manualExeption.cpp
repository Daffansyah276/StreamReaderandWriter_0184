#include <iostream>
using namespace std;

int main(){
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan di eksekusi " << endl;
    }
    catch(int a)
    {
       cout << " a " << ": Pengecualian akan dieksekusi " << endl; //blok ini akan dieksekusi
    }
    catch(...){
        cout << "default pengecualian dieksekusi " << endl; // *jika selain interger maka block ini akan dieksekusi*/        
    }
    return 0;
}