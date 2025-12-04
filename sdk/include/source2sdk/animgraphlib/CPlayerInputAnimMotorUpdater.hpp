#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimMotorUpdaterBase.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

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
        class CPlayerInputAnimMotorUpdater : public source2sdk::animgraphlib::CAnimMotorUpdaterBase
        {
        public:
            // m_sampleTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_sampleTimes;
            char m_sampleTimes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSpringConstant; // 0x_            
            float m_flAnticipationDistance; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x_            
            bool m_bUseAcceleration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerInputAnimMotorUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CPlayerInputAnimMotorUpdater) == 0x_);
    };
};
