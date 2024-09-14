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
    // Size: 0x1930
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_szOutpostName"
    // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Watch_Tower : public server::CDOTA_BaseNPC_Building
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szOutpostName; // 0x1920        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szInteractAbilityName; // 0x1928        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Watch_Tower) == 0x1930);
};
