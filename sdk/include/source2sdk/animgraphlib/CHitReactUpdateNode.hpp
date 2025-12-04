#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/HitReactFixedSettings_t.hpp"

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
        #pragma pack(push, 1)
        class CHitReactUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimParamHandle m_triggerParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hitBoneParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinDelayBetweenHits; // 0x_            
            bool m_bResetChild; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHitReactUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CHitReactUpdateNode) == 0x_);
    };
};
