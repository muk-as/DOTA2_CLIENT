#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Creature.hpp"

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
        // Size: 0x1a30
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Trap_Ward : public source2sdk::server::CDOTA_BaseNPC_Creature
        {
        public:
            CUtlSymbolLarge m_iszDefaultAnim; // 0x1a18            
            Vector m_vTrapTargetLocal; // 0x1a20            
            uint8_t _pad1a2c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Trap_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Trap_Ward) == 0x1a30);
    };
};
