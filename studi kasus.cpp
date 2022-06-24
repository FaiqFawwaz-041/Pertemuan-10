#include <iostream>
using namespace std;

class node{
  public:
  void input();
  void proses();
  void output();

  private:
    int n;
    int *p_nim;
    int nim_mhs[10];
    string *p_nama;
    string name_mhs[10];
    

};

void node::input(){
     cout << "Jumlah Mahasiswa : ";cin>>n;
     for (int i=0; i<n; i++){
       cout<<"\nMasukkan NIM Mahasiswa "<<i+1<<"  : ";cin>>nim_mhs[i];
	     cin.ignore();
       cout<<"Masukkan Nama Mahasiswa "<<i+1<<" : ";getline(cin,name_mhs[i]);
     }
}

void node::proses(){
   p_nim = new int[n];
   p_nama = new string[n];
   for(int i=0; i<n; i++){
     
     *p_nim = nim_mhs[i];
     p_nim++;
     *p_nama = name_mhs[i];
     p_nama++;
   }
  }

void node::output(){
  p_nim  -=n;
  p_nama -=n;
  cout<<endl;
  cout<<"Daftar Mahasiswa Babak Final"<<endl;
  for (int i=0; i<n; i++) 
	{
    cout << "\n Nama : ";
    cout << *p_nama ;
    p_nama++;
    cout<<endl;
    cout << "\n NIM  : " ;
    cout << *p_nim ;
    p_nim++;
    cout<<endl;
  }
}

int main(){
  node x;
  x.input();
  x.proses();
  x.output();
}
