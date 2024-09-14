#pragma once
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
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AimCameraOpFixedSettings_t
    {
    public:
        int32_t m_nChainIndex; // 0x0        
        int32_t m_nCameraJointIndex; // 0x4        
        int32_t m_nPelvisJointIndex; // 0x8        
        int32_t m_nClavicleLeftJointIndex; // 0xc        
        int32_t m_nClavicleRightJointIndex; // 0x10        
        int32_t m_nDepenetrationJointIndex; // 0x14        
        // m_propJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_propJoints;
        char m_propJoints[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nChainIndex) == 0x0);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nCameraJointIndex) == 0x4);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nPelvisJointIndex) == 0x8);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nClavicleLeftJointIndex) == 0xc);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nClavicleRightJointIndex) == 0x10);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_nDepenetrationJointIndex) == 0x14);
    static_assert(offsetof(AimCameraOpFixedSettings_t, m_propJoints) == 0x18);
    
    static_assert(sizeof(AimCameraOpFixedSettings_t) == 0x30);
};
