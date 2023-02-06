#include <iostream>

using namespace std;
 int main () {


     ////// BANKOMAD
     const int cardPass = 1234;
     int parol , urunish = 3;
     double Balans = 1500000;
     metkaParol:
     cout << "Parol kiriting : "; cin >> parol;
     if(cardPass == parol) {
         metkaMenu:
         cout << "1-Balans\n2-Naqt pul olish\n3-To'lovlar\n4-SMS xabarnomasi\n";
         int tanlovMenu;
         cout << "menu tanlang: ";
         cin >> tanlovMenu;
         /*system("cls");*/
         switch (tanlovMenu) {
             case 1: {
                 //cout << "sizda " << fixed << Balans << " so'm bor\n";
                 printf("sizda %.02f so'm bor\n", Balans);
                 int tAnlov;
                 metkaExitmenu:
                 cout << " 1- bosh menu \n 0 - dastuni yakunlash\n";
                 cout << " Menu tanlang :";
                 cin >> tAnlov;
                 if (tAnlov == 1) {
                     goto metkaMenu;
                 } else if (tAnlov == 0) {
                     return 0;
                 } else {
                     cout << "siz 0 yoki 1 ni tanlang\n";
                     goto metkaExitmenu;
                 }
             }
                 break;
             case 2: {
                 double yechibOlishSum;
                 metkaYechSum:
                 cout << "Summa kiriting : ";
                 cin >> yechibOlishSum;
                 if (Balans >= yechibOlishSum) {
                     Balans -= yechibOlishSum;
                     printf("siz %.02f yechib oldingiz\n", yechibOlishSum);
                     printf("sizda %.02f so'm qoldi\n", Balans);
                     int tanlov;
                     metkaTanPulExit:
                     cout << "0-Dasturni yakunlash\n1-Bosh Menu\n";
                     cout << "menu tanlang: ";
                     cin >> tanlov;
                     if (tanlov == 0) {
                         return 0;
                     } else if (tanlov == 1) {
                         goto metkaMenu;
                     } else {
                         cout << "siz 0 yoki 1 ni tanlang\n";
                         goto metkaTanPulExit;
                     }
                 } else {
                     cout << "sizda mablag' yetarli emas\n";
                     printf("sizda %.02f so'm bor\n", Balans);
                     goto metkaYechSum;
                 }

             }
                 break;
             case 3: {
                 cout << "1-Komunal\n2-Soliqlar\n3-Mobile\n4-Jarima\n";
                 int tanlov;
                 cout << "menu tanlang : ";
                 cin >> tanlov;
                 switch (tanlov) {
                     case 1: {
                         cout << "1-Gaz\n2-Suv\n3-Svet\n4-Chiqindi\n";
                         int tanlovKom;
                         cout << "menu tanlang : ";
                         cin >> tanlovKom;
                         switch (tanlovKom) {
                             case 1: {
                                 int GazXR;
                                 float gazTolSum;
                                 cout << "Gaz xisib raqamini kiriting : ";
                                 cin >> GazXR;
                                 metkaGazSum:
                                 cout << "Sum kiriting : ";
                                 cin >> gazTolSum;
                                 if (gazTolSum <= Balans) {
                                     Balans -= gazTolSum;
                                     printf("siz %.02f gazga to'lov qildingiz\n", gazTolSum);
                                     printf("sizda %.02f so'm qoldi\n", Balans);
                                     goto metkaTanPulExit;
                                 } else {
                                     cout << "sizda mablag' yetarli emas\n";
                                     printf("sizda %.02f so'm bor\n", Balans);
                                     goto metkaGazSum;
                                 }

                             }
                                 break;
                             case 2: {
                                 int suvXR;
                                 float suvTolsum;
                                 cout << " Suv hisob raqamingizni kiriting :";
                                 cin >> suvXR;
                                 metkaSuvSum:
                                 cout << " Summa kiriting :";
                                 cin >> suvTolsum;
                                 if (suvTolsum <= Balans) {
                                     Balans -= suvTolsum;
                                     ::printf("siz %.02f suvga to'lov qildingiz\n", suvTolsum);
                                     ::printf(" siz %.02f so'm qoldi\n", Balans);
                                     goto metkaTanPulExit;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas \n";
                                     ::printf(" sizda %.02f so'm bor\n", Balans);
                                     goto metkaSuvSum;
                                 }
                             }
                                 break;
                             case 3: {
                                 int svetXR;
                                 float svetTol;
                                 cout << " Svet xisob raqamni kiriting :";
                                 cin >> svetXR;
                                 metkasvetSum:
                                 cout << " Sum kiriting :";
                                 cin >> svetTol;
                                 if (svetTol <= Balans) {
                                     Balans -= svetTol;
                                     ::printf(" Siz %.02f to'lov qildingiz\n", svetTol);
                                     ::printf(" Siz %.02f so'm qoldi\n", Balans);
                                     goto metkaTanPulExit;
                                 } else {
                                     cout << " Sizda mablag' yetarli eman\n";
                                     ::printf(" Sizda %.02f so'm bor\n", Balans);
                                     goto metkasvetSum;
                                 }
                             }
                                 break;
                             case 4: {
                                 int chiqXR;
                                 float chiqSum;
                                 cout << " Chiqindi xisob raqamni kiriting :";
                                 cin >> chiqXR;
                                 metkaChiqsum:
                                 cout << " Sum kiriting :";
                                 cin >> chiqSum;
                                 if (chiqSum <= Balans) {
                                     Balans -= chiqSum;
                                     ::printf(" Siz %.02f to'lov qildingiz \n", chiqSum);
                                     ::printf(" Sizda %.02f so'm qoldi \n", Balans);
                                     goto metkaTanPulExit;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas !!!\n";
                                     ::printf(" Sizda %.02f so'm bor.\n", Balans);
                                     goto metkaChiqsum;
                                 }
                             }
                                 break;
                         }

                     }
                         break;
                     case 2: {
                         cout << "1-Daromad\n2-QQS\n3-Akses\n4-Yer\n";
                         int tanlovSoliq;
                         cout << " Menu tanlang :";
                         cin >> tanlovSoliq;
                         switch (tanlovSoliq) {
                             case 1: {
                                 int darSoliq;
                                 float darSolsum;
                                 cout << " Xisob raqamni kiriting :";
                                 cin >> darSoliq;
                                 metkadarSum:
                                 cout << " Sum kiriting :";
                                 cin >> darSolsum;
                                 if (darSolsum <= Balans) {
                                     Balans -= darSolsum;
                                     ::printf(" Siz %.02f so'm to'lov qildingiz.\n", darSolsum);
                                     ::printf(" Sizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaTanPulExit;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas!!!\n";
                                     ::printf(" Sizda %.02f so'm bor.\n", Balans);
                                     goto metkadarSum;
                                 }
                             }
                                 break;
                             case 2: {
                                 int QQxr;
                                 float QQsum;
                                 cout << " Xisob raqamni kiriting :";
                                 cin >> QQxr;
                                 metkaQsum:
                                 cout << " Sum kiriting :";
                                 cin >> QQsum;
                                 if (QQsum <= Balans) {
                                     Balans -= QQsum;
                                     ::printf(" Siz %.02f to'lov qildingiz.\n", QQsum);
                                     ::printf("Sizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaMenu;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas!!!\n";
                                     ::printf(" Sizda %.02f so'm bor.\n", Balans);
                                     goto metkaQsum;
                                 }
                             }
                                 break;
                             case 3: {
                                 int AksesXR;
                                 float AksesSum;
                                 cout << " Xisob raqamni kiriting :";
                                 cin >> AksesXR;
                                 metkaAkses:
                                 cout << " Sum kiriting :";
                                 cin >> AksesSum;
                                 if (AksesSum < Balans) {
                                     Balans -= AksesSum;
                                     ::printf(" Siz %.02f som to'lov qildingiz.\n", AksesSum);
                                     ::printf(" Sizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaMenu;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas!!!\n";
                                     ::printf(" Sizda %.02f so'm bor.", Balans);
                                     goto metkaAkses;
                                 }
                             }
                                 break;
                             case 4: {
                                 int Yer;
                                 float Yersum;
                                 cout << " Xisob raqamni kiriting :";
                                 cin >> Yer;
                                 metkaYerSum:
                                 cout << " Sum kiriting :";
                                 cin >> Yersum;
                                 if (Yersum <= Balans) {
                                     Balans -= Yersum;
                                     ::printf(" Siz %.02f so'm to'lov qildingiz.\n ", Yersum);
                                     ::printf(" Sizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaMenu;
                                 } else {
                                     cout << " Sizda mablag' yetarli emas!!!\n";
                                     ::printf(" Sizda %.02f so'm bor.\n", Balans);
                                     goto metkaYerSum;
                                 }
                             }
                                 break;
                         }
                     }
                     break;
                     case 3: {
                         cout << " 1 - Beeline\n 2- Usell\n 3- Uzmobile\n 4- UMS\n ";
                         int taNlov;
                         cout << " Menu tanlang :\n";
                         cin >> taNlov;
                         switch (taNlov) {
                             case 1: {
                                 int raqam;
                                 float Bsum;
                                 cout << " BEELINEGA XUSH KELIBSIZ\n";
                                 cout << " +998 \n";
                                 cin >> raqam;
                                 cout << " summa kiriting :";
                                 cin >> Bsum;
                                 if (Bsum <= Balans) {
                                     Balans -= Bsum;
                                     ::printf(" Hisobingizga %.02f so'm qabul qilindi.\n ", Bsum);
                                     ::printf(" Sizning kartangizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaExitmenu;
                                 } else {
                                     cout << " Kartangizda yetarli mablag' mavjud emas!!!\n";
                                     ::printf(" sizning balansingizda %.02f so'm bor\n", Balans);
                                     goto metkaExitmenu;
                                 }
                             }
                                 break;
                             case 2: {
                                 int raqam1;
                                 float Usum;
                                 cout << " USELLGA XUSH KELIBSIZ\n";
                                 cout << " +998 \n";
                                 cin >> raqam1;
                                 cout << " summa kiriting :";
                                 cin >> Usum;
                                 if (Usum <= Balans) {
                                     Balans -= Usum;
                                     ::printf(" Hisobingizga %.02f so'm qabul qilindi.\n ", Usum);
                                     ::printf(" Sizning kartangizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaExitmenu;
                                 } else {
                                     cout << " Kartangizda yetarli mablag' mavjud emas!!!\n";
                                     ::printf(" sizning balansingizda %.02f so'm bor\n", Balans);
                                     goto metkaExitmenu;
                                 }

                             }
                                 break;
                             case 3: {
                                 int raqam2;
                                 float uZmobile;
                                 cout << " UZMOBILEGA XUSH KELIBSIZ\n";
                                 cout << " +998 \n";
                                 cin >> raqam2;
                                 cout << " Summa kiriting :";
                                 cin >> uZmobile;
                                 if (uZmobile <= Balans) {
                                     Balans -= uZmobile;
                                     ::printf(" xisobingizga %.02f so'm qabul kilindi\n ", uZmobile);
                                     ::printf(" Karta xisobingizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaExitmenu;
                                 } else {
                                     cout << " Sizning kartangizda yetarli mablag' mavjud emas!!!\n";
                                     ::printf(" sizning balansingizda %.02f so'm bor\n", Balans);
                                     goto metkaExitmenu;
                                 }
                             }
                                 break;
                             case 4: {
                                 int raqam3;
                                 float ums;
                                 cout << " UMSGA XUSH KELIBSIZ\n";
                                 cout << " +998 \n";
                                 cin >> raqam3;
                                 cout << " Summa kiriting :";
                                 cin >> ums;
                                 if (ums <= Balans) {
                                     Balans -= ums;
                                     ::printf(" xisobingizga %.02f so'm qabul kilindi\n ", ums);
                                     ::printf(" Karta xisobingizda %.02f so'm qoldi.\n", Balans);
                                     goto metkaExitmenu;
                                 } else {
                                     cout << " Sizning kartangizda yetarli mablag' mavjud emas!!!\n";
                                     ::printf(" sizning balansingizda %.02f so'm bor\n", Balans);
                                     goto metkaExitmenu;
                                 }
                             }
                                 break;

                         }
                     }
                     break;
                     case 4:  {
                         int passN;
                         float Jarsum;
                         cout << " Passport raqamni kiriting : "; cin >> passN;
                         cout << " Sum kiriting :"; cin >> Jarsum;
                         if ( Jarsum <= Balans){
                             Balans -= Jarsum;
                             ::printf( " Siz %.02f to'lov amalga oshirdingiz .\n", Jarsum);
                             ::printf(" Sizda %.02f so'm qoldi.\n",Balans);
                             goto metkaExitmenu;
                         } else {
                             cout << " Sizda mablag' yetarli emas!!!\n";
                             goto metkaExitmenu;
                         }
                     }
                     break;
                 }
                 break;

             }
             case 4: {
                 int num, num1, sms;
                 cout << " 1 HA tugmasi yoki 0 YOQ tugmasini bosing\n";
                 cout << " SMS xabarnomasini o'zgartirmoqchimisiz: "; cin >> sms;

                 if ( sms == 1 ){
                     cout << " Telefon nomeringizni kiriting :"; cin >> num;
                     cout << " Tasdiqlash uchun 1 bosing\n"; cin >> num1; if( num1 ==1 ){
                         cout << " TASDIQLANDI\n";
                         goto metkaExitmenu;
                     }
                 } else if ( sms == 0){
                     goto metkaExitmenu;
                 }
             }

         }
     }else {
             urunish--;
             if (urunish == 0) {
                 cout << "sizni kartangiz bloklandi\n";
                 return 0;
             }
             cout << "Parol xato!!!\n";
             cout << "sizda " << urunish << " urunish qoldi\n";
             goto metkaParol;
         }



return 0;
 }
