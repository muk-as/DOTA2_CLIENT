#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmSkeleton_SecondarySkeleton_t
        {
        public:
            CGlobalSymbol m_attachToBoneID; // 0x0            
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton_SecondarySkeleton_t, m_attachToBoneID) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton_SecondarySkeleton_t, m_skeleton) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmSkeleton_SecondarySkeleton_t) == 0x10);
    };
};
