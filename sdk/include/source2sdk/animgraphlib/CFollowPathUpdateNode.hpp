#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFollowPathUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            float m_flBlendOutTime; // 0x74            
            bool m_bBlockNonPathMovement; // 0x78            
            bool m_bStopFeetAtGoal; // 0x79            
            bool m_bScaleSpeed; // 0x7a            
            uint8_t _pad007b[0x1]; // 0x7b
            float m_flScale; // 0x7c            
            float m_flMinAngle; // 0x80            
            float m_flMaxAngle; // 0x84            
            float m_flSpeedScaleBlending; // 0x88            
            uint8_t _pad008c[0x4]; // 0x8c
            source2sdk::animgraphlib::CAnimInputDamping m_turnDamping; // 0x90            
            source2sdk::animgraphlib::AnimValueSource m_facingTarget; // 0xa8            
            source2sdk::animgraphlib::CAnimParamHandle m_hParam; // 0xac            
            uint8_t _pad00ae[0x2]; // 0xae
            float m_flTurnToFaceOffset; // 0xb0            
            bool m_bTurnToFace; // 0xb4            
            uint8_t _pad00b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFollowPathUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFollowPathUpdateNode) == 0xb8);
    };
};
