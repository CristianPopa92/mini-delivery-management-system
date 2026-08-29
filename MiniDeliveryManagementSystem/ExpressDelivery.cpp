#include "ExpressDelivery.h"
#include "DeliveryConstants.h"


ExpressDelivery::ExpressDelivery(
    std::string idParam,
    std::string customerNameParam,
    std::string sourceCityParam,
    std::string destinationCityParam,
    double weightParam,
    Status statusParam
) :
    Delivery(
        idParam,
        customerNameParam,
        sourceCityParam,
        destinationCityParam,
        weightParam,
        statusParam
    )
{
}

ExpressDelivery::ExpressDelivery(const ExpressDelivery& other):
    Delivery(
        other.getId(),
        other.getCustomerName(),
        other.getSourceCity(),
        other.getDestinationCity(),
        other.getWeight(),
        other.getStatus()
    )
{
}

ExpressDelivery& ExpressDelivery::operator=(const ExpressDelivery& other)
{
    if (this != &other)
    {
        setId(other.getId());
        setCustomerName(other.getCustomerName());
        setSourceCity(other.getSourceCity());
        setDestinationCity(other.getDestinationCity());
        setWeight(other.getWeight());
        setStatus(other.getStatus());
    }

    return *this;
}


ExpressDelivery::~ExpressDelivery()
{
}


DeliveryType ExpressDelivery::getDeliveryType() const
{
    return EXPRESS_DELIVERY_TYPE;
}
