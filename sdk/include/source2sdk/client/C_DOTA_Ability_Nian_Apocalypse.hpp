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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Apocalypse : public client::C_DOTABaseAbility
    {
    public:
        int32_t area_of_effect; // 0x600        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x604        
        float fire_interval; // 0x608        
        float delay; // 0x60c        
        float target_range; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        client::CountdownTimer m_ctTimer; // 0x618        
        float m_flTiming; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Apocalypse) == 0x638);
};
