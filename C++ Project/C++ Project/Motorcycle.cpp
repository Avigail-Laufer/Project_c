#include "Motorcycle.h"

namespace VDMS {

    Motorcycle::Motorcycle(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, bool sidecar)
        : Vehicle(vin, mk, mdl, yr), hasSidecar(sidecar) {}

    void Motorcycle::display() const {
        Vehicle::display();
        std::cout << "Has Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }

    void Motorcycle::performService(ServiceType service) {
        switch (service) {
        case ServiceType::OilChange:
            std::cout << "Performing oil change on motorcycle." << std::endl;
            break;
        case ServiceType::Inspection:
            std::cout << "Performing inspection on motorcycle." << std::endl;
            break;
        case ServiceType::TireRotation:
            std::cout << "Performing tire rotation on motorcycle." << std::endl;
            break;
        }
    }

} 
