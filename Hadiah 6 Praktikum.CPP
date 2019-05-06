#include <iostream.h>
#include <conio.h>
#include <string.h>

int main ()
{
   char kproduk [10];
   char *buatan;
   char *processor;

   cout<<" Masukkan Kode Produk  : "; cin>>kproduk;
   switch(kproduk[0])
   {
      case 'a':
      buatan = "amerika";
      break;
      case 'b':
      buatan = "korea";
      break;
      case 'c':
      buatan = "china";
      break;
      case 'd':
      buatan = "jepang";
      break;
      case 'e':
      buatan = "german";
      break;
      case 'f':
      buatan = "belanda";
      break;
      default :
      buatan = "kode tidak dikenal";
      break;

   if (kproduk[1]=='3')
     {processor = "intel 386mhz";}
   else if (kproduk[1]=='4')
     {processor = "intel 486mhz";}
   else if (kproduk[1]=='5')
     {processor = "intel pentium";}
   else
   {processor = "kode tidak dikenal";}

cout<<" Buatan            : "<<buatan<<endl;
cout<<" Processor         : "<<processor<<endl;
cout<<" Kapasitas Hardisk : "<<kproduk[2]<<kproduk[3]<<kproduk[4]<<"Gigabyte"<<endl;
getch(); }
