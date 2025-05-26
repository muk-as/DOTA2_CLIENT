#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BinaryObject.hpp"

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
        // Size: 0xab8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_MapTree : public source2sdk::client::C_DOTA_BinaryObject
        {
        public:
            uint8_t _pad09a0[0x30]; // 0x9a0
            bool m_bInitialized; // 0x9d0            
            uint8_t _pad09d1[0xe7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_MapTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_MapTree) == 0xab8);
    };
};
