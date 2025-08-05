#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

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
        // Size: 0x738
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_GemOfTrueSight : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t m_iTempViewer; // 0x728            
            std::int32_t m_iTeam; // 0x72c            
            std::int32_t m_nFXIndex; // 0x730            
            uint8_t _pad0734[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_GemOfTrueSight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_GemOfTrueSight) == 0x738);
    };
};
