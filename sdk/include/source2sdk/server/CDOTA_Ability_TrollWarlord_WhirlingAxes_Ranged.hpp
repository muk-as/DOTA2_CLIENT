#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        int32_t m_iArrowProjectile; // 0x5ac        
        int32_t axe_width; // 0x5b0        
        float axe_speed; // 0x5b4        
        float axe_range; // 0x5b8        
        int32_t axe_spread; // 0x5bc        
        int32_t axe_count; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x5c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged) == 0x5e0);
};
