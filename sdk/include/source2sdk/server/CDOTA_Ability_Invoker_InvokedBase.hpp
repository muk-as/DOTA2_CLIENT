#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nQuasLevel"
    // static metadata: MNetworkVarNames "int m_nWexLevel"
    // static metadata: MNetworkVarNames "int m_nExortLevel"
    #pragma pack(push, 1)
    class CDOTA_Ability_Invoker_InvokedBase : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nQuasLevel; // 0x5a0        
        // metadata: MNetworkEnable
        int32_t m_nWexLevel; // 0x5a4        
        // metadata: MNetworkEnable
        int32_t m_nExortLevel; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Invoker_InvokedBase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Invoker_InvokedBase) == 0x5b0);
};
