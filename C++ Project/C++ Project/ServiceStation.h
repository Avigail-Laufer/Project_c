#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include <queue>
#include <functional>
#include "Vehicle.h"

namespace VDMS {

    class ServiceStation {
    private:
        std::priority_queue<std::pair<int, ServiceType>> serviceQueue;

    public:
        void addService(ServiceType service, int priority);
        void performNextService(Vehicle& vehicle);
        bool hasServices() const;
    };

}

#endif
