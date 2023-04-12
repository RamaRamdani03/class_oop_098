#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
		cout << "Masukan Nilai : ";
		cin >> nilai;
	}
	void printdata();
};

void Mahasiswa::printdata() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}

class Matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukan kode mata kuliah : ";
		cin >> kode;
		cout << "Masukan nama mata kuliah : ";
		cin >> namaMK;
		cout << "Masukan SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData MataKuliah";
		cout << "\nkode MataKuliah : " << kode;
		cout << "\nnama MataKuliah : " << namaMK;
		cout << "\nSKS : " << sks;
	}
};

int main()
{
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.input();
	mhs.printdata();

	mk.inputMK();
	mk.tampil();
}
