#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1928
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
    #pragma pack(push, 1)
    class CDOTA_NPC_Lantern : public server::CDOTA_BaseNPC_Building
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szInteractAbilityName; // 0x1920        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_Lantern because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_Lantern) == 0x1928);
};
