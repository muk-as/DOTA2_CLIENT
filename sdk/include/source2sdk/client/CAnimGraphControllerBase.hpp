#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimGraphControllerBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ExternalAnimGraphHandle_t m_hExternalGraph; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimGraphControllerBase, m_hExternalGraph) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CAnimGraphControllerBase) == 0x_);
    };
};
