#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CPathAnimMotorUpdaterBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
    class CDampedPathAnimMotorUpdater : public animgraphlib::CPathAnimMotorUpdaterBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x28[0x4]; // 0x28
        float m_flAnticipationTime; // 0x2c        
        float m_flMinSpeedScale; // 0x30        
        animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x34        
        animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x36        
        float m_flSpringConstant; // 0x38        
        float m_flMinSpringTension; // 0x3c        
        float m_flMaxSpringTension; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDampedPathAnimMotorUpdater because it is not a standard-layout class
    static_assert(sizeof(CDampedPathAnimMotorUpdater) == 0x48);
};
