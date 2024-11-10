#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/sGlaiveInfoStorm.hpp"
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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_StormSpirit_Overload : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_iAttackIndex; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // m_GlaiveInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sGlaiveInfoStorm> m_GlaiveInfo;
        char m_GlaiveInfo[0x18]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_Overload because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_StormSpirit_Overload) == 0x620);
};
