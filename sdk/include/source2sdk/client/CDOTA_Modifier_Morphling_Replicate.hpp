#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
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
    class C_EconItemView;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17a0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Morphling_Replicate : public client::CDOTA_Buff
    {
    public:
        // m_hTinyTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTinyTreeWearable;
        char m_hTinyTreeWearable[0x4]; // 0x1708        
        float m_flBaseAttackRange; // 0x170c        
        float m_flBaseMovementSpeed; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        CUtlSymbolLarge m_iszModelName; // 0x1718        
        CUtlSymbolLarge m_iszProjectileName; // 0x1720        
        client::HeroFacetKey_t m_nFacetKey; // 0x1728        
        CUtlSymbolLarge m_iszOriginalModel; // 0x1730        
        client::HeroID_t m_nCopiedHeroID; // 0x1738        
        float m_fOriginalModelScale; // 0x173c        
        // m_vecOriginalItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconItemView*> m_vecOriginalItems;
        char m_vecOriginalItems[0x18]; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1758[0x30]; // 0x1758
        float m_flOriginalStr; // 0x1788        
        float m_flOriginalAgi; // 0x178c        
        float m_flOriginalInt; // 0x1790        
        int32_t m_iOriginalAttackCapability; // 0x1794        
        float m_flOriginalHealthPercentage; // 0x1798        
        float m_flOriginalManaPercentage; // 0x179c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Replicate because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Replicate) == 0x17a0);
};
