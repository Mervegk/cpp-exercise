// cpp-exercise.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	
	int n1, n2, n3;
	int r1, r2, r3;

	cout << "First number: ";
	cin >> n1;

	cout << "Second number: ";
	cin >> n2;

	cout << "Third number: ";
	cin >> n3;
	cout << "\n" << endl;
	if (n1 > n2 && n1 > n3) {
		r1 = n2 + n3;
		cout << "Sum of the small numbers: " << r1 << endl;
		if (r1 > n1) {
			cout << "Congratulations!" << endl;
		}
		else {
			cout << "Unfortunately" << endl;
		}
	}
	else if (n2 > n1 && n2 > n3) {
		r1 = n1 + n3;
		cout << "Sum of the small numbers: " << r1 << endl;
		if (r1 > n2) {
			cout << "Congratulations!" << endl;
		}
		else {
			cout << "Unfortunately" << endl;
		}
	}
	else if (n3 > n1 && n3 > n2) {
		r1 = n2 + n1;
		cout << "Sum of the small numbers: " << r1 << endl;
		if (r1 > n3) {
			cout << "Congratulations!" << endl;
		}
		else {
			cout << "Unfortunately" << endl;
		}
	}
	else
		return 0;



	



}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
