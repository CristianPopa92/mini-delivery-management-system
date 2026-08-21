#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class StandardDelivery: public Delivery
{
public:
	StandardDelivery(
		std::string idParam,
		std::string customerNameParam,
		std::string sourceCityParam,
		std::string destinationCityParam,
		double weightParam,
		Status statusParam
	);

	StandardDelivery(const StandardDelivery& other);

	StandardDelivery& operator=(const StandardDelivery& other);

	virtual ~StandardDelivery();

	virtual DeliveryType getDeliveryType() const;
};

