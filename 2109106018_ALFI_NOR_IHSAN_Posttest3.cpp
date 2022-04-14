//file header C++
#include <iostream>

//library standar yang di gunakan di program
using namespace std;

// Fungsi-fungsi dari operasi hitung dua dan tiga variabel (tambah, kurang, kali, bagi dan sisa bagi)
//penjumlahan
int tambah( int angka_pertama, int angka_kedua){
  return angka_pertama + angka_kedua ;
}

int tambah( int angka_pertama, int angka_kedua, int angka_ketiga){
  return angka_pertama + angka_kedua + angka_ketiga ;
}

//pengurangan
int kurang( int angka_pertama, int angka_kedua){
  return angka_pertama - angka_kedua ;
}

int kurang( int angka_pertama, int angka_kedua, int angka_ketiga){
  return angka_pertama - angka_kedua - angka_ketiga ;
}

//perkalian
int kali( int angka_pertama, int angka_kedua){
  return angka_pertama * angka_kedua;
}

int kali( int angka_pertama, int angka_kedua, int angka_ketiga){
  return angka_pertama * angka_kedua * angka_ketiga ;
}

//pembagian
int bagi( int angka_pertama, int angka_kedua){
  return angka_pertama / angka_kedua;
}

int bagi( int angka_pertama, int angka_kedua, int angka_ketiga){
  return angka_pertama / angka_kedua / angka_ketiga ;
}

//sisa bagia atau modulus
int sisabagi( int angka_pertama, int angka_kedua){
  return angka_pertama % angka_kedua;
}

int sisabagi( int angka_pertama, int angka_kedua, int angka_ketiga){
  return angka_pertama % angka_kedua % angka_ketiga ;
}

//prosedur untuk menampilkan judul program
void judul_program(){
    cout << ".......................................... " << endl
         << ".      Program kalkulator sederhana      . " << endl
         << ".           Oleh Alfi Nor Ihsan          . " << endl
         << ".              2109106018                . " << endl
         << ".......................................... " << endl
         << endl;
}

//Fungsi utama dari program
int main(){

//Tipe data dari berbagai variabel yang di gunakan
int operasi_hitung, angka_pertama, angka_kedua, angka_ketiga, hasil_operasi;
string jumlah_variabel;
for (int i=1;i>0;i++){
//menampilkan judul program
judul_program();

//User di minta untuk menentukan banyak variabel dari perhitungan yang di inginkan
cout << "------------------------------------------ " << endl
     << "a. Dua variabel " << endl
     << "b. Tiga variabel " << endl
     << "c. Keluar"<<endl
     << endl;
cout << "masukan pilihan variabel : ";cin>>jumlah_variabel;

    // kondisi jika user ingin menghitung 2 variabel
    if (jumlah_variabel == "a"){

        //operasi hitung yang tersedia
        cout << "------------------------------------------" << endl
             << "1. Penjumlahan" << endl
             << "2. Pengurangan" << endl
             << "3. Perkalian" << endl
             << "4. Pembagian" << endl
             << "5. modulus" << endl
             << endl;

        //angka yang ingin di operasikan user
        cout << "masukan pilihan operasi : ";cin >> operasi_hitung;
        cout << "------------------------------------------" << endl;
        cout << "Silahkan inputkan angka pertama : " ;
        cin >> angka_pertama;

        cout << "Silahkan inputkan angka kedua : " ;
        cin >> angka_kedua;
        cout << endl;

            //kondisi setiap macam operasi yang di pilih user yang memiliki 2 variabel
            //penjumlahan
            if (operasi_hitung == 1){
              hasil_operasi = tambah(angka_pertama, angka_kedua);
              cout << angka_pertama <<  " + " << angka_kedua << " = " << hasil_operasi << " <---" << endl;
            }

            //pengurangan
            if (operasi_hitung == 2){
                hasil_operasi = kurang(angka_pertama, angka_kedua);
                cout <<  angka_pertama  <<  " - " << angka_kedua << " = " << hasil_operasi << " <---" << endl;
            }

            //perkalian
            if (operasi_hitung == 3){
                hasil_operasi = kali(angka_pertama, angka_kedua);
                cout << angka_pertama <<  " x " << angka_kedua << " = " << hasil_operasi << " <---" << endl;
            }

            //pembagian
            if (operasi_hitung == 4){
                hasil_operasi = bagi(angka_pertama, angka_kedua);
                cout << angka_pertama <<  " / " << angka_kedua << " = " << hasil_operasi << " <---" << endl;
            }

            //modulus
            if (operasi_hitung == 5){
                hasil_operasi = sisabagi(angka_pertama, angka_kedua);
                cout << angka_pertama <<  " % " << angka_kedua << " = " << hasil_operasi << " <---" << endl;
            }
        }

    //kondisi jika user ingin menghitung 3 variabel
    if (jumlah_variabel == "b"){
        cout << "------------------------------------------" << endl
                << "1. Penjumlahan" << endl
                << "2. Pengurangan" << endl
                << "3. Perkalian" << endl
                << "4. Pembagian" << endl
                << "5. modulus" << endl
                << endl;

        //operasi hitung yang di ingin kan user dan angka yang ingin di operasikan
        cout << "masukan pilihan operasi : "; cin >> operasi_hitung;
        cout << "------------------------------------------" << endl;
        cout << "Silahkan inputkan angka pertama : " ;
        cin >> angka_pertama;

        cout << "Silahkan inputkan angka kedua : " ;
        cin >> angka_kedua;

        cout << "Silahkan inputkan angka ketiga : " ;
        cin >> angka_ketiga;

            //kondisi setiap macam operasi yang di pilih user yang memiliki 3 variabel

            //penjumlahan
            if (operasi_hitung == 1){
                hasil_operasi = tambah(angka_pertama, angka_kedua, angka_ketiga);
                cout << angka_pertama  <<  " + " << angka_kedua << " + " << angka_ketiga << " = " << hasil_operasi << " <---" << endl;
            }

            //pengurangan
            if (operasi_hitung == 2){
                hasil_operasi = kurang(angka_pertama, angka_kedua, angka_ketiga);
                cout << angka_pertama  <<  " - " << angka_kedua << " - " << angka_ketiga << " = " << hasil_operasi << " <---" << endl;
            }

            //perkalian
            if (operasi_hitung == 3){
                hasil_operasi = kali(angka_pertama, angka_kedua, angka_ketiga);
                cout << angka_pertama  <<  " x " << angka_kedua << " x " << angka_ketiga << " = " << hasil_operasi << " <---" << endl;
            }

            //pembagian
            if (operasi_hitung == 4){
                hasil_operasi = bagi(angka_pertama, angka_kedua, angka_ketiga);
                cout << angka_pertama  <<  " / " << angka_kedua << " / " << angka_ketiga << " = " << hasil_operasi << " <---" << endl;
            }

            //modulus
            if (operasi_hitung == 5){
                hasil_operasi = sisabagi(angka_pertama, angka_kedua, angka_ketiga);
                cout << angka_pertama  <<  " % " << angka_kedua << " % " << angka_ketiga << " = " << hasil_operasi << " <---" << endl;
            }
        }
    if (jumlah_variabel== "c" ){
//ungkapan terima kasih karena telah menggunakan program
        cout << "~ Terima kasih sudah menggunakan program, Semoga harimu menyenangkan ~" << endl
             << endl;
        break;
        }
    }
}
