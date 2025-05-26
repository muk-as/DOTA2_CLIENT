#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1ed8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Techies : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            bool m_bLastDeathFromSuicide; // 0x1ed0            
            uint8_t _pad1ed1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Techies because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Techies) == 0x1ed8);
    };
};
