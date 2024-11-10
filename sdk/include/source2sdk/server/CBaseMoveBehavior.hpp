#pragma once
#include "source2sdk/server/CPathKeyFrame.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathKeyFrame;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x580
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBaseMoveBehavior : public server::CPathKeyFrame
    {
    public:
        int32_t m_iPositionInterpolator; // 0x540        
        int32_t m_iRotationInterpolator; // 0x544        
        float m_flAnimStartTime; // 0x548        
        float m_flAnimEndTime; // 0x54c        
        float m_flAverageSpeedAcrossFrame; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x554[0x4]; // 0x554
        server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x558        
        server::CPathKeyFrame* m_pTargetKeyFrame; // 0x560        
        server::CPathKeyFrame* m_pPreKeyFrame; // 0x568        
        server::CPathKeyFrame* m_pPostKeyFrame; // 0x570        
        float m_flTimeIntoFrame; // 0x578        
        int32_t m_iDirection; // 0x57c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
    static_assert(sizeof(CBaseMoveBehavior) == 0x580);
};
