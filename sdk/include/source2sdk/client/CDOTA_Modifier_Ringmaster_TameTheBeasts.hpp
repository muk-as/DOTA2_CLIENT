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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_TameTheBeasts : public client::CDOTA_Buff
    {
    public:
        float m_flPreviousMult; // 0x16e8        
        float m_fChannelTime; // 0x16ec        
        entity2::GameTime_t m_fStartTime; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        int32_t has_debuff_immunity; // 0x16f8        
        int32_t magic_resist; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TameTheBeasts because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_TameTheBeasts) == 0x1700);
};
