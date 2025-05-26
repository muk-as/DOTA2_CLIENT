#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_SandKing_BurrowStrike : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float burrow_width; // 0x5c0            
            std::int32_t burrow_speed; // 0x5c4            
            float burrow_anim_time; // 0x5c8            
            bool m_bIsVectorTargeted; // 0x5cc            
            uint8_t _pad05cd[0x3]; // 0x5cd
            Vector m_vEndpoint; // 0x5d0            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_SandKing_BurrowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_SandKing_BurrowStrike) == 0x5e0);
    };
};
