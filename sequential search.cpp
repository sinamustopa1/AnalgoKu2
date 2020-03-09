
#include <iostream>
using namespace std;

#include <conio.h>
#include <iomanip>


int main()
{
      int dataku[10] = {7,9,2,10,15,4,5};
      int caridata, i, flag = 0;

      cout<<"PENCARIAN DENGAN SEQUENTIAL SEARCH"<<endl;
      cout<<"----------------------------------"<<endl;
      cout<<"Data   : \n";
            for(int n=0; n<7; n++)
                  cout<<dataku[n]<<"\t";
      cout<<endl;

      cout<<"\nMasukkan data yang ingin Anda cari : ";
      cin>>caridata;

//sequential search
      for(i = 0; i<10; i++)
      {
            if(dataku[i]==caridata)
            {
                  flag = 1;
                  break;
            }
      }

//hasil
      if(flag==1)
            cout<<"Data ditemukan pada indek ke-"<<i<<endl;
      else
            cout<<"Data tidak ditemukan = 0"<<endl;
}
