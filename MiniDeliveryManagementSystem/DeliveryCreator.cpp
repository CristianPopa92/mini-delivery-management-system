#include "DeliveryCreator.h"
#include <string>

Delivery* DeliveryCreator::getDelivery(
	const std::string& idParam,
	const std::string& customerNameParam,
	const std::string& sourceCityParam,
	const std::string& destinationCityParam,
	const double& weightParam,
	const Status& statusParam
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
