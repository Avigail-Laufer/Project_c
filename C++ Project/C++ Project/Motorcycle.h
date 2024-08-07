#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;

    public:
        Motorcycle(const std::string& vin, const std::string& mk, const std::string& mdl, int yr, bool sidecar);
        void display() const override;
        void performService(ServiceType service) override;
    };

}
#endif 
