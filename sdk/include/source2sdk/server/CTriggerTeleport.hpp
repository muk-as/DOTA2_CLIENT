#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerTeleport : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iLandmark; // 0x9c0            
            bool m_bUseLandmarkAngles; // 0x9c8            
            bool m_bMirrorPlayer; // 0x9c9            
            bool m_bCheckDestIfClearForPlayer; // 0x9ca            
            uint8_t _pad09cb[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTeleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTeleport) == 0x9d0);
    };
};
