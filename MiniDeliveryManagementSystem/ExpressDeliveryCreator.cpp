#include "ExpressDeliveryCreator.h"
#include "ExpressDelivery.h"

Delivery* ExpressDeliveryCreator::createDelivery(
	const std::string& idParam,
	const std::string& customerNameParam,
	const std::string& sourceCityParam,
	const std::string& destinationCityParam,
	const double& weightParam,
	const Status& statusParam
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
