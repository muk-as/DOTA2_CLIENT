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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimAttachment
        {
        public:
            Quaternion m_influenceRotations[3]; // 0x_            
            VectorAligned m_influenceOffsets[3]; // 0x_            
            std::int32_t m_influenceIndices[3]; // 0x_            
            float m_influenceWeights[3]; // 0x_            
            std::uint8_t m_numInfluences; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CAnimAttachment, m_influenceRotations) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimAttachment, m_influenceOffsets) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimAttachment, m_influenceIndices) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimAttachment, m_influenceWeights) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimAttachment, m_numInfluences) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CAnimAttachment) == 0x_);
    };
};
