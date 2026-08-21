#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class StandardDelivery: public Delivery
{
public:
	StandardDelivery(
		const std::string& idParam,
		const std::string& customerNameParam,
		const std::string& sourceCityParam,
		const std::string& destinationCityParam,
		const double& weightParam,
		const Status& statusParam
	);

	StandardDelivery(const StandardDelivery& other);

	StandardDelivery& operator=(const StandardDelivery& other);

	virtual ~StandardDelivery();

	virtual DeliveryType getDeliveryType() const;
};

