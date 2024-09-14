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
    #pragma pack(push, 1)
    class CDOTA_Ability_Shadow_Demon_Demonic_Cleanse : public client::C_DOTABaseAbility
    {
    public:
        bool m_bGrantedScepterCharges; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Shadow_Demon_Demonic_Cleanse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Shadow_Demon_Demonic_Cleanse) == 0x5e0);
};
