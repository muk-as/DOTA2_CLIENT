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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CHitReactUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x70            
            uint8_t _pad00b4[0x8]; // 0xb4
            source2sdk::animgraphlib::CAnimParamHandle m_triggerParam; // 0xbc            
            source2sdk::animgraphlib::CAnimParamHandle m_hitBoneParam; // 0xbe            
            source2sdk::animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0xc0            
            source2sdk::animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0xc2            
            source2sdk::animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0xc4            
            uint8_t _pad00c6[0x2]; // 0xc6
            float m_flMinDelayBetweenHits; // 0xc8            
            bool m_bResetChild; // 0xcc            
            uint8_t _pad00cd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHitReactUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CHitReactUpdateNode) == 0xd0);
    };
};
