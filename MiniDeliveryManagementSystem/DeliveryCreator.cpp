#include "DeliveryCreator.h"
#include <string>

Delivery* DeliveryCreator::getDelivery(
	std::string idParam,
	std::string customerNameParam,
	std::string sourceCityParam,
	std::string destinationCityParam,
	double weightParam,
	Status statusParam
)
{
    Delivery* delivery = createDelivery(
		idParam,
		customerNameParam,
		sourceCityParam,
		destinationCityParam,
		weightParam,
		statusParam
    );

    return delivery;
}
