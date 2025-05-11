#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_Shapeshift : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_night_vision; // 0x17f8            
            float kill_duration_extension; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1800            
            std::int32_t m_iOriginalAttackCapability; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_Shapeshift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lycan_Shapeshift) == 0x1808);
    };
};
