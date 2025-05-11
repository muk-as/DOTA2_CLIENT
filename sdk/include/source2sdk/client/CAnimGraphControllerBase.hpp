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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x80
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CAnimGraphControllerBase
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            // m_vecParamsToResetInPostGraphUpdate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CGlobalSymbol,8> m_vecParamsToResetInPostGraphUpdate;
            char m_vecParamsToResetInPostGraphUpdate[0x58]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimGraphControllerBase, m_vecParamsToResetInPostGraphUpdate) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CAnimGraphControllerBase) == 0x80);
    };
};
