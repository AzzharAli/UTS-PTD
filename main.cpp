#include <iostream>

using namespace std;

int main()
{
    int jumlah;
    int jumlahBuku;
    int harga = 20000;
    int pembagi;
    int akhir;
    cout << "Masukkan Jumlah Pembelian" << endl;
    cin >> jumlah;


    if(jumlah%3==0){
         akhir = jumlah/3;

    }if(jumlah%3==1){
        pembagi = jumlah - 1;
        akhir = pembagi/3;

    }if(jumlah%3==2){
        pembagi =jumlah - 2;
        akhir = pembagi/3;
    }


    if(jumlah>=3){
        jumlahBuku = jumlah+akhir;
    }else{
        jumlahBuku = jumlah;
    }


    cout << "Hasil Jumlah Buku : " << jumlahBuku <<endl;
    int totalHarga = harga * jumlah;
    cout<<"Jumlah yang harus dibayar adalah : "<<totalHarga<<endl;
    if(totalHarga>100000){
        cout << "Terima Kasih, Anda adalah pembeli yang Loyal" <<endl;
    }else{
    cout << "Mari pelanggan, tingkatkan loyalitas Anda" <<endl;
    }


    return 0;
}
