#pragma once
#include "DeliveryType.h"
#include "DeliveryCreator.h"

class DeliveryDispatcher
{
public:
	static DeliveryCreator* getCreator(DeliveryType type);
};

