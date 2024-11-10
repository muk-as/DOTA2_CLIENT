#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x600        
        int32_t m_iArrowProjectile; // 0x60c        
        int32_t axe_width; // 0x610        
        float axe_speed; // 0x614        
        float axe_range; // 0x618        
        int32_t axe_spread; // 0x61c        
        int32_t axe_count; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged) == 0x640);
};
