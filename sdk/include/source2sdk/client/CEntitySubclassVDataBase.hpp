#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataUseLinkedEntityClasses
        #pragma pack(push, 1)
        class CEntitySubclassVDataBase
        {
        public:
            uint8_t _pad0000[0x28];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CEntitySubclassVDataBase) == 0x28);
    };
};
