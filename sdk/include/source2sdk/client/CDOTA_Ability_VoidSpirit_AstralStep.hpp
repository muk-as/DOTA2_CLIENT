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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_AstralStep : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x5b0            
            Vector m_vDestination; // 0x5bc            
            Vector m_vDirection; // 0x5c8            
            float radius; // 0x5d4            
            float min_travel_distance; // 0x5d8            
            float max_travel_distance; // 0x5dc            
            float debuff_duration; // 0x5e0            
            float pop_damage_delay; // 0x5e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_VoidSpirit_AstralStep) == 0x5e8);
    };
};
