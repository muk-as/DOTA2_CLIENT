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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CDOTA_DB_Page_StickerEntity : public client::C_BaseEntity
    {
    public:
        bool m_bIsPlaced; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x3]; // 0x561
        client::item_definition_index_t m_ItemDefinitionIndex; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x568[0xc]; // 0x568
        float m_flStickerScale; // 0x574        
        uint16_t m_unDepthBias; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57a[0x2]; // 0x57a
        int32_t m_nStickerNumber; // 0x57c        
        int32_t m_nDbPageNumber; // 0x580        
        bool m_bVisible; // 0x584        
        [[maybe_unused]] std::uint8_t pad_0x585[0x23]; // 0x585
        uint32_t m_hDecalSpawnGroupHandle; // 0x5a8        
        uint32_t m_hDynamicPropSpawnGroupHandle; // 0x5ac        
        
        // Datamap fields:
        // int32_t m_Quality; // 0x568
        // int32_t m_DisplayMode; // 0x56c
        // int32_t m_SubPage; // 0x570
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DB_Page_StickerEntity) == 0x5b0);
};
