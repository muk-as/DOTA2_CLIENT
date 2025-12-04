#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/scenesystem/CSSDSMsg_ViewTarget.hpp"
#include "source2sdk/scenesystem/SceneViewId_t.hpp"

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
        class CSSDSMsg_ViewTargetList
        {
        public:
            source2sdk::scenesystem::SceneViewId_t m_viewId; // 0x_            
            CUtlString m_ViewName; // 0x_            
            // m_Targets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::scenesystem::CSSDSMsg_ViewTarget> m_Targets;
            char m_Targets[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTargetList, m_viewId) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTargetList, m_ViewName) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTargetList, m_Targets) == 0x_);
        
        static_assert(sizeof(source2sdk::scenesystem::CSSDSMsg_ViewTargetList) == 0x_);
    };
};
