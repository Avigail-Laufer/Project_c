#include "ServiceStation.h"

namespace VDMS {

    void ServiceStation::addService(ServiceType service, int priority) {
        serviceQueue.push({ priority, service });
    }

    void ServiceStation::performNextService(Vehicle& vehicle) {
        if (!serviceQueue.empty()) {
            auto nextService = serviceQueue.top();
            serviceQueue.pop();
            vehicle.performService(nextService.second);
        }
        else {
            std::cout << "No services in the queue." << std::endl;
        }
    }

    bool ServiceStation::hasServices() const {
        return !serviceQueue.empty();
    }

} 
