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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Snapfire_MortimerKisses : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nDamagePerProjectile; // 0x680            
            std::int32_t damage_per_impact; // 0x684            
            float impact_radius; // 0x688            
            float projectile_vision; // 0x68c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Snapfire_MortimerKisses) == 0x690);
    };
};
