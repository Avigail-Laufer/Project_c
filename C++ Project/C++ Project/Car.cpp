#include "Car.h"

namespace VDMS {

    Car::Car(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, const std::string& type)
        : Vehicle(vin, mk, mdl, yr), carType(type) {}

    void Car::display() const {
        Vehicle::display();
        std::cout << "Car Type: " << carType << std::endl;
    }

    void Car::performService(ServiceType service) {
        switch (service) {
        case ServiceType::OilChange:
            std::cout << "Performing oil change on car." << std::endl;
            break;
        case ServiceType::Inspection:
            std::cout << "Performing inspection on car." << std::endl;
            break;
        case ServiceType::TireRotation:
            std::cout << "Performing tire rotation on car." << std::endl;
            break;
        }
    }

} 
