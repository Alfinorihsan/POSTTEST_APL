//file header C++
#include<iostream>

//library standar yang di gunakan di program
using namespace std;

//Deklarasi struck 
struct data_anime{
    string nama_anime;
    int tahun;
    float skor;
};

//Array untuk menampung peringkat dan pengurutan (adapun bernilai index 50, karena pada laman awal web tersebut ada 50 data)
data_anime peringkat[50];  

//prosedur yang di gunakan pada program 
void tampil(data_anime peringkat[], int jumlah_anime);
void tambah(data_anime peringkat[], int jumlah_anime);
void inputan(int &input);
void ubah(data_anime peringkat[]);
void hapus(data_anime peringkat[], int jumlah_anime);
void pilihan_pengurutan(int &input);
void pengurutan_tahun(data_anime peringkat[], int jumlah_anime, int urutan);
void pengurutan_skor(data_anime peringkat[], int jumlah_anime, int urutan);
bool keluar();

//prosedur untuk menampilkan data
void tampil(data_anime peringkat[], int jumlah_anime){
    cout << ".===================================================." << endl
         << "|    Top Anime Series (Dari Web MyAnimeList.net)    |" << endl
         << ".===================================================." << endl;
    if(jumlah_anime > 0){
        int ulangi = 0;
        while(ulangi < jumlah_anime){
            cout << ulangi+1 
                 << ". Nama Anime  : " << peringkat[ulangi].nama_anime << endl
                 << "   Tahun rilis : " << peringkat[ulangi].tahun << endl
                 << "   Skor        : " << peringkat[ulangi].skor << endl << endl;
            ulangi++;
        }
    }
    else{
        cout << "        -- Tidak ada data yang di inputkan --" << endl
             << endl;
    }
}

//Prosedur untuk menambahkan data
void tambah(data_anime peringkat[], int jumlah_anime){
    cout << "Masukkan nama Anime   : "; fflush(stdin); getline(cin, peringkat[jumlah_anime].nama_anime);
    cout << "Masukkan tahun rilis  : ";
    cin >> peringkat[jumlah_anime].tahun;
    cout << "Masukkan skor         : ";
    cin >> peringkat[jumlah_anime].skor;
}

//Prosedur untuk input memilih nomor urut di daftar menu
void inputan(int &inputan_noUrut){
    cout << "Silahkan masukkan Nomor Urut : " << endl;
    cin >> inputan_noUrut;
}

//Prosedur untuk mengubah data peringkat
void ubah(data_anime peringkat[]){
    int inputan_noUrut;
    inputan(inputan_noUrut);
    tambah(peringkat, inputan_noUrut-1);
}

///Prosedur menghapus salah satu data
void hapus(data_anime peringkat[], int jumlah_anime){
    int inputan_hapus;
    inputan(inputan_hapus);
    for(int x = 0;x < jumlah_anime;x++){
        if(x == inputan_hapus-1){
            for(int y = x;y<jumlah_anime-1;y++){
                peringkat[y] = peringkat[y+1];
            }
            x--;
            jumlah_anime--;
            cout << " -- Data anime telah di hapus -- " << endl;
            return;
        }
    }
}

//Prosedur untuk memilih jenis pengurutan

void pilihan_pengurutan(int &input){
    cout << " -- Silahkan pilih pengurutan berdasarkan -- " << endl
         << endl 
         << " 1. Dari paling kecil ke paling besar" << endl
         << " 2. Dari paling besar ke paling kecil" << endl
         << "Silahkan masukkan salah satu pilih (1/2) : ";
         cin >> input;
    }

//prosedur untuk pengalihkan/menukar isi data 
void pengalihan(data_anime *data_pertama, data_anime *data_kedua){ 
    data_anime data_temporer = *data_pertama; 
    *data_pertama = *data_kedua; 
    *data_kedua = data_temporer; 
}

//Prosedur untuk mengurutkan data tahun rilis dengan metode bubble sort
void pengurutan_tahun(data_anime peringkat[], int jumlah_anime, int urutan){
    int i, j;
    bool ditukar;
    switch(urutan){
        case 1:
            for(i = 0; i < jumlah_anime-1; i++){
                ditukar = false;
                for (j = 0; j < jumlah_anime-i-1; j++){
                    if (peringkat[j].tahun > peringkat[j+1].tahun){
                        pengalihan(&peringkat[j], &peringkat[j+1]);
                        ditukar = true;
                    }
                }
                if (ditukar == false)
                break;
            }
            break;
        case 2:
            for(i = 0; i < jumlah_anime-1; i++){
                ditukar = false;
                for (j = 0; j < jumlah_anime-i-1; j++){
                    if (peringkat[j].tahun < peringkat[j+1].tahun){
                        pengalihan(&peringkat[j], &peringkat[j+1]);
                        ditukar = true;
                    }
                }
                if (ditukar == false)
                break;
            }
            break;
    }
}

//Prosedur untuk megurutkan skor dengan metode selection sort
void pengurutan_skor(data_anime peringkat[], int jumlah_anime, int urutan){ 
    int i, j, nilai_paling_kecil;
    switch(urutan){
        case 1:
            for (i = 0; i < jumlah_anime-1; i++){ 
                nilai_paling_kecil = i; 
                for (j = i+1; j < jumlah_anime; j++){
                    if (peringkat[j].skor < peringkat[nilai_paling_kecil].skor){
                        nilai_paling_kecil = j; 
                    }
                    pengalihan (&peringkat[nilai_paling_kecil], &peringkat[i]); 
                }
            }
            break;
        case 2:
            for (i = 0; i < jumlah_anime-1; i++){ 
                nilai_paling_kecil = i; 
                for (j = i+1; j < jumlah_anime; j++){
                    if (peringkat[j].skor > peringkat[nilai_paling_kecil].skor){
                        nilai_paling_kecil = j; 
                    }
                    pengalihan (&peringkat[nilai_paling_kecil], &peringkat[i]); 
                }
            }
            break;
    }
} 


//Prosedur untuk keluar dari program
bool keluar(){
    return false;
}

//program utama
int main(){
    //Deklrasi variabel local main
    int input, jumlah_anime = 0;;
    bool loop = true;

    //peruangan untuk menampilkan menu utama
    while(loop == true){
        cout << ".===================================================." << endl
             << "|    Top Anime Series (Dari Web MyAnimeList.net)    |" << endl
             << ".===================================================." << endl
             << endl
             << " Daftar Menu : " << endl
             << " 1. Tampilkan Seluruh data. " << endl
             << " 2. Tambahkan ke anime ke daftar peringkat. " << endl
             << " 3. Ubah peringkat. " << endl
             << " 4. Hapus anime dari daftar peringkat.  " << endl
             << " 5. Urutkan data. " << endl
             << " 6. Keluar. " << endl
             << endl
             << "Silahkan inputkan pilihan : ";
        cin >> input;

        //Berbagai kasus yang bisa di pilih user
        switch(input){
            case 1:
                //menampilkan data
                tampil(peringkat, jumlah_anime);
                break;

            case 2:
                //menambahkan data
                tambah(peringkat, jumlah_anime);
                jumlah_anime++;
                cout << endl
                     << "-- Anime Tersebut telah di tambahkan ke daftar peringkat --" << endl
                     << endl;
                break;

            case 3:
                //mengubah data 
                tampil(peringkat, jumlah_anime);
                if(jumlah_anime == 0){
                    break;
                }
                ubah(peringkat);
                cout << endl
                     << "-- Peringkat telah di ubah --" << endl
                     << endl;
                break;
    
            case 4:
                //mengahapus data 
                tampil(peringkat, jumlah_anime);
                if(jumlah_anime == 0){
                    break;
                }
                hapus(peringkat, jumlah_anime);
                jumlah_anime--;
                cout << endl
                     << "-- Anime Tersebut telah di hapus dari daftar peringkat --" << endl
                     << endl;
                break;

            case 5:
                    //Menampilkan peringkat berdasarkan 
                    cout << "Tampilkan Dengan Urutan Berdasarkan: " << endl
                         << " 1. Tahun rilis" << endl
                         << " 2. Skor" << endl
                         << "Masukan pilihan : ";
                         cin >> input;

                    //Percabangan pilihan pengurutan saat pengguna ingin menampilkan data
                    if(input == 1){
                        pilihan_pengurutan(input);
                        if(input == 1){
                            pengurutan_tahun(peringkat, jumlah_anime, 1);
                            tampil(peringkat, jumlah_anime);
                        }
                        else if(input == 2){
                            pengurutan_tahun(peringkat, jumlah_anime, 2);
                            tampil(peringkat, jumlah_anime);
                        }
                        else{
                            cout << "!! MOHON PERHATIKAN INPUTAN !!" << endl;
                        }
                    }
                    else if(input == 2){
                        pilihan_pengurutan(input);
                        if(input == 1){
                            pengurutan_skor(peringkat, jumlah_anime, 1);
                            tampil(peringkat, jumlah_anime);
                        }
                        else if(input == 2){
                            pengurutan_skor(peringkat, jumlah_anime, 2);
                            tampil(peringkat, jumlah_anime);
                        }
                        else{
                            cout << "!! MOHON PERHATIKAN INPUTAN !!" << endl;
                        }
                    }
        
                    else{
                        cout << "!! MOHON PERHATIKAN INPUTAN !!" << endl;
                    }
                    break;   
            
            case 6:
                //keluar dari program
                loop = keluar();
                cout  <<  "-- Terima kasih telah menggunakan program, Semoga harimu menyenangkan --" << endl;
                break;
        }
    }
}