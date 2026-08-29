#include "ExpressDeliveryCreator.h"
#include "ExpressDelivery.h"

Delivery* ExpressDeliveryCreator::createDelivery(
	std::string idParam,
	std::string customerNameParam,
	std::string sourceCityParam,
	std::string destinationCityParam,
	double weightParam,
	Status statusParam
)
{
	return new ExpressDelivery(
		idParam,
		customerNameParam,
		sourceCityParam,
		destinationCityParam,
		weightParam,
		statusParam
	);
}
