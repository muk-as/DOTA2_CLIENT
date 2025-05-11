#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Item;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle<CDOTA_Item> m_hItem"
        // static metadata: MNetworkVarNames "bool m_bIsLowPriorityHoverItem"
        #pragma pack(push, 1)
        class CDOTA_Item_Physical : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            std::int32_t m_nFlags; // 0x7b8            
            std::int32_t m_nRevealedInFoWForTeam; // 0x7bc            
            source2sdk::entity2::GameTime_t m_fCreationTime; // 0x7c0            
            // metadata: MNetworkEnable
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item> m_hItem;
            char m_hItem[0x4]; // 0x7c4            
            // metadata: MNetworkEnable
            bool m_bIsLowPriorityHoverItem; // 0x7c8            
            uint8_t _pad07c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Physical because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Physical) == 0x7d0);
    };
};
