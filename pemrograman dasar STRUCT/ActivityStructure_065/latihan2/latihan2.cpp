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
	Mahasiswa mhs, mhs2;

	cout << "masukan NIM : ";
	cin.getline(mhs.nim, 12);
	cout << "masukan umur : ";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "masukan nama : ";
	cin.getline(mhs.nama, 25);
	cout << "alamat : ";
	cout << "\n\tmasukan desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\n\tmasukan kota : ";
	cin.getline(mhs.alamat.kota, 20);

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : ";
	cout << "\n\tdesa : " << mhs.alamat.desa;
	cout << "\n\tkota : " << mhs.alamat.kota;

}