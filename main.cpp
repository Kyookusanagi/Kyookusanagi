#include <iostream>
using namespace std;

void soalpertama() {
    string nama_lengkap = "Afif Maulana Putra";
    string ttl = "Samarida, 11 Desember";
    cout << "Nama Lengkap anda: " << nama_lengkap << endl;
    cout << "Tanggal lahir anda: " << ttl << endl;
}

void pilihansoal(int nisn) {
    int sisabagi = nisn % 4;
    cout << "Jika sisa bagi 0: Kerjakan soal 3a" << endl;
    cout << "Jika sisa bagi 1: Kerjakan soal 3b" << endl;
    cout << "Jika sisa bagi 2: Kerjakan soal 3c" << endl;
    cout << "Jika sisa bagi 3: Kerjakan soal 3d" << endl;
    cout << "Sisa bagi anda adalah: " << sisabagi << endl;

    if (sisabagi == 0) {
        cout << "Kerjakan soal 3a" << endl;
    } else if (sisabagi == 1) {
        cout << "Kerjakan soal 3b" << endl;
    } else if (sisabagi == 2) {
        cout << "Kerjakan soal 3c" << endl;
    } else {
        cout << "Kerjakan soal 3d" << endl;
    }
}

float hitungratarata() {
    int a = 3;
    float nilai[a];
    float hasil = 0.0;

    cout << "Masukkan nilai yang ingin dirata-ratakan:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "Nilai " << (i + 1) << ": ";
        cin >> nilai[i];
        hasil += nilai[i];
    }
    
    return hasil / a;
}

int main() {
    cout << "--------------------------" << endl;
    cout << "---        SOAL 1      ---" << endl;
    cout << "--------------------------" << endl;
    soalpertama();

    cout << "--------------------------" << endl;
    cout << "---        SOAL 2      ---" << endl;
    cout << "--------------------------" << endl;
    int nisn;
    cout << "Masukkan NISN: ";
    cin >> nisn;
    pilihansoal(nisn);

    cout << "--------------------------" << endl;
    cout << "---        SOAL 3      ---" << endl;
    cout << "--------------------------" << endl;
    float rata_rata = hitungratarata();
    cout << "Rata-rata seluruh nilai siswa adalah: " << rata_rata << endl;

    return 0;
}
