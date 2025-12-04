#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAttachment
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlString m_influenceNames[3]; // 0x_            
            Quaternion m_vInfluenceRotations[3]; // 0x_            
            Vector m_vInfluenceOffsets[3]; // 0x_            
            float m_influenceWeights[3]; // 0x_            
            bool m_bInfluenceRootTransform[3]; // 0x_            
            std::uint8_t m_nInfluences; // 0x_            
            bool m_bIgnoreRotation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_influenceNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_vInfluenceRotations) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_vInfluenceOffsets) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_influenceWeights) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_bInfluenceRootTransform) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_nInfluences) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAttachment, m_bIgnoreRotation) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CAttachment) == 0x_);
    };
};
