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
    // Size: 0x648
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Broodmother_StickySnare : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x600        
        float duration; // 0x60c        
        int32_t width; // 0x610        
        bool m_bStolenSnareCheck; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x1b]; // 0x615
        // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecSnares;
        char m_vecSnares[0x18]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Broodmother_StickySnare) == 0x648);
};
