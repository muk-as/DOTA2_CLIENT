#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
    class C_DOTA_Item;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< C_DOTA_Item > m_hItem"
    // static metadata: MNetworkVarNames "bool m_bIsLowPriorityHoverItem"
    #pragma pack(push, 1)
    class C_DOTA_Item_Physical : public client::CBaseAnimatingActivity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnItemChanged"
        // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_Item> m_hItem;
        char m_hItem[0x4]; // 0x800        
        // metadata: MNetworkEnable
        bool m_bIsLowPriorityHoverItem; // 0x804        
        [[maybe_unused]] std::uint8_t pad_0x805[0x3]; // 0x805
        // m_hOldItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_Item> m_hOldItem;
        char m_hOldItem[0x4]; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4]; // 0x80c
        char* m_pszParticleName; // 0x810        
        client::ParticleIndex_t m_nFXIndex; // 0x818        
        bool m_bShowingTooltip; // 0x81c        
        bool m_bShowingSimpleTooltip; // 0x81d        
        [[maybe_unused]] std::uint8_t pad_0x81e[0xa2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Physical because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Physical) == 0x8c0);
};
