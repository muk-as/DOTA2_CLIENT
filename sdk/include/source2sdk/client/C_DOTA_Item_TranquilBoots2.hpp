#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x740
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_TranquilBoots2 : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t break_count; // 0x720            
            uint8_t _pad0724[0x4]; // 0x724
            // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_DamageList;
            char m_DamageList[0x18]; // 0x728            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_TranquilBoots2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_TranquilBoots2) == 0x740);
    };
};
