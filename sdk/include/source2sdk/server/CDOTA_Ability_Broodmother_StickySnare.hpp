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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Broodmother_StickySnare : public server::CDOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x5c8        
        float duration; // 0x5d4        
        int32_t width; // 0x5d8        
        bool m_bStolenSnareCheck; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x1b]; // 0x5dd
        // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecSnares;
        char m_vecSnares[0x18]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Broodmother_StickySnare) == 0x610);
};
