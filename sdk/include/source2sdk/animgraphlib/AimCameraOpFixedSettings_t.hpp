#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AimCameraOpFixedSettings_t
        {
        public:
            std::int32_t m_nChainIndex; // 0x_            
            std::int32_t m_nCameraJointIndex; // 0x_            
            std::int32_t m_nPelvisJointIndex; // 0x_            
            std::int32_t m_nClavicleLeftJointIndex; // 0x_            
            std::int32_t m_nClavicleRightJointIndex; // 0x_            
            std::int32_t m_nDepenetrationJointIndex; // 0x_            
            // m_propJoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_propJoints;
            char m_propJoints[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nChainIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nCameraJointIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nPelvisJointIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nClavicleLeftJointIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nClavicleRightJointIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_nDepenetrationJointIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t, m_propJoints) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::AimCameraOpFixedSettings_t) == 0x_);
    };
};
