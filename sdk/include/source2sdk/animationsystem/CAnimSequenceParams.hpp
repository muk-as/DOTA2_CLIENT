#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimSequenceParams
        {
        public:
            float m_flFadeInTime; // 0x_            
            float m_flFadeOutTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimSequenceParams, m_flFadeInTime) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimSequenceParams, m_flFadeOutTime) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimSequenceParams) == 0x_);
    };
};
