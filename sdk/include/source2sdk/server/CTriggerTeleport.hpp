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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerTeleport : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iLandmark; // 0x_            
            bool m_bUseLandmarkAngles; // 0x_            
            bool m_bMirrorPlayer; // 0x_            
            bool m_bCheckDestIfClearForPlayer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTeleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTeleport) == 0x_);
    };
};
