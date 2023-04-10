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
		cout << "Masukkan Kode Matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "Kode Matakuliah : " << kode;
		cout << "Nama Matakuliah : " << namaM;
		cout << "sks : " << sks;
	}
};

int main() {
	Mahasiswa mhs1;
	MataKuliah mk;
	
	cout << "Masukkan NIM : ";
	cin >> mhs1.nim;
	cout << "Masukkan nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
	mk.tampil();
}