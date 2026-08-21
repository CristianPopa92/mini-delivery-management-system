#include "StatusConverter.h"

std::string StatusConverter::toString(const Status& status)
{
    if (status == Status::CREATED)
    {
        return "CREATED";
    }
    else if (status == Status::IN_TRANSIT)
    {
        return "IN_TRANSIT";
    }
    else if (status == Status::DELIVERED)
    {
        return "DELIVERED";
    }
    else if (status == Status::CANCELLED)
    {
        return "CANCELLED";
    }
    else if (status == Status::UNKNOWN)
    {
        return "UNKNOWN";
    }
    
    return "UNKNOWN";
}
