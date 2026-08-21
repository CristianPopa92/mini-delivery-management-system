#pragma once
#include "Delivery.h"
#include <string>
#include "Status.h"

class DeliveryValidator
{
public:
	static bool isValidDelivery(const Delivery& delivery);

	static bool isValidId(const std::string& id);
	static bool isValidCustomerName(const std::string& customerName);
	static bool isValidSourceCity(const std::string& sourceCity);
	static bool isValidDestinationCity(const std::string& destinationCity);
	static bool areSourceAndDestinationCitiesDifferent(
		const std::string& sourceCity,
		const std::string& destinationCity
	);
	static bool isValidWeight(const double& weight);
	static bool isValidStatus(const Status& status);

private:
	static bool isInteger(const std::string& string);
};

