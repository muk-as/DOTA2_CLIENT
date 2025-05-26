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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_AstralStep : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x680            
            Vector m_vDestination; // 0x68c            
            Vector m_vDirection; // 0x698            
            float radius; // 0x6a4            
            float min_travel_distance; // 0x6a8            
            float max_travel_distance; // 0x6ac            
            float debuff_duration; // 0x6b0            
            float pop_damage_delay; // 0x6b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AstralStep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_VoidSpirit_AstralStep) == 0x6b8);
    };
};
