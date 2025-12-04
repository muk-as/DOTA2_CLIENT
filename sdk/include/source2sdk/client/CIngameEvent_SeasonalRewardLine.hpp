#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_IngameEvent_Base.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "int m_eventID"
        #pragma pack(push, 1)
        class CIngameEvent_SeasonalRewardLine : public source2sdk::client::C_IngameEvent_Base
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_eventID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_SeasonalRewardLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CIngameEvent_SeasonalRewardLine) == 0x_);
    };
};
