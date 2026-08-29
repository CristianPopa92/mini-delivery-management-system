#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class ExpressDelivery : public Delivery
{
public:
	ExpressDelivery(
		std::string idParam,
		std::string customerNameParam,
		std::string sourceCityParam,
		std::string destinationCityParam,
		double weightParam,
		Status statusParam
	);

	ExpressDelivery(const ExpressDelivery& other);

	ExpressDelivery& operator=(const ExpressDelivery& other);

	virtual ~ExpressDelivery();

	virtual DeliveryType getDeliveryType() const;
};

