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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x570
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseMoveBehavior : public source2sdk::server::CPathKeyFrame
        {
        public:
            std::int32_t m_iPositionInterpolator; // 0x530            
            std::int32_t m_iRotationInterpolator; // 0x534            
            float m_flAnimStartTime; // 0x538            
            float m_flAnimEndTime; // 0x53c            
            float m_flAverageSpeedAcrossFrame; // 0x540            
            uint8_t _pad0544[0x4]; // 0x544
            source2sdk::server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x548            
            source2sdk::server::CPathKeyFrame* m_pTargetKeyFrame; // 0x550            
            source2sdk::server::CPathKeyFrame* m_pPreKeyFrame; // 0x558            
            source2sdk::server::CPathKeyFrame* m_pPostKeyFrame; // 0x560            
            float m_flTimeIntoFrame; // 0x568            
            std::int32_t m_iDirection; // 0x56c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseMoveBehavior) == 0x570);
    };
};
