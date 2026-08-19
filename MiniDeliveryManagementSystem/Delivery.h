#pragma once
#include <string>
#include "DeliveryType.h"
#include "Status.h"
class Delivery
{
	std::string id;
	std::string customerName;
	std::string sourceCity;
	std::string destinationCity;
	double weight;
	DeliveryType deliveryType;
	Status status;

public:
	const std::string getId() const;
	void setId(const std::string& newId);

	const std::string getCustomerName() const;
	void setCustomerName(const std::string& newCustomerName);

	const std::string getSourceCity() const;
	void setSourceCity(const std::string& newSourceCity);

	const std::string getDestinationCity() const;
	void setDestinationCity(const std::string& newDestinationCity);

	double getWeight() const;
	void setWeight(const double newWeight);

	const DeliveryType getDeliveryType() const;
	void setDeliveryType(const DeliveryType& newDeliveryType);

	const Status getStatus() const;
	void setStatus(const Status& newStatus);
};

