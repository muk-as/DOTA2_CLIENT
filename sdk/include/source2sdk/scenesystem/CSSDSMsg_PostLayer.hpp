#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/scenesystem/CSSDSMsg_LayerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSSDSMsg_PostLayer : public source2sdk::scenesystem::CSSDSMsg_LayerBase
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::scenesystem::CSSDSMsg_PostLayer) == 0x38);
    };
};
