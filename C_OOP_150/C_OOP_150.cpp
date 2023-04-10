#include <iostream>
using namespace std;

class Mahasiswa {
public: 
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM" << nim;
	cout << "\nNama" << nama;
	}
};

class MataKuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "Masukkan Kode Matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
};