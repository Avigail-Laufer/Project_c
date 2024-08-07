#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

namespace VDMS {

    enum class ServiceType { OilChange, Inspection, TireRotation };

    class Vehicle {
    protected:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount;

    public:
        Vehicle(const std::string& vin, const std::string& mk, const std::string& mdl, int yr);
        Vehicle(const Vehicle& other);
        virtual ~Vehicle();

        static int getVehicleCount();
        virtual void display() const;
        virtual void performService(ServiceType service) = 0;

        friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
    };
} 
#endif 
