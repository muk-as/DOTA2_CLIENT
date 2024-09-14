#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_Sun : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x16e8        
        float stun_duration; // 0x16ec        
        int32_t max_hero_attacks; // 0x16f0        
        int32_t max_hero_attacks_scepter; // 0x16f4        
        int32_t max_hero_attacks_required; // 0x16f8        
        // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSecondaryTarget;
        char m_hSecondaryTarget[0x4]; // 0x16fc        
        int32_t m_iAttackCount; // 0x1700        
        int32_t creep_attacks_count; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_Sun because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_Sun) == 0x1708);
};
