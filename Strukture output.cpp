#include <string>
#include <iostream>

using namespace std;

struct Place 
{
    string city;
    string street;
    int Building_Number;
    int Room_Number;
    int Index;
};

void Output_place(Place& P){
    cout << "Город: " << P.city << endl << "Улица: " << P.street << endl << "Номер дома: " << P.Building_Number << endl << "Номер квартиры: " << P.Room_Number << endl << "Индекс: " << P.Index << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Place P1 = { "Москва", "Арбат", 12, 8, 123456 };
    Place P2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    Output_place(P1);
    Output_place(P2);
}