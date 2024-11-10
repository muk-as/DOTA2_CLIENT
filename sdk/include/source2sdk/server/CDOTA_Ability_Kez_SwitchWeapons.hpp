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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "bool m_bSai"
    #pragma pack(push, 1)
    class CDOTA_Ability_Kez_SwitchWeapons : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        bool m_bSai; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Kez_SwitchWeapons because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Kez_SwitchWeapons) == 0x5d0);
};
