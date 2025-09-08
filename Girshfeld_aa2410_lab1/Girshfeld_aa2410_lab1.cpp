// Girshfeld_aa2410_lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    cout << "Select the property you want to add:\n 1-pype, 2-compressor station\n";
    int a;
    cin >> a;
    if (a == 1)
        void pipe();
    if (a == 2)
        void compressor_station();



    void pipe();
    {

        cout << "Enter the length of the pipe (km)" <<endl;   // ввод длины трубы
        float b;
        cin >> b;

        cout << "enter the name of the kilometer marker (name)" <<endl ; //километровая отметкa
            string c;
            cin >> c;

        cout << "Enter the diameter of the pipe (mm)" <<endl;  // диаметр трубы
        float d;
        cin >> d;

        cout << "Is the pipe under repair now? 1-yes, 2-no" <<endl;   //ремонт трубы
        int i;
        cin >> i;
        if (i == 1)
            cout << "The pipe is under repair";
        if (i == 2)
            cout << "The pipe is working";

    }


    void compressor_station();
    {



    }

}
