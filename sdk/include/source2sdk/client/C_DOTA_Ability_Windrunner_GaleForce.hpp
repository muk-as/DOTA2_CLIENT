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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Windrunner_GaleForce : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x5d8        
        Vector m_vFlowPosition; // 0x5e4        
        float duration; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_GaleForce because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Windrunner_GaleForce) == 0x5f8);
};
