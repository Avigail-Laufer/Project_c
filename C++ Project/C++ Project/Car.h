#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
    private:
        std::string carType; 
    public:
        Car(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, const std::string& type);
        void display() const override;
        void performService(ServiceType service) override;
    };
} 
#endif 
