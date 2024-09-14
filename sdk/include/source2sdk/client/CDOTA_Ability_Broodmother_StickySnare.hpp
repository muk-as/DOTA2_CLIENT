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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Broodmother_StickySnare : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x5d8        
        float duration; // 0x5e4        
        int32_t width; // 0x5e8        
        bool m_bStolenSnareCheck; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x1b]; // 0x5ed
        // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecSnares;
        char m_vecSnares[0x18]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Broodmother_StickySnare) == 0x620);
};
