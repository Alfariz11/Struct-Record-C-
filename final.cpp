#include <iostream>
using namespace std;


struct Data{
    string nim;
    string nama;
    string mk;
    int sks;
    string hm;
    float ksm;
};

float ksm(string huruf, int angka){    
        if(huruf=="a"||huruf=="A"){
            return 4*angka;
        } else if(huruf=="ab"||huruf=="AB"){ 
            return 3.5*angka;
        } else if(huruf=="b"||huruf=="B"){
            return 3*angka;
        } else if(huruf=="bc"||huruf=="BC"){
            return 2.5*angka;
        } else if (huruf=="c"||huruf=="C"){
            return 2*angka;
        } else if (huruf=="d"||huruf=="D"){
            return 1*angka;
        } else{
            return 0*angka;
        }
}

void carimahasiswa(Data mahasiswa[],int jumlah){
    string lanjut="ya";
    while (lanjut!="tidak"){
        string carinim, nama;
        int total=0;
        bool Cari=false;
        float ratarata=0;

        cout<<"Masukkan NIM yang ingin dicari : ";
        cin>>carinim;

        for (int i = 0; i < jumlah; i++){
            if(carinim==mahasiswa[i].nim){
                nama=mahasiswa[i].nama;
                Cari=true;
                total+=mahasiswa[i].sks;
                ratarata+=mahasiswa[i].ksm;
            }
        }
        if(Cari){
            cout<<"NIM Ditemukan atas nama "<<nama<<" dengan NR = "<<ratarata/total<<endl;
        }else{
            cout<<"NIM tidak ditemukan"<<endl;
        }

        cout<<"Apakah anda ingin mencari lagi (ya/tidak) ?  ";
        cin>>lanjut;

    }
    
}

int main()
{
    int data;
    string temukan;

    cout<<"Masukkan jumlah data yang ingin dimasukkan : ";
    cin>>data;
    cout<<endl;
    Data mahasiswa[data];
    for(int i =0 ;i<data; i++){
        cout<<"Input data mahasiswa ke-"<<i+1<<endl;
        cout<<endl;
        cout<<"Masukkan NIM mahasiswa    : ";
        cin>>mahasiswa[i].nim;
        cin.ignore();
        cout<<"Masukkan nama mahasiswa   : ";
        getline(cin,mahasiswa[i].nama);
        cout<<"Masukkan nama mata kuliah : ";
        getline(cin,mahasiswa[i].mk);
        cout<<"Masukkan jumlah sks       : ";
        cin>>mahasiswa[i].sks;
        cout<<"Masukkan huruf mutu (A/AB/B/BC/C/D/E): ";
        cin>>mahasiswa[i].hm;
        mahasiswa[i].ksm=ksm(mahasiswa[i].hm,mahasiswa[i].sks);
        cout<<endl;
    }
    cout<<"----------------------------------------------------------------"<<endl;
    for (int i = 0; i < data; i++){
        cout<<"Data mahasiswa ke-"<<i+1<<endl;
        cout<<endl;
        cout<<"NIM mahasiswa    : "<<mahasiswa[i].nim<<endl;
        cout<<"Nama mahasiswa   : "<<mahasiswa[i].nama<<endl;
        cout<<"Mata kuliah      : "<<mahasiswa[i].mk<<endl;
        cout<<"Jumlah sks       : "<<mahasiswa[i].sks<<endl;
        cout<<"Huruf mutu       : "<<mahasiswa[i].hm<<endl;
        cout<<"Nilai KSM        : "<<mahasiswa[i].ksm;
    
        cout<<endl;
    }
    carimahasiswa(mahasiswa,data);

    return 0;
}

    

        





    




