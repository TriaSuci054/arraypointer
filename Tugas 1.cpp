#include<iostream>
using namespace std;
main()
    {  
    char nama [30], nim[10];  
    float nilai1, nilai2, nilai3, totalnilai;  
   
  cout<<"============================="<<endl;  
  cout<<"Program Grade Nilai Mahasiswa"<<endl;  
  cout<<"============================="<<endl;  
  cout<<endl;  
  cout<<"Masukan Nama  : ";  
  gets(nama);  
  cout<<"Masukan NIM  : ";  
  cin>>nim;  
  cout<<endl;  
  cout<<"Masukkan Nilai Tugas : "; cin>>nilai1;  
  cout<<"Masukkan Nilai UTS : "; cin>>nilai2;  
  cout<<"Masukkan Nilai UAS : "; cin>>nilai3;  
    
  totalnilai=(nilai1*0.2+nilai2*0.4+nilai3*0.4);  
  cout<<endl;  
  cout<<"============================="<<endl;  
  cout<<"Nama Mahasiswa  : "<<nama<<endl; 
  cout<<"NIM Mahasiswa  : "<<nim<<endl;
  
  if    (totalnilai >=90 && totalnilai <=100)  
   cout<<"Grade Nilai  : A"<<endl;  
    
   else if (totalnilai >=80 && totalnilai <=90)  
    
   cout<<"Grade Nilai  : B"<<endl;  
    
   else if (totalnilai >=70 && totalnilai <=80)  
    
   cout<<"Grade Nilai  : C"<<endl;  
    
   else if (totalnilai >=60 && totalnilai <=70)  
    
   cout<<"Grade Nilai  : D"<<endl;  
    
   else if (totalnilai >=50 && totalnilai <=60)  
    
   cout<<"Grade Nilai  : E"<<endl; 
   
   
  cout<<"Total Nilai  : "<<totalnilai<<endl;  
  cout<<"============================="<<endl;  
  cout<<endl;  
    }

 

