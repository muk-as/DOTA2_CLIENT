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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nian_Apocalypse : public server::CDOTABaseAbility
    {
    public:
        int32_t area_of_effect; // 0x5c8        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x5cc        
        float fire_interval; // 0x5d0        
        float delay; // 0x5d4        
        float target_range; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        server::CountdownTimer m_ctTimer; // 0x5e0        
        float m_flTiming; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Apocalypse) == 0x600);
};
