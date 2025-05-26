#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_SandKing_BurrowStrike : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float burrow_width; // 0x680            
            std::int32_t burrow_speed; // 0x684            
            float burrow_anim_time; // 0x688            
            bool m_bIsVectorTargeted; // 0x68c            
            uint8_t _pad068d[0x3]; // 0x68d
            Vector m_vEndpoint; // 0x690            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_SandKing_BurrowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_SandKing_BurrowStrike) == 0x6a0);
    };
};
