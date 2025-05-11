#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmRootMotionData
        {
        public:
            // m_transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_transforms;
            char m_transforms[0x18]; // 0x0            
            std::int32_t m_nNumFrames; // 0x18            
            float m_flAverageLinearVelocity; // 0x1c            
            float m_flAverageAngularVelocityRadians; // 0x20            
            uint8_t _pad0024[0xc]; // 0x24
            CTransform m_totalDelta; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_transforms) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_nNumFrames) == 0x18);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_flAverageLinearVelocity) == 0x1c);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_flAverageAngularVelocityRadians) == 0x20);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_totalDelta) == 0x30);
        
        static_assert(sizeof(source2sdk::animlib::CNmRootMotionData) == 0x50);
    };
};
