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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nConsecutiveHits; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook) == 0x5e0);
};
