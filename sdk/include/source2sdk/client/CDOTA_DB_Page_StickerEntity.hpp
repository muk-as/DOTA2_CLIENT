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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_DB_Page_StickerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bIsPlaced; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::item_definition_index_t m_ItemDefinitionIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flStickerScale; // 0x_            
            std::uint16_t m_unDepthBias; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nStickerNumber; // 0x_            
            std::int32_t m_nDbPageNumber; // 0x_            
            bool m_bVisible; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_hDecalSpawnGroupHandle; // 0x_            
            std::uint32_t m_hDynamicPropSpawnGroupHandle; // 0x_            
            
            // Datamap fields:
            // int32_t m_Quality; // 0x_
            // int32_t m_DisplayMode; // 0x_
            // int32_t m_SubPage; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_DB_Page_StickerEntity) == 0x_);
    };
};
