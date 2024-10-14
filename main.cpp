// переменная - ячейка в памяти компьютера, заданная пользователем и
// хранящая в себе данные об объекте

/* основные типы данных:

1. целочисленные
- char: 1 байт, от -128 до 127 или от 0 до 255
- signed short: 2 байта, от -32768 до 32767
- unsigned short: 2 байта, от 0 до 65535
- int: 2 или 4 байта, от -32768 до 32767 или от -2 147 483 648 до 2 147 483 647 соответственно
- unsigned int: 2 или 4 байта, 0 до 65535, либо от 0 до 4 294 967 295 соответственно
- long:  4 или 8 байт, от −2 147 483 648 до 2 147 483 647
         или от −9 223 372 036 854 775 808 до 9 223 372 036 854 775 807 соответственно
- unsigned long: 4 байта, от 0 до 4 294 967 295
- long long: 8 байт, от −9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
- unsigned long long: 8 байт, от 0 до 18 446 744 073 709 551 615.

2. вещественные
- float: 4 байта, от -3.14E–38 до 3.14E+38 - 1
- double: 8 байт, от 1.7E–308 до 1.7E+308
- long double: 8 байт, от 2.23E-308 до 1.8E+308.

3. символьные
- char: 1 байт, от 0 до 255
- wchar_t: 2 или 4 байта, от 0 до 65 535 или от 0 до 4 294 967 295 соответственно
- char8_t: 1 байт, от 0 до 256
- char16_t: 2 байта, от 0 до 65 535
- char32_t: 4 байта, от 0 до 4 294 967 295.

4. логические
- bool: 1 байт, от 0 до 1.
*/

/* #include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void dataTypeOutput()
{
    setlocale(LC_ALL, "Rus");
    string si_1b = "от - 128 до 127";
    string unsi_1b = "от 0 до 255";
    string si_2b = "от -32768 до 32767";
    string unsi_2b = "от 0 до 65 535";
    string si_4b = "от -2 147 483 648 до 2 147 483 647";
    string unsi_4b = "от 0 до 4 294 967 295";
    string si_8b = "от −9 223 372 036 854 775 808 до 9 223 372 036 854 775 807";

    cout << "-----целочисленный тип данных-----" << endl;
    cout << "название типа: char, размер: 1 байт, мин. и макс. значения: " << si_1b << " или " << unsi_1b << endl;
    cout << "название типа: int, размер: 2 или 4 байта, мин. и макс. значения: \n" << si_2b << " или " << si_4b << endl;
    cout << "название типа: unsigned long, размер: 4 байта, мин. и макс. значения: " << unsi_4b << endl;
    cout << "название типа: long long, размер: 8 байт, мин. и макс. значения: \n" << si_8b << endl;

    cout << "-----вещественный тип данных-----" << endl;
    cout << "название типа: float, размер: 4 байта, мин. и макс. значения: от 3.14E–38 до 3.14E+38" << endl;
    cout << "название типа: double, размер: 8 байт, мин. и макс. значения: от 1.7E–308 до 1.7E+308" << endl;
    cout << "название типа: long double, размер: 8 байт, мин. и макс. значения: от 2.23E-308 до 1.8E+308." << endl;

    cout << "-----символьный тип данных-----" << endl;
    cout << "название типа: char, размер: 1 байт, мин. и макс. значения: " << si_1b << " или " << unsi_1b << endl;
    cout << "название типа: char16_t, размер: 2 байта, мин. и макс. значения: " << unsi_2b << endl;
    cout << "название типа: char32_t, размер: 4 байта, мин. и макс. значения: " << unsi_4b << endl;

    cout << "-----логический тип данных-----" << endl;
    cout << "название типа: bool, размер: 1 байт, мин. и макс. значения: " << unsi_1b << endl << "\n";

}

int examples()
{
    cout << "примеры выполнения арифметических операций:" << endl;

    char ch1 = 30, ch2 = 9;
    cout << "char: 30 x 9 = " << ch1 * ch2 << endl;
    int num1 = -32500, num2 = 52;
    cout << "int: -32500 / 52 = " << num1 / num2 << endl;
    unsigned long unlong1 = 2'067'388'567, unlong2 = 1'122'111'890;
    cout << "unsigned long: 2'067'388'567 + 1'122'111'890 = " << unlong1 + unlong2 << endl;
    long long long1 = pow(2, 63), long2 = pow(2, 62);
    cout << "long long: 2^63 - 2^62 = " << long1 - long2 << endl << "\n";

    cout << setprecision(32);
    float fl_res = 22.0f / 7.0f;
    cout << "float: 22 / 7 = " << fl_res << endl; // точность 7 знаков
    double doub_res = 22.0 / 7.0;
    cout << "double: 22 / 7 = " << doub_res << endl; // точность 16 знаков
    long double long_d_res = 22.0l / 7.0l;
    cout << "long double: 22 / 7 = " << long_d_res << endl << "\n"; // точность 18-19 знаков

    char ch_num1 = 'j', ch_num2 = 35;
    cout << "char: 'j' - 35 = " << ch_num1 - ch_num2 << endl;
    char16_t ch16 = 'ß' + 3000;
    cout << "char16_t: 'ß' + 3000 = " << ch16 << endl;
    char32_t ch32 = '🍓';
    cout << "char32_t: '🍓' / 3 = " << ch32 / 3 << endl << "\n";

    bool b_true = true, b_false = false;
    cout << "bool: -1 + true = " << -1 + b_true << endl;
    cout << "bool: true / false = " << b_true / b_false;

    return 0;
}

int main()
{
    dataTypeOutput();
    examples();
}
*/

/*
// лаб 2, вариант 2
#include <iostream>;
using std::cout, std::endl, std::cin;

int square_triangle()
{
    setlocale(LC_ALL, "Rus");
    unsigned long h = 0, a = 0;
    cout << "Программа для рассчёта площади треугольника <3" << endl;
    cout << "Введите высоту треугольника: ";
    cin >> h;
    cout << "Введите длину основания треугольника: ";
    cin >> a;
    double s = (a * h) / 2.0;
    cout << "Площадь равна " << s;
    return 0;
}
int main()
{
    square_triangle();
    return 0;
}
*/

/*
#include <iostream>
using std::cout, std::endl, std::cin;

int firstCondition()
{
    setlocale(LC_ALL, "Rus");
    unsigned int a = 0, b = 0, c = 0;
    cout << "условие 1 :)" << endl;
    cout << "введите число А: ";
    cin >> a;
    cout << "введите число B: ";
    cin >> b;
    cout << "введите число C: ";
    cin >> c;

    if (a % c == 0 && b % c == 0) 
    {
        cout << "(A+B)/C = " << (a + b) / c << endl;
    }
    else if (a % c == 0 && b % c != 0)
    {
        cout << "A/С+B = " << a / c + b << endl;
    }
    else
    {
        cout << "A - B - C = " << a - b - c << endl;
    }

    return 0;
}

int dayOfTheWeek()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "\nузнать день недели по цифре!!\nвведите цифру от 1 до 7: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "сегодня понедельник!" << endl;
        break;
    case 2:
        cout << "сегодня вторник!" << endl;
        break;
    case 3:
        cout << "сегодня среда!" << endl;
        break;
    case 4:
        cout << "сегодня четверг!" << endl;
        break;
    case 5:
        cout << "сегодня пятница!" << endl;
        break;
    case 6:
        cout << "сегодня суббота!" << endl;
        break;
    case 7:
        cout << "сегодня воскресенье!" << endl;
        break;
    default:
        cout << "дня недели с такой цифрой нет :(" << endl;
    }

    return 0;
}


int numberSign()
{
    cout << "\nопределить, положительное число или отрицательное ><" << endl;
    cout << "введите 1 или -1: ";
    int x = 0;
    cin >> x;
    cout << (x > 0 ? "positive" : "negative");
    x > 0 ? cout << "positive number" : cout << "negative number";

    return 0;
}


int main()
{
    //firstCondition();
    //dayOfTheWeek();
    numberSign();

    return 0;
}
*/

/*
#include <iostream>
using std::cout, std::cin, std::endl;

void meow()
{
    setlocale(LC_ALL, "Rus");
    unsigned int x = 0;
    cout << "Введите изначальное число х: ";
    cin >> x;
    unsigned short i = 0;
    cout << "Введите номер бита, на который хотите установить 0: ";
    cin >> i;
    cout << "Итоговое число: " << (x & ~(1 << i)) << endl;
}

int main()
{
    meow();

    return 0;
}
*/


// lab 5.1
/*
#include <iostream>
using std::cout, std::endl, std::cin;

void lab5()
{
    setlocale(LC_ALL, "Rus");
    double sum_elems = 0.0;
    unsigned short amount_els = 0;
    float max_el = -7;
    unsigned short num_el = 0;

    cout << "Введите количество элементов в последовательности: ";
    cin >> amount_els;
    unsigned short all_amount = amount_els;
    float el = 0.0f;
    cout << "Вводите значения элементов в последовательности: ";
    while (amount_els)
    {
        cin >> el;
        amount_els -= 1;
        if (el >= -7 && el <= 19)
        {
            sum_elems = sum_elems + el;
            if (el > max_el)
            {
                max_el = el;
                num_el = all_amount - amount_els;
            }

        }
    }
    cout << "Сумма элементов, лежащих на отрезке [-7; 19]: " << sum_elems << endl;
    cout << "Наибольшее число: " << max_el << endl;
    cout << "Номер этого числа в последовательности: " << num_el << endl;
}

int main()
{
    lab5();
    return 0;
}
*/


// lab 6.2
/*
#include <iostream>

int main()
{
    int mas[1000];
    int n;
    
    // Ввод
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> mas[i];

    // Сортировка
    for(int i=0;i<n-1;i++)
        for (int j = i + 1; j < n; j++)
        {
            int firstI = mas[i]; // 123
            int multI = firstI % 10; // 3
            while (firstI > 9)
            {
                firstI /= 10;
                multI = multI * (firstI % 10); // 6
            }

            int firstJ = mas[i];
            int multJ = 1;
            while (firstJ > 9)
            {
                multJ = multJ * (firstJ % 10);
                firstJ /= 10;
            }
            multJ = multJ * firstJ;

            if ((firstI > firstJ) ||
                (firstI == firstJ && multI > multJ) ||
                (firstI == firstJ && multI == multJ && mas[i] > mas[j]))
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
 
        }

    // Вывод
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";

}
*/

// lab 6.1
#include <iostream>

int main()
{
    int mas[10000];
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
        std::cin >> mas[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++)
        {
            int lastI = 0;
            lastI = mas[i] % 10;
            int lastJ = 0;
            lastJ = mas[j] % 10;

            if (lastI < lastJ)
            {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;
            }
        }

    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
}