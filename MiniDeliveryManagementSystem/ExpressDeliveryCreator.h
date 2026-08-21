#pragma once
#include "DeliveryCreator.h"

class ExpressDeliveryCreator: public DeliveryCreator
{
	virtual Delivery* createDelivery(
		std::string idParam,
		std::string customerNameParam,
		std::string sourceCityParam,
		std::string destinationCityParam,
		double weightParam,
		Status statusParam
	);
};

