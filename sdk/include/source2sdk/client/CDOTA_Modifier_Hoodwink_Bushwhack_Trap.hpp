#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public client::CDOTA_Buff
    {
    public:
        int32_t visual_height; // 0x16e8        
        float animation_rate; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        bool m_bPullComplete; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        uint32_t m_TreeId; // 0x16f8        
        float m_flDamagePerTick; // 0x16fc        
        int32_t m_nDamageTicks; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1708);
};
