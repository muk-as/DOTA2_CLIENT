#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 2
        // Size: 0x_
        enum class ChoreoLocatorArrivalOptionFlags_t : std::uint16_t
        {
            // MPropertySuppressEnumerator
            eLocatorArrivalOption_None = 0x0,
            // MPropertyFriendlyName "Don't Stop At Goal"
            // MPropertyDescription "The entity won't play a stopping animation upon reaching the destination"
            eLocatorArrivalOption_DontStopAtGoal = 0x1,
            // MPropertyFriendlyName "Ignore Arrival Facing"
            // MPropertyDescription "The entity will not turn to face the destination facing direction"
            eLocatorArrivalOption_IgnoreArrivalFacing = 0x2,
            // MPropertyFriendlyName "Smooth Arrival Path"
            // MPropertyDescription "The entity will generate a path that might be longer, but has them arriving at the destination already facing the correct way"
            eLocatorArrivalOption_SmoothArrivalPath = 0x4,
        };
    };
};
