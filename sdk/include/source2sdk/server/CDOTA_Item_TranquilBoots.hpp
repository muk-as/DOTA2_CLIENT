#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_TranquilBoots : public source2sdk::server::CDOTA_Item
        {
        public:
            std::int32_t break_count; // 0x688            
            uint8_t _pad068c[0x4]; // 0x68c
            // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_DamageList;
            char m_DamageList[0x18]; // 0x690            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_TranquilBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_TranquilBoots) == 0x6a8);
    };
};
