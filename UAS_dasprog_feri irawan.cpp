#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int pilihan_player;
    int pilihan_komputer;
    int mulai;
    cout << "\t \t \t  ======================================================================="<< endl;
    cout << "\t \t \t  = \t \t \t APLIKASI SEDERHANA  \t \t \t \t=\n";
    cout << "\t \t \t  = \t \t \t KERTAS GUNTING BATU \t \t \t \t=\n";
	cout << "\t \t \t  ======================================================================="<< endl << endl << endl;
	
	
	cout << "ketik bebas untuk mulai :";
	cin >> mulai;
	system ("cls");
	
	
    cout << "Kertas Gunting Batu\n";
    cout << "1. Kertas\n";
    cout << "2. Gunting\n";
    cout << "3. Batu\n";
    cout << "Pilih [1-3]: ";
    cin >> pilihan_player;
	system ("cls");
    
     pilihan_komputer = rand() % 3 + 1;

    if (pilihan_player == 1) { 
        if (pilihan_komputer == 1) {
            cout << "Komputer memilih kertas. Seri!" << endl;
        } else if (pilihan_komputer == 2) {
            cout << "Komputer memilih gunting. Anda kalah!" << endl;
        }
		
		else {
            cout << "Komputer memilih batu. Anda kalah!" << endl;
        }
    } else if (pilihan_player == 2) { 
        if (pilihan_komputer == 1) {
            cout << "Komputer memilih kertas. Anda kalah!" << endl;
        } else if (pilihan_komputer == 2) {
            cout << "Komputer memilih gunting. Seri!" << endl;
        } else {
            cout << "Komputer memilih batu. Anda menang!" << endl;
        }
    } else if (pilihan_player == 3) { 
        if (pilihan_komputer == 1) {
            cout << "Komputer memilih kertas. Anda menang!" << endl;
        } else if (pilihan_komputer == 2) {
            cout << "Komputer memilih gunting. Anda kalah!" << endl;
        } else {
            cout << "Komputer memilih batu. Seri!" << endl;
        }
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
} 
