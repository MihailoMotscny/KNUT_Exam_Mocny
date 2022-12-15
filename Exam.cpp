#include <iostream>
#include <Windows.h>



using namespace std;

//оголошення функції та сама функція
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

//Головна функція та вивиід значення функції
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x,c;
    x = 0;
    cout << "Введіть число:";
    cin >> x;
    
    if (x > 0)
    {
        cout << "Сума дільників числа " << x << " = " << function(x) << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    else
    {
        cout << "Введено неправильне значення,спробуйте знову("<<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }




}