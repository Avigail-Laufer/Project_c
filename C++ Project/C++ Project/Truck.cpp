#include "Truck.h"

namespace VDMS {

    Truck::Truck(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, int capacity)
        : Vehicle(vin, mk, mdl, yr), payloadCapacity(capacity) {}

    void Truck::display() const {
        Vehicle::display();
        std::cout << "Payload Capacity: " << payloadCapacity << " kg" << std::endl;
    }

    void Truck::performService(ServiceType service) {
        switch (service) {
        case ServiceType::OilChange:
            std::cout << "Performing oil change on truck." << std::endl;
            break;
        case ServiceType::Inspection:
            std::cout << "Performing inspection on truck." << std::endl;
            break;
        case ServiceType::TireRotation:
            std::cout << "Performing tire rotation on truck." << std::endl;
            break;
        }
    }

} 
