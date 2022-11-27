#include <iostream>
using namespace std;

int main(){
    int volume, s, hasil;
    	cout << "Tugas 2: Menghitung volume kubus";
    	cout << "\nNama: Amalia Zakia Zhk";
    	cout << "\nNIM: 2211510488";
    	cout << "\n--------------------------------------------------";
        cout << "\nMasukan sisi kubus: ";
        cin >> s;
    
    if(s <= 10){
    	
       hasil = s*s*s;
        cout << "volume kubus adalah: " << hasil;
        
    }else{
        cout << "sisi kubus harus bernilai 1 - 10!!";
    }
}