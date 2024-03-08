// Nama : Reza Aditya Prabowo
// Kelompok : A11.4205
// NIM : A11.2022.14201
// Tugas Akhir Hoodie

#ifndef HOODIE_H
#define HOODIE_H

#include <iostream>
#include <string>

using namespace std;

class Hoodie { // Class untuk Hoodie
public:
    string brand; // Merek atau brand dari hoodie
    string ukuran; // Ukuran hoodie
    string bahan; // Bahan pembuatan hoodie
    string warna; // Warna hoodie
    float harga; // Harga hoodie
    string kodehoodie; // Kode unik untuk hoodie
    void inputHoodie(); // Mengambil masukan data hoodie
    void outputHoodie(); // Menampilkan data hoodie
};

class Pembeli { // Class untuk Pembeli
public:
    Hoodie jaket; // Objek Hoodie yang dibeli oleh pembeli
    string nama; // Nama pembeli
    string kota; // Kota pembeli
    string alamat; // Alamat pembeli
    string kodehoodie; // Kode hoodie yang dipilih oleh pembeli
    int jumlah; // Jumlah hoodie yang dibeli
    float totalHarga; // Total harga pembelian
    void inputPembeli(); // Mengambil masukan data pembeli
    void outputPembeli(); // Menampilkan data pembeli
};

void Hoodie::inputHoodie() { // Void untuk menambahkan data Hoodie
    cout << "\nINPUT DATA HOODIE:\n";
    cout << "Kode Hoodie  : ";
    cin >> kodehoodie; // Input kode Hoodie untuk menambahkan ke data
    cout << "Brand  : ";
    cin.ignore();
    getline(cin, brand); // Input brand Hoodie untuk menambahkan ke data
    cout << "Ukuran : ";
    cin >> ukuran; // Input ukuran Hoodie untuk menambahkan ke data
    cout << "Bahan  : ";
    cin >> bahan;// Input bahan Hoodie untuk menambahkan ke data
    cout << "Warna  : ";
    cin >> warna; // Input warna Hoodie untuk menambahkan ke data
    cout << "Harga  : ";
    cin >> harga;// Input harga Hoodie untuk menambahkan ke data
    cout << "\nTERIMA KASIH SUDAH MEMASUKKAN DATA HOODIE\n";
}

void Hoodie::outputHoodie() { // Void untuk menmapilkan output data Hoodie
    cout << "\nINI ADALAH DATA HOODIE YANG TELAH DIMASUKKAN\n";
    cout << "\nDATA HOODIE:\n";
    cout << "Kode Hoodie  : " << kodehoodie << endl; // Output kode Hoodie setelah ditambahkan
    cout << "Brand  : " << brand << endl; // Output brand Hoodie setelah ditambahkan
    cout << "Ukuran : " << ukuran << endl; // Output ukuran Hoodie setelah ditambahkan
    cout << "Bahan  : " << bahan << endl; // Output bahan Hoodie setelah ditambahkan 
    cout << "Warna  : " << warna << endl; // Output warna Hoodie setelah ditambahkan
    cout << "Harga  : Rp " << harga << endl; // Output harga Hoodie setelah ditambahkan
}

void Pembeli::inputPembeli() { // Void untuk menambahkan data Pembeli
    cout << "\nMASUKKAN DATA PEMBELI\n";
    cout << "Nama   : ";
    cin.ignore();
    getline(cin, nama); // Input untuk menmabahkan data nama Pembeli
    cout << "Kota   : ";
    getline(cin, kota); // Input untuk menambahkan data kota Pembeli
    cout << "Alamat : ";
    getline(cin, alamat); // Input untuk menambahkan data alamat Pembeli 
    cout << "Kode Hoodie : ";
    cin >> kodehoodie; // Input untuk menambahkan data kodehoodie Pembeli
    cout << "Jumlah Hoodie : ";
    cin >> jumlah; // Input untuk menambahkan data jumlah Hoodie yang dibeli oleh Pembeli
    totalHarga = jaket.harga * jumlah; // Menghitung total harga pembelian berdasarkan harga hoodie yang dipilih
    cout << "\nTERIMA KASIH SUDAH MEMASUKKAN DATA PEMBELIAN\n";
}

void Pembeli::outputPembeli() { // Void untuk output Pembeli
    cout << "\nBERIKUT ADALAH INFORMASI DATA PEMBELI\n";
    cout << "\n=====================================\n";
    cout << "Nama   : " << nama << endl; // Output kode nama pembeli setelah ditambahkan
    cout << "Kota   : " << kota << endl; // Output kode kota pembeli setelah ditambahkan
    cout << "Alamat  : " << alamat << endl; // Output kode alamat pembeli setelah ditambahkan 
    cout << "Kode Hoodie : " << kodehoodie << endl; // Output kode kodehoodie Pembeli setelah ditambahkan
    cout << "Jumlah Hoodie : " << jumlah << endl; // Output jumlah hoodie Pembeli setelah ditambahkan
    cout << "Total Harga   : Rp " << totalHarga << endl; // Output total harga Pembeli yang harus dibayarkan setelah dihitung
    cout << "\nTERIMA KASIH SUDAH MEMBELI HOODIE KAMI\n";
}

#endif
