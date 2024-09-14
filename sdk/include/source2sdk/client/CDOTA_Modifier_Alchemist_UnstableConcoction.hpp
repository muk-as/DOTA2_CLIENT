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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Alchemist_UnstableConcoction : public client::CDOTA_Buff
    {
    public:
        float brew_time; // 0x16e8        
        float brew_explosion; // 0x16ec        
        entity2::GameTime_t m_fStartTime; // 0x16f0        
        entity2::GameTime_t m_fLastAlertTime; // 0x16f4        
        client::ParticleIndex_t m_nConcoctionFXIndex; // 0x16f8        
        bool m_bHasStunned; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        int32_t damage_resistance; // 0x1700        
        int32_t move_speed; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_UnstableConcoction because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Alchemist_UnstableConcoction) == 0x1708);
};
