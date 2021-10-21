// BTVN3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    int count(2);
	while (count = 1)
	{
        cout << count << "";
        ++count;
        std::cout << "Hello BKACAD\n";
        string name;
        int age;
        string myclass;
        cout << " Sinh vien ten la : ";
        getline(std::cin, name);
        cout << "Chao mung sinh vien " << name << '\n';
        cout << "nhap tuoi cua ban : ";
        cin >> age;
        cin.ignore(1000, '\n');
        cout << "Tuoi cua sinh vien : " << age << '\n';
        cout << "Vui long dien ten lop : ";
        cin >> myclass;
        cout << "Sinh vien " << name << " ,lop " << myclass << '\n';
        cout << "Sinh vien nhap diem toan: ";
        int x;
        cin >> x;
        cout << "Diem toan cua sinh vien la: " << x << '\n';
        cout << "Sinh vien nhap diem ly: ";
        int y;
        cin >> y;
        cout << " Diem ly cua sinh vien la: " << y << '\n';
        cout << "Sinh vien nhap diem hoa: ";
        int z;
        cin >> z;
        cout << "Diem hoa cua sinh vien la: " << z << '\n';
        cout << "So thich cua sinh vien: ";
        string hobby;
        cin >> hobby;
        int TB;
        TB = (x + y + z) / 3;
        cout << "Diem trung binh: " << TB << '\n';
        int TBm = TB;
        if (TBm > 8)
        {
            cout << "Ban dat loai gioi";
        }
        else
        {
            cout << "Ban dat loai kha";
        }
        return 0;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
