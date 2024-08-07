#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

using namespace VDMS;

int main() {
    Car car1("2HGFB2F59CH123456", "Toyota", "Corolla", 2019, "Sedan");
    Truck truck1("1FTFW1ET1EK123456", "Chevrolet", "Silverado", 2020, 1200);
    Motorcycle bike1("JH2RC4466KM123456", "Kawasaki", "Ninja ZX-6R", 2022, true);

    std::cout << "Vehicle Count: " << Vehicle::getVehicleCount() << std::endl;

    ServiceStation station;
    station.addService(ServiceType::OilChange, 1);
    station.addService(ServiceType::Inspection, 2);
    station.addService(ServiceType::TireRotation, 3);

    if (station.hasServices()) {
        station.performNextService(car1);
    }

    if (station.hasServices()) {
        station.performNextService(truck1);
    }

    if (station.hasServices()) {
        station.performNextService(bike1);
    }

    std::cout << car1;
    std::cout << truck1;
    std::cout << bike1;

    return 0;
}
