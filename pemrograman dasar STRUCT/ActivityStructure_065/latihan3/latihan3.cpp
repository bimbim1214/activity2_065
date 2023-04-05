#include <iostream>
using namespace std;

struct detailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[12];
	char nama[25];
	detailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "masukan NIM : ";
		cin.getline(mhs[i].nim, 12);
		cout << "masukan umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "masukan nama : ";
		cin.getline(mhs[i].nama, 25);
		cout << "alamat : ";
		cout << "\n\tmasukan desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\n\tmasukan kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
	}
	for (int i = 0; i < 3; i++) {
		cout << "\n\nNIM : " << mhs[i].nim;
		cout << "\numur : " << mhs[i].umur;
		cout << "\nnama : " << mhs[i].nama;
		cout << "\nalamat : ";
		cout << "\n\tdesa : " << mhs[i].alamat.desa;
		cout << "\n\tkota : " << mhs[i].alamat.kota;
	}
}