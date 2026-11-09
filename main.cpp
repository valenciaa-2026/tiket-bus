#include <iostream>
using namespace std;
void pesanTiket(string tujuan, int harga) {
    int jumlah, total;
    string nama[7];
    int i;

    cout<<"Tujuan: " <<tujuan <<endl;
    cout<<"Harga tiket: Rp" <<harga <<endl;

    cout<<"Silahkan memesan tiket, maksimal pemesanan 7 tiket." <<endl;
    cout<<"Jumlah tiket: ";
    cin>>jumlah;
            if(jumlah < 8){
                for(int i=0;i<jumlah;i++){
                    cout<<"Nama penumpang ke-"
                    <<i+1 <<": ";
                    cin>>nama[i];
                }
            }else{
                cout<<"Maksimal pemesanan hanya sampai 7 tiket.";
                return;
            }

    total=harga*jumlah;

    cout<<"===== DETAIL PEMESANAN =====" <<endl;
    cout<<"Tujuan: " <<tujuan <<endl;
    cout<<"Harga tiket: Rp" <<harga <<endl;
    cout<<"Jumlah penumpang: " <<jumlah <<endl;
    cout<<"Total: Rp" <<total <<endl;
}

int main() {
    int pilihan;

    cout<<"===== PEMESANAN TIKET BUS =====" <<endl;
    cout<<"1. Malang - Surabaya : Rp35000" <<endl;
    cout<<"2. Malang - Pasuruan : Rp20000" <<endl;
    cout<<"3. Malang - Jombang : Rp25000" <<endl;

    cout<<"Pilih tujuan (1-3): ";
    cin>>pilihan;

    if(pilihan==1) {
        pesanTiket("Malang - Surabaya", 35000);
    }
    else if(pilihan==2) {
        pesanTiket("Malang - Pasuruan", 20000);
    }
    else if(pilihan==3) {
        pesanTiket("Malang - Jombang", 25000);
    }
    else {
        cout<<"Pilihan tidak tersedia!" <<endl;
    }
    system("pause");
    return 0;
}
