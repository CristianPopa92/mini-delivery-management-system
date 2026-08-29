#pragma once
#include "Delivery.h"
#include "DeliveryType.h"

class StandardDelivery: public Delivery
{
public:
	virtual DeliveryType getDeliveryType() const;
};

