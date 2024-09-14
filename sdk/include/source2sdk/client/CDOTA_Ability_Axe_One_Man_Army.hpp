#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Axe_One_Man_Army : public client::C_DOTABaseAbility
    {
    public:
        float radius; // 0x5d8        
        float bonus_linger_duration; // 0x5dc        
        entity2::GameTime_t m_startDecayTime; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Axe_One_Man_Army because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Axe_One_Man_Army) == 0x5e8);
};
