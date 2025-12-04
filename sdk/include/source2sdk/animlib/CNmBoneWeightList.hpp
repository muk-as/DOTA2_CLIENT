#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        class CNmBoneWeightList
        {
        public:
            CResourceName m_skeletonName; // 0x_            
            // m_boneIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_boneIDs;
            char m_boneIDs[0x_]; // 0x_            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmBoneWeightList, m_skeletonName) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmBoneWeightList, m_boneIDs) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmBoneWeightList, m_weights) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneWeightList) == 0x_);
    };
};
