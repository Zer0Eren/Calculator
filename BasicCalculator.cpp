#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int s1, s2, secim, sonuc = 0; // Sonucu varsayılan olarak 0 yap

    cout << "Birini Seç : 1-Topla | 2-Çıkar | 3-Çarp | 4-Böl: ";
    cin >> secim;
    cout << "İlk Sayıyı Giriniz: ";
    cin >> s1;
    cout << "İkinci Sayıyı Giriniz: ";
    cin >> s2;

    if (secim == 1) {
        sonuc = s1 + s2;
    } 
    else if (secim == 2) {
        sonuc = s1 - s2;
    } 
    else if (secim == 3) {
        sonuc = s1 * s2;
    } 
    else if (secim == 4) {
        if (s2 == 0) { // Sıfıra bölme kontrolü
            cout << "Hata: Bir sayıyı sıfıra bölemezsiniz!" << endl;
            return 1; // Programı hata ile sonlandır
        }
        sonuc = s1 / s2;
    } 
    else {
        cout << "Hata: Geçersiz seçim yaptınız!" << endl;
        return 1; // Programı hata ile sonlandır
    }

    // Eğer hata olmadan buraya kadar geldiyse sonucu ekrana yazdır
    cout << "Sonuç: " << sonuc << endl;
    return 0;
}
