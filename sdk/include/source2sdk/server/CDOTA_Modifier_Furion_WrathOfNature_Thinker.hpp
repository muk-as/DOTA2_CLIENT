#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Furion_WrathOfNature_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        int32_t max_targets; // 0x16ec        
        int32_t damage_percent_add; // 0x16f0        
        float jump_delay; // 0x16f4        
        int32_t m_iFixedDamage; // 0x16f8        
        entity2::GameTime_t m_flLastTickTime; // 0x16fc        
        float m_flTimeAccumulator; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_hHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitTargets;
        char m_hHitTargets[0x18]; // 0x1708        
        int32_t m_nBaseDamage; // 0x1720        
        int32_t m_nMaxTargets; // 0x1724        
        float m_flJumpDelay; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Furion_WrathOfNature_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Furion_WrathOfNature_Thinker) == 0x1730);
};
