#include "Vehicle.h"

namespace VDMS {

    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& mk, const std::string& mdl, int yr)
        : VIN(vin), make(mk), model(mdl), year(yr) {
        vehicleCount++;
    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        vehicleCount++;
    }

    Vehicle::~Vehicle() {
        vehicleCount--;
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount;
    }

    void Vehicle::display() const {
        std::cout << "VIN: " << VIN << ", Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }

    std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
        vehicle.display();
        return os;
    }
} 
