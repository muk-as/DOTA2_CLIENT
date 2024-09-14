#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x588
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CDOTA_DB_Page_StickerEntity : public client::C_BaseEntity
    {
    public:
        bool m_bIsPlaced; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x3]; // 0x539
        client::item_definition_index_t m_ItemDefinitionIndex; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x540[0xc]; // 0x540
        float m_flStickerScale; // 0x54c        
        uint16_t m_unDepthBias; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x552[0x2]; // 0x552
        int32_t m_nStickerNumber; // 0x554        
        int32_t m_nDbPageNumber; // 0x558        
        bool m_bVisible; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x23]; // 0x55d
        uint32_t m_hDecalSpawnGroupHandle; // 0x580        
        uint32_t m_hDynamicPropSpawnGroupHandle; // 0x584        
        
        // Datamap fields:
        // int32_t m_Quality; // 0x540
        // int32_t m_DisplayMode; // 0x544
        // int32_t m_SubPage; // 0x548
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DB_Page_StickerEntity) == 0x588);
};
