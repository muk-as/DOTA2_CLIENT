#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class C_DOTA_Ability_Wisp_Relocate : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndexEndTeam; // 0x680            
            source2sdk::client::ParticleIndex_t m_nFXIndexChannel; // 0x684            
            float cast_delay; // 0x688            
            float return_time; // 0x68c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Wisp_Relocate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Wisp_Relocate) == 0x690);
    };
};
