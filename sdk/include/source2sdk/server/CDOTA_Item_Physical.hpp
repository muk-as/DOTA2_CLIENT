#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_Item;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle<CDOTA_Item> m_hItem"
    // static metadata: MNetworkVarNames "bool m_bIsLowPriorityHoverItem"
    #pragma pack(push, 1)
    class CDOTA_Item_Physical : public server::CBaseAnimatingActivity
    {
    public:
        int32_t m_nFlags; // 0x798        
        int32_t m_nRevealedInFoWForTeam; // 0x79c        
        entity2::GameTime_t m_fCreationTime; // 0x7a0        
        // metadata: MNetworkEnable
        // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Item> m_hItem;
        char m_hItem[0x4]; // 0x7a4        
        // metadata: MNetworkEnable
        bool m_bIsLowPriorityHoverItem; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7a9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Physical because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Physical) == 0x7b0);
};
