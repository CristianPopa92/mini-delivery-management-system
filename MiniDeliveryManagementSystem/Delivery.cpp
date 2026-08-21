#include "Delivery.h"


Delivery::Delivery(
    const std::string& idParam,
    const std::string& customerNameParam,
    const std::string& sourceCityParam,
    const std::string& destinationCityParam,
    const double& weightParam,
    const Status& statusParam
):
    id{idParam},
    customerName{customerNameParam},
    sourceCity{sourceCityParam},
    destinationCity{destinationCityParam},
    weight{weightParam},
    status{statusParam}
{
}


Delivery::Delivery(const Delivery& other):
    id{ other.id },
    customerName{ other.customerName },
    sourceCity{ other.sourceCity },
    destinationCity{ other.destinationCity },
    weight{ other.weight },
    status{ other.status }
{
}


Delivery& Delivery::operator=(const Delivery& other)
{
    if (this != &other)
    {
        this->id = other.id;
        this->customerName = other.customerName;
        this->sourceCity = other.sourceCity;
        this->destinationCity = other.destinationCity;
        this->weight = other.weight;
        this->status = other.status;
    }

    return *this;
}


Delivery::~Delivery()
{
}


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


