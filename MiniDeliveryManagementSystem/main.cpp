// MiniDeliveryManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "DeliveryCreator.h"
#include "DeliveryDispatcher.h"

int main()
{
    Delivery* delivery = nullptr;

    DeliveryCreator* creator = DeliveryDispatcher::getCreator(DeliveryType::STANDARD);


    std::string id = "10001";
    std::string customerName = "George Popovici";
    std::string sourceCity = "Vienna";
    std::string destinationCity = "Cracovia";
    double weight = 2;
    Status status = Status::IN_TRANSIT;

    if (creator != nullptr)
    {
        delivery = creator->getDelivery(
            id,
            customerName,
            sourceCity,
            destinationCity,
            weight,
            status
        );
    }

    std::cout << delivery->getId() << "\n";
    std::cout << delivery->getCustomerName() << "\n";
    std::cout << delivery->getSourceCity() << "\n";
    std::cout << delivery->getDestinationCity() << "\n";
    std::cout << delivery->getWeight() << " kg\n";

    return 0;
}
