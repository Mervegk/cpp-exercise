// cpp-exercise.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	
	int n1, n2, n3, n4, r1, r2, r3;
	cout << "First number: " << endl;
	cin >> n1;
	cout << "\n" << endl;
	cout << "Second number: " << endl;
	cin >> n2;
	cout << "\n" << endl;
	cout << "Third number: " << endl;
	cin >> n3;
	cout << "\n" << endl;
	cout << "Fourth number: " << endl;
	cin >> n4;
	cout << "\n" << endl;

	r1 = --n1 + n2;
	r2 = ++n3 * n4;

	r3 = r1 + r2;

	cout << "Result: " << r3 % 2 << endl;



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
