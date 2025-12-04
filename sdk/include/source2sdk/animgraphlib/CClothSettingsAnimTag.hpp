#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Cloth Settings Tag"
        #pragma pack(push, 1)
        class CClothSettingsAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Stiffness"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flStiffness; // 0x_            
            // metadata: MPropertyFriendlyName "EaseIn"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flEaseIn; // 0x_            
            // metadata: MPropertyFriendlyName "EaseOut"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flEaseOut; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "VertexSet"
            CUtlString m_nVertexSet; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CClothSettingsAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CClothSettingsAnimTag) == 0x_);
    };
};
