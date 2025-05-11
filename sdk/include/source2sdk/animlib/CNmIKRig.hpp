#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmIKBody.hpp"
#include "source2sdk/animlib/CNmIKJoint.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIKRig
        {
        public:
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x0            
            // m_vecBodies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmIKBody> m_vecBodies;
            char m_vecBodies[0x18]; // 0x8            
            // m_vecJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmIKJoint> m_vecJoints;
            char m_vecJoints[0x18]; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_skeleton) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_vecBodies) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_vecJoints) == 0x20);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKRig) == 0x38);
    };
};
