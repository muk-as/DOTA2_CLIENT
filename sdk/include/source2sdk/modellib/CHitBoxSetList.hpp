#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CHitBoxSet.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CHitBoxSetList
        {
        public:
            // m_HitBoxSets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CHitBoxSet> m_HitBoxSets;
            char m_HitBoxSets[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CHitBoxSetList, m_HitBoxSets) == 0x0);
        
        static_assert(sizeof(source2sdk::modellib::CHitBoxSetList) == 0x18);
    };
};
