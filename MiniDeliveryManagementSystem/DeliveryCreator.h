#pragma once
#include "Delivery.h"

class DeliveryCreator
{
public:
	Delivery* getDelivery(
		const std::string& idParam,
		const std::string& customerNameParam,
		const std::string& sourceCityParam,
		const std::string& destinationCityParam,
		const double& weightParam,
		const Status& statusParam
	);
	
protected:
	virtual Delivery* createDelivery(
		const std::string& idParam,
		const std::string& customerNameParam,
		const std::string& sourceCityParam,
		const std::string& destinationCityParam,
		const double& weightParam,
		const Status& statusParam
	) = 0;
};

