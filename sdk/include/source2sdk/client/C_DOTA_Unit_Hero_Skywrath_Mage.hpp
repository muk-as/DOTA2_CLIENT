#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1da0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Skywrath_Mage : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            bool m_bArcanaEquipped; // 0x1d98            
            uint8_t _pad1d99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Skywrath_Mage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Skywrath_Mage) == 0x1da0);
    };
};
