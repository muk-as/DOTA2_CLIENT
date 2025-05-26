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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Skywrath_Mage_Arcane_Bolt : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t bolt_vision; // 0x5c0            
            float vision_duration; // 0x5c4            
            float m_flDamage; // 0x5c8            
            std::int32_t m_nFXIndex; // 0x5cc            
            uint8_t _pad05d0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Skywrath_Mage_Arcane_Bolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Skywrath_Mage_Arcane_Bolt) == 0x5e8);
    };
};
