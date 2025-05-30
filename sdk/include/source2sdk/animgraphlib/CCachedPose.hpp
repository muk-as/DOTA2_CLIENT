#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCachedPose
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_transforms;
            char m_transforms[0x18]; // 0x8            
            // m_morphWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_morphWeights;
            char m_morphWeights[0x18]; // 0x20            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x38            
            float m_flCycle; // 0x3c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_transforms) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_morphWeights) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_hSequence) == 0x38);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_flCycle) == 0x3c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CCachedPose) == 0x40);
    };
};
