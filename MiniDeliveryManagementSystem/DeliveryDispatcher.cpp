#include "DeliveryDispatcher.h"
#include "StandardDeliveryCreator.h"
#include "ExpressDeliveryCreator.h"

DeliveryCreator* DeliveryDispatcher::getCreator(const DeliveryType& type)
{
    if (type == DeliveryType::STANDARD)
    {
        return new StandardDeliveryCreator{};
    }
    else if (type == DeliveryType::EXPRESS)
    {
        return new ExpressDeliveryCreator{};
    }

    return nullptr;
}
