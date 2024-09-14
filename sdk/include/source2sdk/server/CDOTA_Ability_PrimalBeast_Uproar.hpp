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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iUproarStatus"
    #pragma pack(push, 1)
    class CDOTA_Ability_PrimalBeast_Uproar : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUproarActiveChanged"
        int32_t m_iUproarStatus; // 0x5a0        
        bool m_bUpdateIcons; // 0x5a4        
        [[maybe_unused]] std::uint8_t pad_0x5a5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Uproar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_PrimalBeast_Uproar) == 0x5a8);
};
