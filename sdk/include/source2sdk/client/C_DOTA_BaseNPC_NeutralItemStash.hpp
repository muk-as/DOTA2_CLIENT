#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DynamicPropClientside;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1910
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_NeutralItemStash : public client::C_DOTA_BaseNPC_Building
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x18c8[0x10]; // 0x18c8
        // m_vecNewItemFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecNewItemFX;
        char m_vecNewItemFX[0x18]; // 0x18d8        
        bool m_bHasFoundProps; // 0x18f0        
        bool m_bDidHaveNewItems; // 0x18f1        
        [[maybe_unused]] std::uint8_t pad_0x18f2[0x6]; // 0x18f2
        // m_vecProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_DynamicPropClientside>> m_vecProps;
        char m_vecProps[0x18]; // 0x18f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_NeutralItemStash because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_NeutralItemStash) == 0x1910);
};
