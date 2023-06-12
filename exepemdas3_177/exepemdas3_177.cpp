#include <iostream>
using namespace std;

class bidangDatar {
private : 
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public :
	bidangDatar() { //constructor
		x=0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { 
		return 0; 
	} //fungsi untuk menghitung luas
	virtual float Keliling(int a) { 
		return 0;
	} //fungsi untuk menghitung keliling

	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};


class Lingkaran :public bidangDatar { //pemakaian/penurunan class bidang datar (inheritance)
public:
	void input() {
		int r;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar { //pemakaian/penurunan class bidang datar (inheritance)
public: 
	void input() {
		int s;
		cout << "Masukkan sisi : ";
		cin >> s;
		setX(s);
	}

	float Luas(int s) {
		return s * s;
	}

	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	bidangDatar* bd;

	//LINGKARAN
	cout << "Lingkaran dibuat" << endl;
	bd = new Lingkaran();
	bd->input();			//memanggil dari kelas bidang datar agar bisa digunakkan
	int r = bd->getX();		//menggunakan fungsi untuk membaca/mengambil nilai dalam x pada kelas bidang datar
	cout << "Luas Lingkaran = " << bd->Luas(r) << endl;		//menggunakan/memanggil fungsi luas pada lingkaran karena terdapat (r)
	cout << "Keliling Lingkaran = " << bd->Keliling(r) << endl;		//memanggil/menggunakan fungsi keliling lingkaran karena terdapat (r)

	//BUJURSANGKAR
	cout << "\nBujursangkar dibuat" << endl;
	bd = new Bujursangkar();
	bd->input();
	int s = bd->getX();
	cout << "Luas Bujursangkar = " << bd->Luas(s) << endl;	//menggunakan fungsi Luas pada bujursangkar karena terdapat (s)
	cout << "Keliling Bujursangkar = " << bd->Keliling(s) << endl;	//menggunajan fungsi Keliling pada bujursangkar karena terdapat (s)

	return 0;
}