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
        // Size: 0x1ef8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_VengefulSpirit : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            bool m_bArcanaEquipped; // 0x1ef0            
            uint8_t _pad1ef1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_VengefulSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_VengefulSpirit) == 0x1ef8);
    };
};
