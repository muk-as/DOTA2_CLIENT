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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_TameTheBeasts : public client::CDOTA_Buff
    {
    public:
        float m_flPreviousMult; // 0x1708        
        float m_fChannelTime; // 0x170c        
        entity2::GameTime_t m_fStartTime; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        int32_t has_debuff_immunity; // 0x1718        
        int32_t magic_resist; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TameTheBeasts because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_TameTheBeasts) == 0x1720);
};
