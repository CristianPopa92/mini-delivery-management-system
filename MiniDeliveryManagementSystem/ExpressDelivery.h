#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class ExpressDelivery : public Delivery
{
public:
	virtual DeliveryType getDeliveryType() const;
};

