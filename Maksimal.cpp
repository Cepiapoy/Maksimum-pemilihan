#include <iostream>
using namespace std;
//variable global
int ii, i;

int main () {
	cout << "Nama	: Cepi Saepul Rohman"<<endl;
	cout << "NPM	: 16.111.320"<<endl;
	cout << "Kelas	: TIF-RM 16C"<<endl;
  cout << "Inputan nilai Pertama : "; cin >> i ; cout << endl;
  cout << "Inputan nilai kedua : "; cin >> ii ; cout << endl;
  if (i<ii) {
    cout << "Nilai maksimumnya adalah "<<ii;
  }
    else cout << "Nilai maksimumnya adalah "<<i;
return 0;

}