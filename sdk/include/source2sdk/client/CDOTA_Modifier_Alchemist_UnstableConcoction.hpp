#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Alchemist_UnstableConcoction : public client::CDOTA_Buff
    {
    public:
        float brew_time; // 0x1708        
        float brew_explosion; // 0x170c        
        entity2::GameTime_t m_fStartTime; // 0x1710        
        entity2::GameTime_t m_fLastAlertTime; // 0x1714        
        client::ParticleIndex_t m_nConcoctionFXIndex; // 0x1718        
        bool m_bHasStunned; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        int32_t damage_resistance; // 0x1720        
        int32_t move_speed; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_UnstableConcoction because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Alchemist_UnstableConcoction) == 0x1728);
};
