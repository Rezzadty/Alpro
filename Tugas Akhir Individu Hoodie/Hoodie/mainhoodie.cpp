// Nama : Reza Aditya Prabowo
// Kelompok : A11.4205
// NIM : A11.2022.14201
// Tugas Akhir Hoodie

#include <iostream>
#include <fstream>
#include <string>
#include "hoodie.h"

using namespace std;

int main() {
    Hoodie hoodie;
    Pembeli pembeli;
    int pilihan;

    do {
        cout << " \n";
        cout << "====================\n";
        cout << "========MENU========\n";
        cout << "====================\n";
        cout << " \n";
        cout << "SILAHKAN PILIH TELEBIH DAUHULU\n";
        cout << "1. Input Data Hoodie\n";
        cout << "2. Tampilan Data Hoodie\n";
        cout << "3. Input Data Pembeli\n";
        cout << "4. Tampilkan Data Pembeli\n";
        cout << "5. Simpan Data Ke File\n";
        cout << "6. Keluar\n";

        cout << "\nPilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: // Case untuk menginput data Hoodie
                hoodie.inputHoodie();
                break;
            case 2: // Case untuk menampilkan output data Hoodie
                hoodie.outputHoodie();
                break;
            case 3: // Case untuk menginput data Pembeli
                pembeli.jaket = hoodie; // Menghubungkan objek Hoodie pada objek Pembeli
                pembeli.inputPembeli();
                break;
            case 4: // Case untuk menampilkan output data Pembeli
                pembeli.outputPembeli();
                break;
            case 5:
                {
                    ofstream file("data.txt", ios::app);
                    if (file.is_open()) {
                        file << "\nDATA HOODIE:\n";
                        file << "Kode Hoodie: " << hoodie.kodehoodie << endl;
                        file << "Brand: " << hoodie.brand << endl;
                        file << "Ukuran: " << hoodie.ukuran << endl;
                        file << "Bahan: " << hoodie.bahan << endl;
                        file << "Harga Hoodie: " << hoodie.harga << endl;

                        file << "\nDATA PEMBELI:\n";
                        file << "Nama: " << pembeli.nama << endl;
                        file << "Kota: " << pembeli.kota << endl;
                        file << "Alamat: " << pembeli.alamat << endl;
                        file << "Kode Hoodie: " << pembeli.kodehoodie << endl;
                        file << "Jumlah Hoodie: " << pembeli.jumlah << endl;
                        file << "Total Harga: " << pembeli.totalHarga << endl;

                        file << "--------------------------------------\n";

                        cout << "Data berhasil disimpan ke dalam file.\n";
                        file.close();
                    } else {
                        cout << "Gagal membuka file. Data tidak dapat disimpan.\n";
                    }
                }
                break;
            case 6: // Case untuk keluar dari program
                cout << "========TERIMAKASIH TELAH MENGGUNAKAN PROGRAM========\n";
                break;
            default:
                cout << "\nPILIHAN YANG ANDA PILIH TIDAK TEPAT. TOLONG INPUT LAGI\n";
                break;
        }
    } while (pilihan != 6);

    return 0;
}
