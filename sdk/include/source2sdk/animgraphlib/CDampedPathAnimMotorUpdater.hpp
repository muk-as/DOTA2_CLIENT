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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDampedPathAnimMotorUpdater : public source2sdk::animgraphlib::CPathAnimMotorUpdaterBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flAnticipationTime; // 0x_            
            float m_flMinSpeedScale; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x_            
            float m_flSpringConstant; // 0x_            
            float m_flMinSpringTension; // 0x_            
            float m_flMaxSpringTension; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDampedPathAnimMotorUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CDampedPathAnimMotorUpdater) == 0x_);
    };
};
