#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFxIndex; // 0x1708        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x170c        
        client::CountdownTimer m_Timer; // 0x1710        
        // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviousTarget;
        char m_hPreviousTarget[0x4]; // 0x1728        
        int32_t m_nSucceessiveHits; // 0x172c        
        int32_t damage_pct; // 0x1730        
        int32_t agility_pct; // 0x1734        
        float creep_agility_multiplier; // 0x1738        
        float m_flMultiplier; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x1740);
};
