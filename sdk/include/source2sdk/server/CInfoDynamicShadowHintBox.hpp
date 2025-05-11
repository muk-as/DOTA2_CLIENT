#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CInfoDynamicShadowHint.hpp"

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
        // Size: 0x508
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoDynamicShadowHintBox : public source2sdk::server::CInfoDynamicShadowHint
        {
        public:
            Vector m_vBoxMins; // 0x4f0            
            Vector m_vBoxMaxs; // 0x4fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoDynamicShadowHintBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoDynamicShadowHintBox) == 0x508);
    };
};
