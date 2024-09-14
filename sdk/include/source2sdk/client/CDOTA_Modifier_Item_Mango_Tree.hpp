#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Mango_Tree : public client::CDOTA_Buff_Item
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        client::CountdownTimer m_Timer; // 0x16f0        
        float seconds; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mango_Tree because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mango_Tree) == 0x1710);
};
