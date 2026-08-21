#include "DeliveryPrinter.h"
#include "DeliveryTypeConverter.h"
#include "StatusConverter.h"
#include <iostream>

void DeliveryPrinter::printDeliveryDetails(const Delivery& delivery)
{
	std::cout << "===========================================================";
	std::cout << "Delivery Details";
	std::cout << "===========================================================";
	std::cout << "Delivery ID: " << delivery.getId() << '\n';
	std::cout << "Customer Name: " << delivery.getCustomerName() << '\n';
	std::cout << "Source City: " << delivery.getSourceCity() << '\n';
	std::cout << "Destination City: " << delivery.getDestinationCity() << '\n';
	std::cout 
		<< "Delivery Type: " 
		<< DeliveryTypeConverter::toString(delivery.getDeliveryType()) << '\n';
	std::cout << "Delivery Weight: " << delivery.getWeight() << '\n';
	std::cout 
		<< "Delivery Status: " 
		<< StatusConverter::toString(delivery.getStatus()) << '\n';
}
