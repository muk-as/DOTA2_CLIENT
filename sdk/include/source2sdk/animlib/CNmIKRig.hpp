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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIKRig
        {
        public:
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x_]; // 0x_            
            // m_vecBodies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmIKBody> m_vecBodies;
            char m_vecBodies[0x_]; // 0x_            
            // m_vecJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmIKJoint> m_vecJoints;
            char m_vecJoints[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_skeleton) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_vecBodies) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKRig, m_vecJoints) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKRig) == 0x_);
    };
};
