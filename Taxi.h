#pragma once
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
class Taxi{
public:
    int number;
    string model;
    string driver;
    bool work;

    Taxi(int number, string model, string driver, bool work)
     {
        this->number = number;
        this->model = model;
        this->driver = driver;
        this->work = work;
    }
};
class Mananger{
protected:
    list<Taxi> onTaxi;
public:
    void addTaxi(const Taxi& new_taxi) {
        onTaxi.push_back(new_taxi);
    }
    void addFrontTaxi(const Taxi& taxi) {
        onTaxi.push_front(taxi);
    }
    void addBeforeTaxi(int b_num, const Taxi& taxi) {
        for (auto it = onTaxi.begin(); it != onTaxi.end(); it++) {
            if (it->number == b_num) {
                onTaxi.insert(it, taxi);
                return;
            }
        }
    }
    void deleteTaxi(int num) {
        for (auto it = onTaxi.begin(); it != onTaxi.end(); it++) {
            if (it->number == num) {
                onTaxi.erase(it);
                return;
            }
        }
    }
    void setWorkOn(int number) {
        for (auto& taxi : onTaxi) {
            if (taxi.number == number) {
                taxi.work = true;
                return;
            }
        }
    }
    void setWorkOff(int number) {
        for (auto& taxi : onTaxi) {
            if (taxi.number == number) {
                taxi.work = false;
                return;
            }
        }
    }
    void showInfo() const {
        for (auto taxi : onTaxi) {
            cout << "Number: " << taxi.number << endl
                 << "Model: " << taxi.model << endl
                 << "Driver: " << taxi.driver << endl
                 << "Working: " << (taxi.work ? "Yes" : "No") << endl;
            cout << endl;
        }
    }
    void showInfo_WorkOn() const {
        for (auto taxi : onTaxi) {
            if (taxi.work)
            {
                cout << "Number: " << taxi.number << endl
                    << "Model: " << taxi.model << endl
                    << "Driver: " << taxi.driver << endl
                    << "Working: " << (taxi.work ? "Yes" : "No") << endl;
            }
            cout << endl;
        }
    }
    void showInfo_WorkOff() const {
        for (auto taxi : onTaxi) {
            if (!taxi.work)
            {
                cout << "Number: " << taxi.number << endl
                    << "Model: " << taxi.model << endl
                    << "Driver: " << taxi.driver << endl
                    << "Working: " << (taxi.work ? "Yes" : "No") << endl;
            }
            cout << endl;
        }
    }
};

