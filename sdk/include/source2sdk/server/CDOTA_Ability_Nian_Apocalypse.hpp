#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Nian_Apocalypse : public server::CDOTABaseAbility
    {
    public:
        int32_t area_of_effect; // 0x5a0        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x5a4        
        float fire_interval; // 0x5a8        
        float delay; // 0x5ac        
        float target_range; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4]; // 0x5b4
        server::CountdownTimer m_ctTimer; // 0x5b8        
        float m_flTiming; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Apocalypse) == 0x5d8);
};
