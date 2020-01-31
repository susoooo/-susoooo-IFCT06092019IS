#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int controla;

    num1=0;
    num2=0;
    num3=0;
    controla=0;

    do
    {
        cout << "Introduce tres números consecutivos: " << endl;
        cin >> num1 >> num2 >> num3;

        if (num2==num1+1 && num3==num2+1)
        {
            cout << "Gracias" << endl;
            controla=1;
        }
        else
        {
            cout << "Los números no son consecutivos." << endl;
        }
    }while(controla==0);

    return 0;
}
