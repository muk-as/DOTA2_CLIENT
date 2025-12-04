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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCachedPose
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_transforms;
            char m_transforms[0x_]; // 0x_            
            // m_morphWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_morphWeights;
            char m_morphWeights[0x_]; // 0x_            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            float m_flCycle; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_transforms) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_morphWeights) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_hSequence) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CCachedPose, m_flCycle) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CCachedPose) == 0x_);
    };
};
