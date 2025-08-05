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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_DB_Page_StickerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bIsPlaced; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            source2sdk::client::item_definition_index_t m_ItemDefinitionIndex; // 0x5ec            
            uint8_t _pad05f0[0xc]; // 0x5f0
            float m_flStickerScale; // 0x5fc            
            std::uint16_t m_unDepthBias; // 0x600            
            uint8_t _pad0602[0x2]; // 0x602
            std::int32_t m_nStickerNumber; // 0x604            
            std::int32_t m_nDbPageNumber; // 0x608            
            bool m_bVisible; // 0x60c            
            uint8_t _pad060d[0x23]; // 0x60d
            std::uint32_t m_hDecalSpawnGroupHandle; // 0x630            
            std::uint32_t m_hDynamicPropSpawnGroupHandle; // 0x634            
            
            // Datamap fields:
            // int32_t m_Quality; // 0x5f0
            // int32_t m_DisplayMode; // 0x5f4
            // int32_t m_SubPage; // 0x5f8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_DB_Page_StickerEntity) == 0x638);
    };
};
