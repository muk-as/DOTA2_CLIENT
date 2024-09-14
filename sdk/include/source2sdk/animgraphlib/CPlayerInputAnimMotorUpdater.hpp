#pragma once
#include "source2sdk/animgraphlib/CAnimMotorUpdaterBase.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPlayerInputAnimMotorUpdater : public animgraphlib::CAnimMotorUpdaterBase
    {
    public:
        // m_sampleTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_sampleTimes;
        char m_sampleTimes[0x18]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x38[0x4]; // 0x38
        float m_flSpringConstant; // 0x3c        
        float m_flAnticipationDistance; // 0x40        
        animgraphlib::CAnimParamHandle m_hAnticipationPosParam; // 0x44        
        animgraphlib::CAnimParamHandle m_hAnticipationHeadingParam; // 0x46        
        bool m_bUseAcceleration; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x49[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayerInputAnimMotorUpdater because it is not a standard-layout class
    static_assert(sizeof(CPlayerInputAnimMotorUpdater) == 0x50);
};
