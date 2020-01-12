#include "header.h"

int main()
{
    int x=0;
    int num1;
    int num2;
    int num3;
    int a;
    int array[]={28,6,8,9,1};
    int batas=(sizeof array)/sizeof (int);
    do
    {

    printf("Menu\n");
    printf("1.Perkalian \n");
    printf("2.Fibonacci \n");
    printf("3.Materi array print rekursif\n");
    printf("4.Materi array searching rekursif\n");
    printf("5.Materi array sorting (bubble) rekursif\n");
    printf("99.Keluar \n");
    printf("Masukkan Pilihan :");
        scanf("%d",&x);
    switch(x)
    {
        case 1 :printf("=========Perkalian===========\n");
                puts("");
                printf("Input Bilangan 1 :");
                    scanf("%d",&num1);
                printf("Input Bilangan 2 :");
                    scanf("%d",&num2);
                    a=perkalian(num1,num2);
                printf("hasil kali : %d",a);
                system("pause");
                system("cls");
                break;

        case 2 :printf("=========Fibonacci===========\n");
                puts("");
                printf("Input angka Fibonacci :");
                    scanf("%d",&num3);
                fibonanci2(num3);
                system("pause");
                system("cls");
                break;

        case 3 :printf("========Materi Array Print Rekursif======\n");
                puts("");
                print_array(array,batas);
                system("pause");
                system("cls");
                break;

        case 4: printf("========Materi Array Searching Rekursif========\n");
                puts("");
                int cari_angka;
                printf("[28],[6],[8],[9],[1]\n");
                printf("Masukkan angka yang ingin dicari:");
                    scanf("%d",&cari_angka);
                printf("angka %d berada di %d ",cari_angka,cari(array,cari_angka,batas));
                system("pause");
                system("cls");
                break;

        case 5: printf("========Materi array sorting (bubble) rekursif========\n");
                puts("");
                bubble_sort_in(array,batas);
                print_array(array,batas);
                system("pause");
                system("cls");
                break;

        case 99 : x=99;
                break;



        default: system("cls");
                printf("Masukkan Lagi\n");
    }

    }   while(x!=99);





    return 0;
}
