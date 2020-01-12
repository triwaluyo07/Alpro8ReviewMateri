#include "header.h"

int perkalian(num1,num2)
{
    int hsl_perkal;

    if(num2==0)
    {
        hsl_perkal=0;
    }
        else
        {
            hsl_perkal=perkalian(num1,(num2-1))+num1;
        }

   return hsl_perkal;
}

void fibonanci2(number)
{
    int hasil;
    if(number>1)
{
    fibonanci(number-1);
}


    printf("%d ",fibonanci(number));


}


int fibonanci(num1)
{

    if(num1==0)
        return 0;
    else if(num1==1)
        return 1;
    else
        return fibonanci(num1-1)+fibonanci(num1-2);
}

void print_array(int data[],int ukuran)
{
    if(ukuran==0)
    {

    }
        else
                {
                    printf("[%d]",data[ukuran-1]);
                    print_array(data,ukuran-1);
                }
}

int cari(int data[],int x, int ukuran)
{
    if(ukuran<0)
    {
        return 0;
    }
        else
        {
            if (x==data[ukuran])
            {
                return ukuran;
            }
                else
                {
                    return cari(data,x,ukuran-1);
                }
        }
}

void bubble_sort_in(int data[],int ukuran)
{
    if(ukuran==0)
    {

    }
        else
        {
            bubble_sort(data,0,ukuran-1);
            ///prosedure 2
            bubble_sort_in(data,ukuran-1);
        }
}

void bubble_sort(int data[],int x,int ukuran)
{
    int temp;

    if (x==ukuran)
    {

    }
        else
        {
            if (data[x]<data[x+1])
            {
                temp=data[x];
                data[x]=data[x+1];
                data[x+1]=temp;
            }
            ///prosedure 2
            bubble_sort(data,x+1,ukuran);
        }
}
