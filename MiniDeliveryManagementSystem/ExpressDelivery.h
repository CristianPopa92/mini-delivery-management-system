#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class ExpressDelivery : public Delivery
{
public:
	ExpressDelivery(
		const std::string& idParam,
		const std::string& customerNameParam,
		const std::string& sourceCityParam,
		const std::string& destinationCityParam,
		const double& weightParam,
		const Status& statusParam
	);

	ExpressDelivery(const ExpressDelivery& other);

	ExpressDelivery& operator=(const ExpressDelivery& other);

	virtual ~ExpressDelivery();

	virtual DeliveryType getDeliveryType() const;
};

