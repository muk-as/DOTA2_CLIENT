#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimationSnapshotBase_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AnimationSnapshot_t : public source2sdk::animationsystem::AnimationSnapshotBase_t
        {
        public:
            std::int32_t m_nEntIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_modelName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AnimationSnapshot_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animationsystem::AnimationSnapshot_t) == 0x_);
    };
};
