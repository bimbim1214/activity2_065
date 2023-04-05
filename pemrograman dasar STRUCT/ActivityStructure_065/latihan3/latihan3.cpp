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

