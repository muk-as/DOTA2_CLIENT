#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Apocalypse : public client::C_DOTABaseAbility
    {
    public:
        int32_t area_of_effect; // 0x5d8        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x5dc        
        float fire_interval; // 0x5e0        
        float delay; // 0x5e4        
        float target_range; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        client::CountdownTimer m_ctTimer; // 0x5f0        
        float m_flTiming; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Apocalypse) == 0x610);
};
