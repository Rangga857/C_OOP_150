#include <iostream>
using namespace std;

class Mahasiswa {
public: 
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM : " << nim;
	cout << "\nNama : " << nama;
	}
public: void input() {
	cout << "Masukkan NIM : ";
	cin >> nim;
	cout << "Masukkan nama : ";
	cin >> nama;
}
};

class MataKuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\nMasukkan Kode Matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaM;
		cout << "sks : " << sks;
	}
};

int main() {
	Mahasiswa mhs1;
	MataKuliah mk;
	
	mhs1.input();
	mhs1.cetak();

	mk.input();
	mk.tampil();
}