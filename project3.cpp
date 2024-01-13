
#include <iostream>

using namespace std; // Matrix is magic 
int Sumdig(int[3][3]);
int Sumdig2(int[3][3]);
int Row1(int[3][3]);
int Row2(int[3][3]);
int Row3(int[3][3]);
int Col1(int[3][3]);
int Col2(int[3][3]);
int Col3(int[3][3]);

int main()
{
    int M[3][3] = { {4, 9, 2},{3, 5, 7}, {8, 1, 6} };

    cout << "Sum of dig1 is " << Sumdig(M)<< endl;
    cout << "Sum of dig2 is " << Sumdig2(M)<<endl;
    cout << "Sum of row1 is " << Row1(M)<< endl;
    cout << "Sum of row2 is " << Row2(M)<<endl;
    cout << "Sum of row3 is " << Row3(M) << endl;
    cout << "Sum of col1 is " << Col1(M)<<endl;
    cout << "Sum of col2 is " << Col2(M) << endl;
    cout << "Sum of col3 is " << Col3(M) << endl;
        return 0;
        cout << " ";
        cout << "So Lo shu matrix is Magic";

        
}
int Sumdig(int M[3][3])
{
    int sum = 0;
    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        sum = sum + M[i][j];
    }
    return sum;

}
int Sumdig2(int M[3][3])
{
    int x = 0;
    
    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        x = x + M[i][j];
    }
    return x;
}
int Row1(int  M[3][3])
{ 
    
   
    for (int i = 0; i <3 ;i++)
    {
        int y = 0;
        for (int j = 0; j < 3; j++)
        {
            y = y + M[i][j];
            
        }
        return y;
    }
    
}

int Row2(int  M[3][3])
{


    for (int i = 0; i < 3;i++)
    {
        int z= 0;
        for (int j = 0; j < 3; j++)
        {
            z = z + M[i][j];

        }
        return z;
    }

}
int Row3(int  M[3][3])
{


    for (int i = 0; i < 3;i++)
    {
        int h = 0;
        for (int j = 0; j < 3; j++)
        {
            h = h + M[i][j];

        }
        return h;
    }

}
int Col1(int M[3][3])
{
    for (int i = 0; i < 3;i++)
    {
        int w = 0;
        for (int j = 0; j < 3; j++)
        {
            w= w + M[i][j];

        }
        return w;
    }
}
int Col2(int M[3][3])
{
    for (int i = 0; i < 3;i++)
    {
        int u = 0;
        for (int j = 0; j < 3; j++)
        {
            u = u + M[i][j];

        }
        return u;
    }
}
int Col3(int M[3][3])
{
    for (int i = 0; i < 3;i++)
    {
        int r= 0;
        for (int j = 0; j < 3; j++)
        {
            r = r + M[i][j];

        }
        return r;
    }
}

