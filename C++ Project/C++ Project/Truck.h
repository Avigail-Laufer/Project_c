#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    private:
        int payloadCapacity; 
    public:
        Truck(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, int capacity);
        void display() const override;
        void performService(ServiceType service) override;
    };
} 
#endif
