#pragma once
#include <string>
#include "Status.h"

class StatusConverter
{
public:
	static std::string toString(const Status& status);
};

