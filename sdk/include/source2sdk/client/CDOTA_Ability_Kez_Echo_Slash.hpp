#pragma once
#include "source2sdk/client/C_DOTA_Ability_Kez_BaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Kez_Echo_Slash : public client::C_DOTA_Ability_Kez_BaseAbility
    {
    public:
        Vector m_vInitialDirection; // 0x600        
        Vector m_vStartPos; // 0x60c        
        [[maybe_unused]] std::uint8_t pad_0x618[0x8]; // 0x618
        CTransform m_InitialTransform; // 0x620        
        int32_t katana_radius; // 0x640        
        int32_t katana_distance; // 0x644        
        int32_t travel_distance; // 0x648        
        int32_t katana_strikes; // 0x64c        
        int32_t katana_echo_damage; // 0x650        
        float strike_interval; // 0x654        
        float effect_duration; // 0x658        
        int32_t m_nStrikesLeft; // 0x65c        
        entity2::GameTime_t m_NextStrikeTime; // 0x660        
        client::ParticleIndex_t m_nFXCast; // 0x664        
        [[maybe_unused]] std::uint8_t pad_0x668[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Kez_Echo_Slash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Kez_Echo_Slash) == 0x670);
};
