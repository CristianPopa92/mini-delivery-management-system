#include "StandardDeliveryCreator.h"
#include "StandardDelivery.h"

Delivery* StandardDeliveryCreator::createDelivery(
	std::string idParam,
	std::string customerNameParam,
	std::string sourceCityParam,
	std::string destinationCityParam,
	double weightParam,
	Status statusParam
)
{
	return new StandardDelivery(
		idParam,
		customerNameParam,
		sourceCityParam,
		destinationCityParam,
		weightParam,
		statusParam
	);
}
