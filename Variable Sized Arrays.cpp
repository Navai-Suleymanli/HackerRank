#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main() {
    /* Biz n elementli array yaratmaliyiq. sonra n-in sayi defe for loop run etmeliyik, ve bu 2 defe olacaq n-in qiymetine gore, ve her defesinde de k vectorunun olcusunu alib, k vectoru yaratmaliyiq. */  
    
    
    // n multidimensional vectorun elementlerinin sayidir. bu o demekdir ki bizim vectorun icinde n sayda vector olacaq. yeni biz n sayda vectorun vectorunu yardacayiq
    
    // q sorgularin sayidir, yeni sonda cavabi print etmek ucun, 2 defe print etmeliyik, bu da onun sayidir. 
    int n,q; 

    // arrayin nece elementi olacagini ve sondaki sorgunun sayini inout kimi aliriq
    cin >> n >> q;
    
    //2d array yaradiriq
    vector<vector<int>> a(n);
    
    // n defe vectorun boyunca gedeceyik
    for(int i; i<n; i++){
        int k_size; // yaradacagimiz k vectorunun olcusu
        cin >> k_size; // k vectorunun olcusunu input kimi aliriq.
        
        vector<int> k(k_size);  // en basda behs etdiyimiz k vectorunu yaradiriq
        
        for(int j =0; j<k_size; j++) // j vectorun icindeki vectorun indexini bildirir. ve k nin olcusunden kicik oldugu muddetce loop run olur. 
        {
            cin>>k[j]; /* input j ni aliriq ve bunun sayesinde k nin elementlerini doldururuq. Yeni j k nin olcusunden kicik oldugu muddetce istediyimiz reqemleri daxil
                        edeceyik sira ile, sonra inner loop bitecek, outer loop run olacaq, belede yene k_size muxtelif qiymet alacaq ve yene eyni proses bas verecek*/
        }
        a[i] = k;   /* a nin i-ci elementini k ya beraber edirik. yeni a daki meselen ikinci element k arrayina beraberdir, k da 2 dene m
                    muxtelif array qiymeti alacaq deye, a nin her bir elemnti bir muxtelif array olacaq*/
    }
    
    for(int z =0; z<q; z++) /* z deyiseni yaradib bunu sorgu sayindan kicik qoyuruq, yeni 2 den kicik. belede loop z in sayina uygun qeder defe run olacaq. 
                            biz de input kimi evvelce 0 i-nin yerine, 1 j nin yerine qoyacayiq, sonra da 1 i nin yerine, 3 j -nin yerine qoyacayiq.Belelikle teleb 
                            olunan outputlari vermekle meseleni hell etmis olacayiq*/
    {
        int i,j;
        cin >> i >>j ;
        
        cout<<a[i][j]<<endl;  // outputlari veririk ekrana
    }
    

    return 0;

}
