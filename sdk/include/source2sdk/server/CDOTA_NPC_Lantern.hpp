#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"

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
        // Size: 0x19d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
        #pragma pack(push, 1)
        class CDOTA_NPC_Lantern : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szInteractAbilityName; // 0x19d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Lantern because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPC_Lantern) == 0x19d8);
    };
};
