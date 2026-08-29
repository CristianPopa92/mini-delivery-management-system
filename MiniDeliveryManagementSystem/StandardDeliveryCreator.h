#pragma once
#include "DeliveryCreator.h"


class StandardDeliveryCreator: public DeliveryCreator
{
	virtual Delivery* createDelivery(
		const std::string& idParam,
		const std::string& customerNameParam,
		const std::string& sourceCityParam,
		const std::string& destinationCityParam,
		const double& weightParam,
		const Status& statusParam
	);
};

