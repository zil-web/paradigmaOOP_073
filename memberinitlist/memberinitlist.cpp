#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

	~mahasiswa() {
		cout << "Id     = " << id << endl;
		cout << "Nama   = " << nama << endl;
		cout << "Nilai  = " << nilai << endl;
	}
};
~mahasiswa() {
	cout << "Id     = " << id << endl;
	cout << "Nama   = " << nama << endl;
	cout << "Nilai  = " << nilai << endl;
}
};
int main() {
	mahasiswa mhs(12, "Asroni", 90.5);

	return 0;
}