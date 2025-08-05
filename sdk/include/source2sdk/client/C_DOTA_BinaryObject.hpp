#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"

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
        // Size: 0x9c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BinaryObject : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            bool m_bActive; // 0x9c0            
            uint8_t _pad09c1[0x3]; // 0x9c1
            std::int32_t m_nBinaryID; // 0x9c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BinaryObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BinaryObject) == 0x9c8);
    };
};
