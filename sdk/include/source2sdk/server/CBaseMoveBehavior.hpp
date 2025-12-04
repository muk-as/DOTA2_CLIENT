#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathKeyFrame.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathKeyFrame;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseMoveBehavior : public source2sdk::server::CPathKeyFrame
        {
        public:
            std::int32_t m_iPositionInterpolator; // 0x_            
            std::int32_t m_iRotationInterpolator; // 0x_            
            float m_flAnimStartTime; // 0x_            
            float m_flAnimEndTime; // 0x_            
            float m_flAverageSpeedAcrossFrame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x_            
            source2sdk::server::CPathKeyFrame* m_pTargetKeyFrame; // 0x_            
            source2sdk::server::CPathKeyFrame* m_pPreKeyFrame; // 0x_            
            source2sdk::server::CPathKeyFrame* m_pPostKeyFrame; // 0x_            
            float m_flTimeIntoFrame; // 0x_            
            std::int32_t m_iDirection; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseMoveBehavior) == 0x_);
    };
};
