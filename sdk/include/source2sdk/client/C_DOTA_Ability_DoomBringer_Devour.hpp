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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_DoomBringer_Devour : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nDevourFirstSlot; // 0x600        
        bool m_bIsAltCastState; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3]; // 0x605
        int32_t ability_bonus_level; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DoomBringer_Devour because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DoomBringer_Devour) == 0x610);
};
