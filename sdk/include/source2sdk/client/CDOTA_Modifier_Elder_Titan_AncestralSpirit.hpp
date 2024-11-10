#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public client::CDOTA_Buff
    {
    public:
        int32_t pass_damage; // 0x1708        
        int32_t radius; // 0x170c        
        int32_t controllable; // 0x1710        
        int32_t m_nCreepsHit; // 0x1714        
        int32_t m_nHeroesHit; // 0x1718        
        float m_flSpeed; // 0x171c        
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x1720        
        Vector m_vCasterStartPosition; // 0x1738        
        Vector m_vSpiritStartPosition; // 0x1744        
        int32_t m_nBonusMoveSpeed; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_AncestralSpirit) == 0x1758);
};
