/**
 *\mainpage Sistem management karyawan dan perusahaan
 * 
 * \section intro_sen Pengantar
 * selamat datang di dokumentasi sistem management karyawan dan perusahaan.
 * sistem ini dirancang untuk mengelola karyawan dan proyek yang ada di peruhasaan rafi ramadhan.
 * 
 * \section struktur_sec Struktur Kode
*kode ini terdiri dari 2 kelas utama: 
*-\b pemograman : menghitung nilai rerata untuk menentukan kelulusan. 
*-\b jaringan : menghitung nilai rerata untuk menentukan kelulusan.
*
*
*\section note_sec Catatan 
* Dokumentasi ini dihasilkan menggunakan Doxygen.
 * @file uaspemdas
 * @brief Demonstrates the relationship between employees and companies.
 * 
 */

#include <iostream>
using namespace std;
// isi dengan access modifier yang dibutuhkan
/**
 * @class mataKuliah
 * @brief untuk menghitung nilai rerata.
 */
 class MataKuliah{
    private:
    float presensi;/< jumlah presensi. */
    float activity;/< nilai aktivitynya. */
    float exercise;/< nilai soal latihan */
    float tugasAkhir;/< nilai tugas akhir. */
// tambahkan dengan variabel lain yang dibutuhkan  dibawah ini
 }

public:
MataKuliah()
{
presensi = 0.0;
activity = 0.0;
exercise = 0.0;
tugasAkhir = 0.0;   
}


virtual void namaMataKuliah()=0;
virtual void inputNilai()=0;
virtual void hitungNilaiAkhir()=0;
virtual void cekKelulusan()=0;

// isi dengan inisialisasi  variabel yang dibutuhkan  dibawah ini


// tambahkan virtual fungsi lain yang dibutuhkan  dibawah ini
virtual void namaMataKuliah() { return; }
virtual void inputNilai() { return; }
virtual void hitungNilaiAkhir() { return; }
virtual void cekKelulusan() { return; }



void setPresensi(float nilai)
{
this->presensi = nilai;
}
float getPresensi()
{
return presensi;
}


// tambahkan setter dan getter lain yang dibutuhkan  dibawah ini



class Pemrograman  : public MataKuliah
{
// isi disini untuk mengisi kelas pemrograman
public:
void namaMataKuliah()override{
    cout << "mata kuliah : pemograman"
}
void inputNilai() override {
    cout << "Masukkan nilai presensi: ";
    cin >> presensi;
    cout << "Masukkan nilai activity: ";
    cin >> activity;
    cout << "Masukkan nilai exercise: ";
    cin >> exercise;
    cout << "Masukkan nilai tugas akhir: ";
    cin >> tugasAkhir;
}
float hitungNilaiAkhir() override {
    return (presensi * 0.2) + (activity * 0.3) + (exercise * 0.3) + (tugasAkhir * 0.2);
  }

  bool cekKelulusan() override {
    float nilaiAkhir = hitungNilaiAkhir();
    if (nilaiAkhir >= 75.0) {
      cout << "Selamat anda dinyatakan lulus " << nilaiAkhir << endl;
      return true;
    } else {
      cout << "anda dinyatakan tidak lulus" << nilaiAkhir << endl;
      return false;
    }
  }
};


class Jaringan : public MataKuliah
{
// isi disini untuk mengisi kelas jaringan
void namaMataKuliah()override{
    cout << "mata Kuliah : jaringan"
}
void inputNilai() override {
    cout << "Masukkan nilai activity: ";
    cin >> activity;
    cout << "Masukkan nilai exercise: ";
    cin >> exercise;
}
float hitungNilaiAkhir() override {
    return (exercise * 0.3) + (activity * 0.7);
}
bool cekKelulusan() override {
    float nilaiAkhir = hitungNilaiAkhir();
    if (nilaiAkhir >= 75.0) {
      cout << "selamat anda dinyatakan lulus " << nilaiAkhir << endl;
      return true;
    } else {
      cout << "anda dinyatakan tidak lulus " << nilaiAkhir << endl;
      return false;
    }
  }

};

int main()
{ 
char pilih;
MataKuliah  *mataKuliah; 
Pemrograman  pemrograman;
Jaringan jaringan;

 do {
    cout << "\nMenu Sistem Penilaian Mata Kuliah:\n";
    cout << "1. Hitung Nilai Mata Kuliah Pemrograman\n";
    cout << "2. Hitung Nilai Mata Kuliah Jaringan\n";
    cout << "0. Keluar\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilih;

    switch (pilih) {
      case '1':
        mataKuliah = &pemprograman;
        break;
      case '2':
        mataKuliah = &j
// isi disini untuk menentukan  mata kuliah yang dipilih
}
 };