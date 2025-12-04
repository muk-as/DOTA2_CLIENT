#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/scenesystem/CSSDSEndFrameViewInfo.hpp"

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSSDSMsg_EndFrame
        {
        public:
            // m_Views has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::scenesystem::CSSDSEndFrameViewInfo> m_Views;
            char m_Views[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_EndFrame, m_Views) == 0x_);
        
        static_assert(sizeof(source2sdk::scenesystem::CSSDSMsg_EndFrame) == 0x_);
    };
};
