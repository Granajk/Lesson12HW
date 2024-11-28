

#include "Taxi.h"
int main()
{
    Mananger manager;

    manager.addTaxi(Taxi(1, "BMW", "Kto to tam", false));
    manager.addTaxi(Taxi(2, "Mercedes", "Chto to tam", true));
    manager.addTaxi(Taxi(3, "Lamborghini", "Gde to tam", false));

    manager.showInfo();
    cout << "AT-----------------------------+\n";
    manager.addTaxi(Taxi(4, "Mazda", "Kogda to tam", false));
    manager.showInfo();
    cout << "ABT----------------------------+\n";
    manager.addBeforeTaxi(2, Taxi(5, "Porsche", "Kakto to tam", true));
    manager.showInfo();
    cout << "DT-----------------------------+\n";
    manager.deleteTaxi(3);
    manager.showInfo();
    cout << "W_On---------------------------+\n";
    manager.setWorkOn(4);
    manager.showInfo();
    cout << "W_Off--------------------------+\n";
    manager.setWorkOff(2);
    manager.showInfo();
    cout << "+------------------------------+\n";
    cout << "Working Taxis:" << endl;
    manager.showInfo_WorkOn();
    cout << "Not working Taxis:" << endl;
    cout << endl;
    manager.showInfo_WorkOff();
}

