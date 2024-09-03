//file 020.cpp   ( array +  ...)
//lessons 12 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
int arr_1[3][3] = {0};

int arr_2[5][3] =
{
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12},
    {13,14,15}
};

for (int i=0;i<5;i++)
{
    for(int j=0;j<3;j++)
    {
        cout << arr_2[i][j] << "  ";
    }
cout << endl;
}

const int ROW = 10;
const int COL = 10;

int arr_3[COL][ROW];
for (int i=0;i<COL;i++)
{
    for(int j=0;j<ROW;j++)
    {
        arr_3[i][j] = i*j;
    }
}

for (int i=0;i<COL;i++)
{
    for(int j=0;j<ROW;j++)
    {
        cout << arr_3[i][j] << "  ";
    }
cout << endl;
}

}