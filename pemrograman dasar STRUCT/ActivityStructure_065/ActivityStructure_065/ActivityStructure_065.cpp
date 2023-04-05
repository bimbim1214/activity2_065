#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20220140065";
	mhs.umur = 30;
	mhs.nama = "bimo aditya pangestu";
	mhs.alamat = "jambi";

	cout << "masukan NIM : ";
	cin >> mhs2.nim;
	cout << "masukan umur : ";
	cin >> mhs2.umur;
	cout << "masukan nama : ";
	cin >> mhs2.nama;
	cout << "masukan alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : " << mhs.alamat;

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : " << mhs.alamat;

}