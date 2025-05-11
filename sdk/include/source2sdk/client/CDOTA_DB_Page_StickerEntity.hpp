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
        // Size: 0x560
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_DB_Page_StickerEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bIsPlaced; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            source2sdk::client::item_definition_index_t m_ItemDefinitionIndex; // 0x514            
            uint8_t _pad0518[0xc]; // 0x518
            float m_flStickerScale; // 0x524            
            std::uint16_t m_unDepthBias; // 0x528            
            uint8_t _pad052a[0x2]; // 0x52a
            std::int32_t m_nStickerNumber; // 0x52c            
            std::int32_t m_nDbPageNumber; // 0x530            
            bool m_bVisible; // 0x534            
            uint8_t _pad0535[0x23]; // 0x535
            std::uint32_t m_hDecalSpawnGroupHandle; // 0x558            
            std::uint32_t m_hDynamicPropSpawnGroupHandle; // 0x55c            
            
            // Datamap fields:
            // int32_t m_Quality; // 0x518
            // int32_t m_DisplayMode; // 0x51c
            // int32_t m_SubPage; // 0x520
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DB_Page_StickerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_DB_Page_StickerEntity) == 0x560);
    };
};
