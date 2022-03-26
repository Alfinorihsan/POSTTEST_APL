#include<iostream>
//Arahan preprosesor yang mencakupkonten file header C++ standar iosstream

using namespace std;
//Mengimpor keseluruhan "namespace std" ke namespace program

int seluruh_objek, objek_yang_diamati, selisih_n_dan_r, pilihan_user, pilihan_perulangan;
//penjelasan variabel :
//seluruh_objek : merupakan banyaknya objek keseluruhan (di lambangkan dengan "n")
//objek_yang_diamati : banyaknya objek yang diamati/diberi perlakuan (di lambangkan dengan "r")
//selisih_n_dan_r : merupakan selisih dari objek keseluruhan dengan objek yang diamati
//pilihan_user : merupakan inputan dari user untuk mengulang/memberhentikan program.

long double n_faktorial, r_faktorial, selisih_faktorial, hasil_operasi;
//n_faktorial : faktorial dari objek keseluruhan
//r_faktorial : faktorial dari objek yang di amati
//selisih_faktorial : selisih dari objek keseluruhan faktorial dengan faktorial dari objek yang diamati
//hasil_operasi : hasil operasi hitung yang di pilih user

bool perulangan;
//variabel yang di gunakan untuk mengulangi program 

main()            
//fungsi utama dari program
    {
    perulangan = true;
    while(perulangan)
        { 
        cout<<"Selamat datang di program penghitung Kombinasi dan Permutasi"<<endl // output
            <<"  "<<endl
            <<"Silahkan masukan keseluruhan objek(n) yang akan di operasikan : ";
        cin>>seluruh_objek; // input
        cout<<"Silahkan masukan banyaknya objek yang di perhatikan(r) : ";
        cin>>objek_yang_diamati;
        selisih_n_dan_r = seluruh_objek - objek_yang_diamati; // operasi untuk menemukan selisih dari n dan r
        n_faktorial = 1; 
        r_faktorial = 1;
        selisih_faktorial = 1;
        for(int nilai_sementara = 1;nilai_sementara<=seluruh_objek;nilai_sementara++)
            {                                                 // nilai_sementara : merupakan hasil sementara operasi hitung  
            n_faktorial *= nilai_sementara;
            }
        for(int nilai_sementara = 1;nilai_sementara<=objek_yang_diamati;nilai_sementara++)
            {
            r_faktorial *= nilai_sementara;
            }
        for(int nilai_sementara = 1;nilai_sementara<=selisih_n_dan_r;nilai_sementara++)
            {
            selisih_faktorial *= nilai_sementara;
            }
        while(true)
        //perulangan yang di tampilkan saat user ingin memulai/mengulangi program
            {
            cout<<"Operasi hitung yang ini di pilih :"<<endl
                <<"1. Operasi hitung kombinasi"<<endl
                <<"2. Operasi hitung Permutasi"<<endl;
            //user di minta untuk menginputkan pilihan operasi hitung
            cin>>pilihan_user;
            if(pilihan_user==1)
                {                                       // percabangan if pada kondisi pertama
                hasil_operasi = n_faktorial / (r_faktorial * selisih_faktorial);
                cout<<"hasil operasi kombinasi n dan r tersebut adalah : "<<hasil_operasi 
                <<"  "<<endl
                <<endl;
                break;
                }
            else if(pilihan_user==2)
                {                                   // percabangan else if pada kondisi kedua
                hasil_operasi = n_faktorial / selisih_faktorial;
                cout<<"hasil operasi permutasi n dan r tersebut adalah : "<<hasil_operasi 
                <<"  "<<endl
                <<endl;    
                }
                break;
                }
        while(true)
        {
            cout<<"Apakah anda ingin menggunakan program lagi? \njika ingin menggunakan program kembali, silahkan inputkan angka 1 (1/0) : "<<endl;
            //user diminta untuk menentukan apakah ingin mengulang program/mberhenti
            cin>>pilihan_perulangan;
            if(pilihan_perulangan==1)
                {
                break;
                //break digunakan untuk mengbentikan perulangan
                }
            else if(pilihan_perulangan==0)
                {
                perulangan = false;
                break;
                }
            }
        }
    }