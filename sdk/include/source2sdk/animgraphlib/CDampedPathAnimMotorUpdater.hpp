#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CPathAnimMotorUpdaterBase.hpp"

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
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDampedPathAnimMotorUpdater : public source2sdk::animgraphlib::CPathAnimMotorUpdaterBase
        {
        public:
            uint8_t _pad0028[0x4]; // 0x28
            float m_flAnticipationTime; // 0x2c            
            float m_flMinSpeedScale; // 0x30            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x34            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x36            
            float m_flSpringConstant; // 0x38            
            float m_flMinSpringTension; // 0x3c            
            float m_flMaxSpringTension; // 0x40            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDampedPathAnimMotorUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CDampedPathAnimMotorUpdater) == 0x48);
    };
};
