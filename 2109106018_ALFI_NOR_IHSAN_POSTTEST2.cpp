// File header c++
#include<iostream>
#include<iomanip>
using namespace std;

// Deklarasi variabel dan array 5x5
int index_1, index_2, x, y;
int alfi_18[5][5];

// Fungsi main di program
int main()
    {
    // Perulanagan untuk mendapat nilai elemen 
    for (index_1 = 0; index_1 < 5; index_1++)
        {
        for (index_2 = 0; index_2 < 5; index_2++)
            {
            // Variabel x dan y merupakan baris dan kolom pada matriks
            x = index_1;
            y = index_2;

            // Rumus yang di gunakan untuk nilai matriks
            alfi_18[index_1][index_2] = (((18*x) * (y + 18) / 18));
            }
        }
    // Judul program dan matriks 5x5
    cout << "~ Membuat array 5x5 dan menampilkan nilai serta alamat dari setiap element array dengan pointer ~" << endl
         << "-------------------------------------------------------------------------------------------------" << endl
         << "Matriks alfi_18 (5x5) :" << endl
         << "----------------------" << endl;

    //perulangan untuk membentuk matriks 5x5
    for (index_1 = 0; index_1 < 5; index_1++)
        {
        for (index_2 = 0; index_2 < 5; index_2++)
            {
            cout << setw(6) << alfi_18[index_1][index_2]; 
            }
        cout << endl;
        }
    cout << "------------------------------" << endl;

    // Perulangan untuk untuk mendapat nilai dan alamat
    for (index_1 = 0; index_1 < 5; index_1++)
        {
        for (index_2 = 0; index_2 < 5; index_2++)
            {
            // Pointer yang digunakan untuk menampilkan nilai dan alamat
            int *pointer = alfi_18[index_1];
            cout << "Di " << "[" << index_1 << "," << index_2 << "]" << " nilainya " << *(pointer + index_2) << endl
                 << "Dan alamatnya " << pointer + index_2 << endl
                 << "----------------------------" << endl;
            }
        }
    //Nilai yang di kembalikan
    cout << "Terima kasih tekah menggunakan program, semoga harimu menyenangkan";
    return 0;
    }
