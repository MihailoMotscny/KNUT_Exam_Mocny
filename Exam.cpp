#include <iostream>
#include <Windows.h>



using namespace std;

//���������� ������� �� ���� �������
int function(int x)
{

    

    int i,finish;
    i = 1;
    finish = 0;
    
    

    while (i != x + 1)
    {
        if (x % i == 0)
        {
            finish += i;
            i += 1;

        }
        else
        {
            i += 1;
            
        }
    }
    return finish;
   



}

//������� ������� �� ����� �������� �������
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x,c;
    x = 0;
    cout << "������ �����:";
    cin >> x;
    
    if (x > 0)
    {
        cout << "���� ������� ����� " << x << " = " << function(x) << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    else
    {
        cout << "������� ����������� ��������,��������� �����("<<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }




}