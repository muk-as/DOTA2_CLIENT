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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public client::CDOTA_Buff
    {
    public:
        int32_t pass_damage; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t controllable; // 0x16f0        
        int32_t m_nCreepsHit; // 0x16f4        
        int32_t m_nHeroesHit; // 0x16f8        
        float m_flSpeed; // 0x16fc        
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x1700        
        Vector m_vCasterStartPosition; // 0x1718        
        Vector m_vSpiritStartPosition; // 0x1724        
        int32_t m_nBonusMoveSpeed; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_AncestralSpirit) == 0x1738);
};
