#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int plg, lml, hrg, byr;
	
	cout<<"Apakah anda Pelanggan [0] Tidak & [1] Iya)= "; cin>>plg;
	cout<<"Berapa lembar yang akan difotokopi ="; cin>>lml;
	cout<<endl<<endl;
	
    if(plg==1){
		hrg=75;
		byr=lml*hrg;
	}
	else if(plg==0 && lml<=100){
		hrg=150;
		byr=lml*hrg;
	}
	else if(plg==0 && lml<=100 && lml==100 && lml>=100){
		hrg=100;
		byr=lml*hrg;
	}
	else if(plg==0 && lml>=200){
		hrg=80;
		byr=lml*hrg;
	}
	
	if(plg==0){
		cout<<"Apakah pelanggan=Tidak"<<endl;
	}
	else if(plg==1){
		cout<<"Apakah pelanggan=Iya"<<endl;
	}
	
	cout<<"Banyak Fotokopi="<<lml<<endl;
	cout<<"Harga Per Lembar="<<hrg<<endl;
	cout<<"Yang Harus Dibayarkan="<<byr<<endl;
	
	getch ();
	return 0;
}
