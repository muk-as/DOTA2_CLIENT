#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "bool m_bSai"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Kez_SwitchWeapons : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        bool m_bSai; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Kez_SwitchWeapons because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Kez_SwitchWeapons) == 0x608);
};