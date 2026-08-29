#include "DeliveryValidator.h"
#include "Delivery.h"
#include "DeliveryConstants.h"
#include <string>

bool DeliveryValidator::isValidDelivery(const Delivery& delivery)
{ 
    return 
        isValidId(delivery.getId()) && 
        isValidCustomerName(delivery.getCustomerName()) &&
        isValidSourceCity(delivery.getSourceCity()) &&
        isValidDestinationCity(delivery.getDestinationCity()) &&
        areSourceAndDestinationCitiesDifferent(
            delivery.getSourceCity(),
            delivery.getDestinationCity()
        ) &&
        isValidWeight(delivery.getWeight()) &&
        isValidStatus(delivery.getStatus());
}


bool DeliveryValidator::isValidId(const std::string& id)
{
    if (id.empty())
    {
        return false;
    }

    if (!isInteger(id))
    {
        return false;
    }

    if (id.length() != ID_LENGTH)
    {
        return false;
    }
    
    return true;
}


bool DeliveryValidator::isValidCustomerName(const std::string& customerName)
{
    if (customerName.empty())
    {
        return false;
    }
    
    return true;
}


bool DeliveryValidator::isValidSourceCity(const std::string& sourceCity)
{
    if (sourceCity.empty())
    {
        return false;
    }
    
    return true;
}


bool DeliveryValidator::isValidDestinationCity(const std::string& destinationCity)
{
    if (destinationCity.empty())
    {
        return false;
    }
    
    return true;
}


bool DeliveryValidator::areSourceAndDestinationCitiesDifferent(
    const std::string& sourceCity, 
    const std::string& destinationCity
)
{
    if (sourceCity.empty() || destinationCity.empty())
    {
        return false;
    }
    
    return sourceCity != destinationCity;
}


bool DeliveryValidator::isValidWeight(const double& weight)
{
    if (weight < 0)
    {
        return false;
    }
    
    return true;
}

bool DeliveryValidator::isValidStatus(const Status& status)
{
    if (status == Status::CREATED ||
        status == Status::IN_TRANSIT ||
        status == Status::DELIVERED ||
        status == Status::CANCELLED)
    {
        return true;
    }
    
    return false;
}


// Private Helpers
bool DeliveryValidator::isInteger(const std::string& string)
{
    if (string.empty())
    {
        return false;
    }

    for (char character: string)
    {
        if (character < '0' || character > '9')
        {
            return false;
        }
    }
        
    return true;
}
