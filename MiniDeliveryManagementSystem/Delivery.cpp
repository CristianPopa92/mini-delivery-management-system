#include "Delivery.h"


const std::string Delivery::getId() const
{
    return this->id;
}


void Delivery::setId(const std::string& newId)
{
    this->id = newId;
}


const std::string Delivery::getCustomerName() const
{
    return this->customerName;
}


void Delivery::setCustomerName(const std::string& newCustomerName)
{
    this->customerName = newCustomerName;
}


const std::string Delivery::getSourceCity() const
{
    return this->sourceCity;
}


void Delivery::setSourceCity(const std::string& newSourceCity)
{
    this->sourceCity = newSourceCity;
}


const std::string Delivery::getDestinationCity() const
{
    return this->destinationCity;
}


void Delivery::setDestinationCity(const std::string& newDestinationCity)
{
    this->destinationCity = newDestinationCity;
}


double Delivery::getWeight() const
{
    return this->weight;
}


void Delivery::setWeight(const double newWeight)
{
    this->weight = newWeight;
}


const Status Delivery::getStatus() const
{
    return this->status;
}


void Delivery::setStatus(const Status& newStatus)
{
    this->status = newStatus;
}


