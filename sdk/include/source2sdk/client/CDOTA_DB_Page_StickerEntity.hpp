#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_DB_Page_StickerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bIsPlaced; // 0x5e0            
            uint8_t _pad05e1[0x3]; // 0x5e1
            source2sdk::client::item_definition_index_t m_ItemDefinitionIndex; // 0x5e4            
            uint8_t _pad05e8[0xc]; // 0x5e8
            float m_flStickerScale; // 0x5f4            
            std::uint16_t m_unDepthBias; // 0x5f8            
            uint8_t _pad05fa[0x2]; // 0x5fa
            std::int32_t m_nStickerNumber; // 0x5fc            
            std::int32_t m_nDbPageNumber; // 0x600            
            bool m_bVisible; // 0x604            
            uint8_t _pad0605[0x23]; // 0x605
            std::uint32_t m_hDecalSpawnGroupHandle; // 0x628            
            std::uint32_t m_hDynamicPropSpawnGroupHandle; // 0x62c            
            
            // Datamap fields:
            // int32_t m_Quality; // 0x5e8
            // int32_t m_DisplayMode; // 0x5ec
            // int32_t m_SubPage; // 0x5f0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_DB_Page_StickerEntity) == 0x630);
    };
};
