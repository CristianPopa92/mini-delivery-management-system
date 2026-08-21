#include "DeliveryTypeConverter.h"

std::string DeliveryTypeConverter::toString(const DeliveryType& type)
{
    if (type == DeliveryType::STANDARD)
    {
        return "STANDARD";
    }
    else if (type == DeliveryType::EXPRESS)
    {
        return "EXPRESS";
    }
    else if (type == DeliveryType::UNKNOWN)
    {
        return "UNKNOWN";
    }

    return "UNKNOWN";
}
