#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CInfoDynamicShadowHint.hpp"

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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoDynamicShadowHintBox : public source2sdk::client::CInfoDynamicShadowHint
        {
        public:
            Vector m_vBoxMins; // 0x5f8            
            Vector m_vBoxMaxs; // 0x604            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoDynamicShadowHintBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoDynamicShadowHintBox) == 0x610);
    };
};
