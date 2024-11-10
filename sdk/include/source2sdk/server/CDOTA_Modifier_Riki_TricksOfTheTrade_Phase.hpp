#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFxIndex; // 0x1708        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x170c        
        server::CountdownTimer m_Timer; // 0x1710        
        // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPreviousTarget;
        char m_hPreviousTarget[0x4]; // 0x1728        
        int32_t m_nSucceessiveHits; // 0x172c        
        bool m_bGrantedGem; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        float attack_rate; // 0x1734        
        int32_t damage_pct; // 0x1738        
        int32_t agility_pct; // 0x173c        
        float creep_agility_multiplier; // 0x1740        
        float m_flMultiplier; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x1748);
};
