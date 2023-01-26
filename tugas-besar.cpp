// Bot
// 1. Identitas pembeli
// 2. Konfirmasi mahasiswa atau bukan
// 3. Tampilkan "Selamat datang <nama> di Angkringan Kezel, mau pesan apa?"
// 4. Tampilkan pilihan menu yang ada di angkringan
// 5. Menu :
// Makanan : 
// -> Ayam goreng/bakar => 20rb
// -> Usus goreng => 6rb
// -> Kulit goreng => 6rb
// -> Lele goreng => 7rb
// -> Ati ampela => 6rb
// -> Karedok => 10rb
// -> Pepes ayam => 22rb
// -> Pepes tahu => 7rb
// -> Tempe => 2rb
// -> Tahu => 2rb
// -> Telur puyuh rebus => 5rb
// -> Sayur asem => 10rb
// -> Nasi biasa => 8rb
// -> Nasi uduk => 12rb
// -> Nasi rames => 10rb
// Minuman :
// -> Teh manis hangat/dingin => 10rb
// -> Air mineral biasa/dingin => 5rb
// -> Es jeruk => 12rb
// -> Es kelapa => 12rb
// -> Bajigur => 5rb
// -> Bandrek => 5rb
// 6. Bonus es jeruk jika pembelian lebih dari 50rb
// 7. Khusus mahasiswa bonus es jeruk jika pembelian lebih dari 30rb

#include <iostream>
using namespace std;
string daftarMakanan[] = {"Ayam goreng/bakar (20rb)", "Usus goreng (6rb)", "Kulit goreng (6rb)", "Lele goreng (7rb)", "Ati ampela (6rb)", "Karedok (10rb)", "Pepes ayam (22rb)", "Pepes tahu (7rb)", "Tempe (2rb)", "Tahu (2rb)", "Telur puyuh rebus (5rb)", "Sayur asem (10rb)", "Nasi biasa (8rb)", "Nasi uduk (12rb)", "Nasi rames (10rb)", "Tidak, saya hanya ingin beli minuman"};
string daftarMinuman[] = {"Teh manis hangat/dingin (10rb)", "Air mineral biasa/dingin (5rb)", "Es jeruk (12rb)", "Es kelapa (12rb)", "Bajigur (5rb)", "Bandrek (5rb)", "Tidak, saya hanya ingin beli makanan"};
string pilih, back, nama;
int inputMakanan, inputMinuman, hargaMakanan, hargaMinuman, total = 0, pembayaran, kembalian, konfirmasiMahasiswa, jumlahMakanan, jumlahMinuman; 

void makanan() {
    cout << "Daftar makanan : " << endl;
    for (int i = 0; i < sizeof(daftarMakanan) / sizeof(string); i++) { // string = 4, 1 elemen = 4, daftarMakanan = 64 => 16 * 4
        cout << i + 1 << ". " << daftarMakanan[i] << endl;
    }
    cout << "Pilih makanan (1-15) : ";
    cin >> inputMakanan;
}

int totalBeli (int hargaMakanan, int hargaMinuman, int jumlahMakanan, int jumlahMinuman) {
    return total += (hargaMakanan * jumlahMakanan) + (hargaMinuman * jumlahMinuman);
}

int inputJumlahMakanan() {
    // int jumlahMakanan;
    cout << "Masukan jumlah makanan : ";
    cin >> jumlahMakanan;

    return jumlahMakanan;
}

void minuman() {
    cout << "Daftar minuman : " << endl;
    for (int i = 0; i < sizeof(daftarMinuman) / sizeof(string); i++) { // daftarMinuman = 28 => 7 * 4
        cout << i + 1 << ". " << daftarMinuman[i] << endl;
    }
    cout << "Pilih minuman (1-6) : ";
    cin >> inputMinuman;
}

int inputJumlahMinuman() {
    // int jumlahMinuman;
    cout << "Masukan jumlah minuman : ";
    cin >> jumlahMinuman;

    return jumlahMinuman;
}

int main() {
    cout << "Siapa nama anda? ";
    getline(cin >> ws, nama);
    string greeting = "\nSelamat datang di Angkringan Kezel "+ nama +", mau pesan apa?\n";
    do {
        cout << "Apakah anda mahasiswa?";
        cout << "\n1. Ya, saya mahasiswa\n2. Bukan, saya bukan mahasiswa";
        cout << "\nPilih (1 & 2) : ";
        cin >> konfirmasiMahasiswa;
        if(konfirmasiMahasiswa != 1 && konfirmasiMahasiswa != 2) {
            cout << "Pilihan tidak tersedia\n" << endl;
        }
    } while (konfirmasiMahasiswa != 1 && konfirmasiMahasiswa != 2);
    
    cout << greeting;

    switch (konfirmasiMahasiswa)
    {
    case 1:
        do {
            makanan();
            switch (inputMakanan)
            {
            case 1:
                cout << "Goreng atau bakar? ";
                cin >> pilih;
                if (pilih == "Goreng" || pilih == "GORENG" || pilih == "goreng") {
                    cout << "Anda memilih ayam goreng" << endl;
                    hargaMakanan = 20000;
                    inputJumlahMakanan();
                } else if (pilih == "Bakar" || pilih == "BAKAR" || pilih == "bakar") {
                    cout << "Anda memilih ayam bakar" << endl;
                    hargaMakanan = 20000;
                    inputJumlahMakanan();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 2:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 3:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 4:
                hargaMakanan = 7000;
                inputJumlahMakanan();
                break;
            case 5:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 6:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 7:
                hargaMakanan = 22000;
                inputJumlahMakanan();
                break;
            case 8:
                hargaMakanan = 7000;
                inputJumlahMakanan();
                break;
            case 9:
                hargaMakanan = 2000;
                inputJumlahMakanan();
                break;
            case 10:
                hargaMakanan = 2000;
                inputJumlahMakanan();
                break;
            case 11:
                hargaMakanan = 5000;
                inputJumlahMakanan();
                break;
            case 12:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 13:
                hargaMakanan = 8000;
                inputJumlahMakanan();
                break;
            case 14:
                hargaMakanan = 12000;
                inputJumlahMakanan();
                break;
            case 15:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 16:
                hargaMakanan = 0;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
            }

            // Minuman
            minuman();
            switch (inputMinuman)
            {
            case 1:
                cout << "Dingin atau hangat? ";
                cin >> pilih;
                if (pilih == "Dingin" || pilih == "DINGIN" || pilih == "dingin") {
                    cout << "Anda memilih teh manis dingin" << endl;
                    hargaMinuman = 10000;
                    inputJumlahMinuman();
                } else if (pilih == "Hangat" || pilih == "HANGAT" || pilih == "hangat") {
                    cout << "Anda memilih teh manis hangat" << endl;
                    hargaMinuman = 10000;
                    inputJumlahMinuman();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 2:
                cout << "Biasa atau dingin? ";
                cin >> pilih;
                if (pilih == "Dingin" || pilih == "DINGIN" || pilih == "dingin") {
                    cout << "Anda memilih air mineral dingin" << endl;
                    hargaMinuman = 5000;
                    inputJumlahMinuman();
                } else if (pilih == "Biasa" || pilih == "BIASA" || pilih == "biasa") {
                    cout << "Anda memilih air mineral biasa" << endl;
                    hargaMinuman = 5000;
                    inputJumlahMinuman();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 3:
                hargaMinuman = 12000;
                inputJumlahMinuman();
                break;
            case 4:
                hargaMinuman = 12000;
                inputJumlahMinuman();
                break;
            case 5:
                hargaMinuman = 5000;
                inputJumlahMinuman();
                break;
            case 6:
                hargaMinuman = 5000;
                inputJumlahMinuman();
                break;
            case 7:
                hargaMinuman = 0;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
            }

            totalBeli(hargaMakanan, hargaMinuman, jumlahMakanan, jumlahMinuman);
            // total += (hargaMakanan * jumlahMakanan) + (hargaMinuman * jumlahMinuman);
            cout << "Total harga yang anda beli : Rp. " << total << endl;
            if(total >= 30000) {
                cout << "Pembelian anda lebih dari 30rb, anda mendapat gratis es jeruk" << endl;
            }
            cout << "\nIngin membeli yang lain? (ya/tidak) ";
            cin >> back;
        
        } while(back == "YA" || back == "Ya" || back == "ya" || back == "yA");
        break;
    
    case 2:
        do {
            // cout << greeting;
            makanan();
            switch (inputMakanan)
            {
            case 1:
                cout << "Goreng atau bakar? ";
                cin >> pilih;
                if (pilih == "Goreng" || pilih == "GORENG" || pilih == "goreng") {
                    cout << "Anda memilih ayam goreng" << endl;
                    hargaMakanan = 20000;
                    inputJumlahMakanan();
                } else if (pilih == "Bakar" || pilih == "BAKAR" || pilih == "bakar") {
                    cout << "Anda memilih ayam bakar" << endl;
                    hargaMakanan = 20000;
                    inputJumlahMakanan();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 2:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 3:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 4:
                hargaMakanan = 7000;
                inputJumlahMakanan();
                break;
            case 5:
                hargaMakanan = 6000;
                inputJumlahMakanan();
                break;
            case 6:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 7:
                hargaMakanan = 22000;
                inputJumlahMakanan();
                break;
            case 8:
                hargaMakanan = 7000;
                inputJumlahMakanan();
                break;
            case 9:
                hargaMakanan = 2000;
                inputJumlahMakanan();
                break;
            case 10:
                hargaMakanan = 2000;
                inputJumlahMakanan();
                break;
            case 11:
                hargaMakanan = 5000;
                inputJumlahMakanan();
                break;
            case 12:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 13:
                hargaMakanan = 8000;
                inputJumlahMakanan();
                break;
            case 14:
                hargaMakanan = 12000;
                inputJumlahMakanan();
                break;
            case 15:
                hargaMakanan = 10000;
                inputJumlahMakanan();
                break;
            case 16:
                hargaMakanan = 0;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
            }

            // Minuman
            minuman();
            switch (inputMinuman)
            {
            case 1:
                cout << "Dingin atau hangat? ";
                cin >> pilih;
                if (pilih == "Dingin" || pilih == "DINGIN" || pilih == "dingin") {
                    cout << "Anda memilih teh manis dingin" << endl;
                    hargaMinuman = 10000;
                    inputJumlahMinuman();
                } else if (pilih == "Hangat" || pilih == "HANGAT" || pilih == "hangat") {
                    cout << "Anda memilih teh manis hangat" << endl;
                    hargaMinuman = 10000;
                    inputJumlahMinuman();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 2:
                cout << "Biasa atau dingin? ";
                cin >> pilih;
                if (pilih == "Dingin" || pilih == "DINGIN" || pilih == "dingin") {
                    cout << "Anda memilih air mineral dingin" << endl;
                    hargaMinuman = 5000;
                    inputJumlahMinuman();
                } else if (pilih == "Biasa" || pilih == "BIASA" || pilih == "biasa") {
                    cout << "Anda memilih air mineral biasa" << endl;
                    hargaMinuman = 5000;
                    inputJumlahMinuman();
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;
            case 3:
                hargaMinuman = 12000;
                inputJumlahMinuman();
                break;
            case 4:
                hargaMinuman = 12000;
                inputJumlahMinuman();
                break;
            case 5:
                hargaMinuman = 5000;
                inputJumlahMinuman();
                break;
            case 6:
                hargaMinuman = 5000;
                inputJumlahMinuman();
                break;
            case 7:
                hargaMinuman = 0;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
            }

            totalBeli(hargaMakanan, hargaMinuman, jumlahMakanan, jumlahMinuman);
            // total += (hargaMakanan * jumlahMakanan) + (hargaMinuman * jumlahMinuman);
            cout << "Total harga yang anda beli : Rp. " << total << endl;
            if(total >= 50000) {
                cout << "Pembelian anda lebih dari 50rb, anda mendapat gratis es jeruk" << endl;
            }
            cout << "\nIngin membeli yang lain? (ya/tidak) ";
            cin >> back;
            
        } while(back == "YA" || back == "Ya" || back == "ya" || back == "yA");

    default:
        cout << "Maaf, pilihan tidak tersedia" << endl;
        break;
    }
    
    do {
        cout << "\nMasukan uang pembayaran : Rp. ";
        cin >> pembayaran;
        kembalian = pembayaran - total;
        if(kembalian > 0) {
            cout << "\nKembalian anda : Rp. " << kembalian;
        }
        if(pembayaran < total) {
            cout << "\nMaaf, pembayaran anda kurang";
        }
    } while (pembayaran < total);
    
    cout << "\n\nTerima kasih sudah mengunjungi, semogsa hari anda menyenangkan" << endl;
}