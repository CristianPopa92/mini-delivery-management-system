#include "StandardDelivery.h"
#include "DeliveryConstants.h"


StandardDelivery::StandardDelivery(
    std::string idParam,
    std::string customerNameParam,
    std::string sourceCityParam,
    std::string destinationCityParam,
    double weightParam,
    Status statusParam
):
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


StandardDelivery::StandardDelivery(const StandardDelivery& other):
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


StandardDelivery& StandardDelivery::operator=(const StandardDelivery& other)
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


StandardDelivery::~StandardDelivery()
{
}


DeliveryType StandardDelivery::getDeliveryType() const
{
    return STANDARD_DELIVERY_TYPE;
}
