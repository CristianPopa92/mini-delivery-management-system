#pragma once
#include "Delivery.h"

class DeliveryCreator
{
public:
	Delivery* getDelivery(
		std::string idParam,
		std::string customerNameParam,
		std::string sourceCityParam,
		std::string destinationCityParam,
		double weightParam,
		Status statusParam
	);
	
protected:
	virtual Delivery* createDelivery(
		std::string idParam,
		std::string customerNameParam,
		std::string sourceCityParam,
		std::string destinationCityParam,
		double weightParam,
		Status statusParam
	) = 0;
};

