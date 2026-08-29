#include "StandardDeliveryCreator.h"
#include "StandardDelivery.h"

Delivery* StandardDeliveryCreator::createDelivery(
	const std::string& idParam,
	const std::string& customerNameParam,
	const std::string& sourceCityParam,
	const std::string& destinationCityParam,
	const double& weightParam,
	const Status& statusParam
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
