#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_Shapeshift : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_night_vision; // 0x1878            
            float kill_duration_extension; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1880            
            std::int32_t m_iOriginalAttackCapability; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_Shapeshift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lycan_Shapeshift) == 0x1888);
    };
};
