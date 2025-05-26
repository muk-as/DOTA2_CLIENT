#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_Item;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa58
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< C_DOTA_Item > m_hItem"
        // static metadata: MNetworkVarNames "bool m_bIsLowPriorityHoverItem"
        #pragma pack(push, 1)
        class C_DOTA_Item_Physical : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnItemChanged"
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Item> m_hItem;
            char m_hItem[0x4]; // 0x998            
            // metadata: MNetworkEnable
            bool m_bIsLowPriorityHoverItem; // 0x99c            
            uint8_t _pad099d[0x3]; // 0x99d
            // m_hOldItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Item> m_hOldItem;
            char m_hOldItem[0x4]; // 0x9a0            
            uint8_t _pad09a4[0x4]; // 0x9a4
            char* m_pszParticleName; // 0x9a8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x9b0            
            bool m_bShowingTooltip; // 0x9b4            
            bool m_bShowingSimpleTooltip; // 0x9b5            
            uint8_t _pad09b6[0xa2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Physical because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Physical) == 0xa58);
    };
};
