#pragma once
#include <string>
#include "DeliveryType.h"

class DeliveryTypeConverter
{
public:
	static std::string toString(const DeliveryType& type);
};

