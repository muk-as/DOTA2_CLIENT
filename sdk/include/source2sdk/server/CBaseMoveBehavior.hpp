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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseMoveBehavior : public server::CPathKeyFrame
    {
    public:
        int32_t m_iPositionInterpolator; // 0x510        
        int32_t m_iRotationInterpolator; // 0x514        
        float m_flAnimStartTime; // 0x518        
        float m_flAnimEndTime; // 0x51c        
        float m_flAverageSpeedAcrossFrame; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x524[0x4]; // 0x524
        server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x528        
        server::CPathKeyFrame* m_pTargetKeyFrame; // 0x530        
        server::CPathKeyFrame* m_pPreKeyFrame; // 0x538        
        server::CPathKeyFrame* m_pPostKeyFrame; // 0x540        
        float m_flTimeIntoFrame; // 0x548        
        int32_t m_iDirection; // 0x54c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
    static_assert(sizeof(CBaseMoveBehavior) == 0x550);
};
